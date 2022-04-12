let listOf = item => sequenceWithSeparator(item, ',')
let sequenceWithSeparator = (item, separator) => seq(item, optional(repeat(seq(separator, item))))
let addNumberParameter = ($, item) => seq(item, ':', $.number_literal)
let makeFunction = ($, keyword) => seq(
  caseInsensitive(keyword),
  '(', optional($.fieldName), ')'
)
let withOptionalAlias = ($, item) => seq(
  item,
  optional($.alias)
)

let _buildFieldExpression = ($, comparisonSources) => seq(
  choice(...comparisonSources),
  // $.fieldName,
  choice(
    seq(
      $.comparisonOperator,
      $.value
    ),
    seq(
      $.comparisonListOperator,
      seq(
        '(',
        choice( listOf($.value), $.query),
        ')',
      )
    )
  ),
)

let _buildConditionExpression = ($, fieldExpr) => sequenceWithSeparator(
  choice(
    fieldExpr, 
    $.fieldExpressionGroup
  ), 
  $.logical_operator
)

module.exports = grammar({
  name: 'SOQL',

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat1($.query),
    query: $ => seq(
      $.keyword_select,
      $.fieldList,
      $.keyword_from,
      $.sObject,
      optional( $.where ),
      optional( $.group_by ),
      optional( $.order_by ),
      optional( $.limit ),
      optional( $.offset ),
    ),
    keyword_select: $ => caseInsensitive('SELECT'),
    keyword_typeof: $ => caseInsensitive('TYPEOF'),
    keyword_when: $ => caseInsensitive('WHEN'),
    keyword_then: $ => caseInsensitive('THEN'),
    keyword_else: $ => caseInsensitive('ELSE'),
    keyword_end: $ => caseInsensitive('END'),
    keyword_from: $ => caseInsensitive('FROM'),
    keyword_where: $ => caseInsensitive('WHERE'),
    keyword_having: $ => caseInsensitive('HAVING'),
    keyword_group_by: $ => caseInsensitive('GROUP BY'),
    keyword_orderby: $ => caseInsensitive('ORDER BY'),
    keyword_limit: $ => caseInsensitive('LIMIT'),
    fieldList: $ => listOf(
      choice(
        withOptionalAlias($, $.fieldName),
        seq( '(', $.query, ')'),
        withOptionalAlias($, $.aggregateFunction),
        $.typeof,
      ),
    ),
    fieldName: $ => seq(
      repeat(
        seq(
          field('parentSObject', $.identifier),
          '.'
        )
      ),
      field('name', $.identifier),
    ),
    alias: $ => field('name', $.identifier),
    aggregateFunction: $ => choice(
      makeFunction($, 'COUNT'),
      makeFunction($, 'AVG'),
      makeFunction($, 'COUNT_DISTINCT'),
      makeFunction($, 'MIN'),
      makeFunction($, 'MAX'),
      makeFunction($, 'SUM'),
    ),
    typeof: $ => seq(
      $.keyword_typeof,
      $.typeofField,
      repeat1(
        seq(
          $.keyword_when,
          $.whenObjectType,
          $.keyword_then,
          $.whenFieldList
        )
      ),
      optional(
        seq(
          $.keyword_else,
          $.elseFieldList
        )
      ),
      $.keyword_end
    ),
    typeofField: $ => $.fieldName,
    whenObjectType: $ => $.sObject,
    whenFieldList: $ => $.fieldList,
    elseFieldList: $ => $.fieldList,
    // Usually, an sObject is just referred to by it's name, eg. `Account`. However, in subqueries, we might see a dot notation like
    // `...(SELECT Contact.LastName FROM Account.Contacts)...`
    sObject: $ => seq(
      repeat(
        seq(
          field('parentSObject', $.identifier),
          '.'
        )
      ),
      $.identifier,
    ),
    where: $ => seq(
      $.keyword_where,
      $.conditionExpression
    ),
    fieldExpressionGroup: $ => seq(
      '(',
      sequenceWithSeparator($.fieldExpression, $.logical_operator),
      ')',
    ),
    conditionExpression: $ => _buildConditionExpression($, $.fieldExpression),
    fieldExpression: $ => _buildFieldExpression(
      $,
      [ $.fieldName ]
    ),
    fieldHavingExpression: $ => _buildFieldExpression(
      $, 
      [ $.aggregateFunction, $.fieldName ]
    ),
    comparisonOperator: $ => choice(
      $.operator_equals,
      $.operator_not_equals,
      $.operator_less_than,
      $.operator_less_or_equal,
      $.operator_greater_than,
      $.operator_greater_or_equal,
      $.operator_like,
      $.operator_includes,
      $.operator_excludes,
    ),
    comparisonListOperator: $ => choice(
      $.operator_in,
      $.operator_not_in,
    ),
    operator_equals: $ => '=',
    operator_not_equals: $ => '!=',
    operator_less_than: $ => '<',
    operator_less_or_equal: $ => '<=',
    operator_greater_than: $ => '>',
    operator_greater_or_equal: $ => '>=',
    operator_like: $ => caseInsensitive('LIKE'),
    operator_in: $ => caseInsensitive('IN'),
    operator_not_in: $ => caseInsensitive('NOT IN'),
    operator_includes: $ => caseInsensitive('INCLUDES'),
    operator_excludes: $ => caseInsensitive('EXCLUDES'),
    operator_and: $ => caseInsensitive('AND'),
    operator_or: $ => caseInsensitive('OR'),
    operator_not: $ => caseInsensitive('NOT'),
    operator_yesterday: $ => 'YESTERDAY',
    operator_today: $ => 'TODAY',
    operator_tomorrow: $ => 'TOMORROW',
    operator_last_week: $ => 'LAST_WEEK',
    operator_this_week: $ => 'THIS_WEEK',
    operator_next_week: $ => 'NEXT_WEEK',
    operator_last_month: $ => 'LAST_MONTH',
    operator_this_month: $ => 'THIS_MONTH',
    operator_next_month: $ => 'NEXT_MONTH',
    operator_last_90_days: $ => 'LAST_90_DAYS',
    operator_next_90_days: $ => 'NEXT_90_DAYS',
    operator_last_n_days: $ => addNumberParameter($, 'LAST_N_DAYS'),
    operator_next_n_days: $ => addNumberParameter($, 'NEXT_N_DAYS'),
    operator_next_n_weeks: $ => addNumberParameter($, 'NEXT_N_WEEKS'),
    operator_last_n_weeks: $ => addNumberParameter($, 'LAST_N_WEEKS'),
    operator_next_n_months: $ => addNumberParameter($, 'NEXT_N_MONTHS'),
    operator_last_n_months: $ => addNumberParameter($, 'LAST_N_MONTHS'),
    operator_this_quarter: $ => 'THIS_QUARTER',
    operator_last_quarter: $ => 'LAST_QUARTER',
    operator_next_quarter: $ => 'NEXT_QUARTER',
    operator_next_n_quarters: $ => addNumberParameter($, 'NEXT_N_QUARTERS'),
    operator_last_n_quarters: $ => addNumberParameter($, 'LAST_N_QUARTERS'),
    operator_this_year: $ => 'THIS_YEAR',
    operator_last_year: $ => 'LAST_YEAR',
    operator_next_year: $ => 'NEXT_YEAR',
    operator_next_n_years: $ => addNumberParameter($, 'NEXT_N_YEARS'),
    operator_last_n_years: $ => addNumberParameter($, 'LAST_N_YEARS'),
    operator_this_fiscal_quarter: $ => 'THIS_FISCAL_QUARTER',
    operator_last_fiscal_quarter: $ => 'LAST_FISCAL_QUARTER',
    operator_next_fiscal_quarter: $ => 'NEXT_FISCAL_QUARTER',
    operator_next_n_fiscal_quarters: $ => addNumberParameter($, 'NEXT_N_FISCAL_QUARTERS'),
    operator_last_n_fiscal_quarters: $ => addNumberParameter($, 'LAST_N_FISCAL_QUARTERS'),
    operator_this_fiscal_year: $ => 'THIS_FISCAL_YEAR',
    operator_last_fiscal_year: $ => 'LAST_FISCAL_YEAR',
    operator_next_fiscal_year: $ => 'NEXT_FISCAL_YEAR',
    operator_next_n_fiscal_years: $ => addNumberParameter($, 'NEXT_N_FISCAL_YEARS'),
    operator_last_n_fiscal_years: $ => addNumberParameter($, 'LAST_N_FISCAL_YEARS'),
    logical_operator: $ => choice(
      $.operator_and,
      $.operator_or,
      $.operator_not
    ),
    datetime_operator: $ => choice(
      $.operator_yesterday,
      $.operator_today,
      $.operator_tomorrow,
      $.operator_last_week,
      $.operator_this_week,
      $.operator_next_week,
      $.operator_last_month,
      $.operator_this_month,
      $.operator_next_month,
      $.operator_last_90_days,
      $.operator_next_90_days,
      $.operator_last_n_days,
      $.operator_next_n_days,
      $.operator_next_n_weeks,
      $.operator_last_n_weeks,
      $.operator_next_n_months,
      $.operator_last_n_months,
      $.operator_this_quarter,
      $.operator_last_quarter,
      $.operator_next_quarter,
      $.operator_next_n_quarters,
      $.operator_last_n_quarters,
      $.operator_this_year,
      $.operator_last_year,
      $.operator_next_year,
      $.operator_next_n_years,
      $.operator_last_n_years,
      $.operator_this_fiscal_quarter,
      $.operator_last_fiscal_quarter,
      $.operator_next_fiscal_quarter,
      $.operator_next_n_fiscal_quarters,
      $.operator_last_n_fiscal_quarters,
      $.operator_this_fiscal_year,
      $.operator_last_fiscal_year,
      $.operator_next_fiscal_year,
      $.operator_next_n_fiscal_years,
      $.operator_last_n_fiscal_years,
    ),
    value: $ => choice(
      $.string_literal,
      $.number_literal,
      $.null_literal,
      $.date_literal,
      $.datetime_literal,
      $.datetime_operator,
      //todo: bind variable
    ),
    string_literal: $ => seq("'", repeat( choice(/\\'/, /[^']/)), "'"),
    null_literal: $ => caseInsensitive('null'),
    number_literal: $ => /\d+/,
    date_literal: $ => /\d{4}-\d{2}-\d{2}/,
    datetime_literal: $ => {
      const date_literal = /\d{4}-\d{2}-\d{2}/;
      const time_literal =  /\d{2}:\d{2}:\d{2}/;
      const milliseconds_literal = /\.\d{3}/;
      const timezone_literal = choice('Z', /(\+|-)\d{2}:\d{2}/);
      return token(
        seq(
          date_literal,
          'T',
          time_literal,
          optional(milliseconds_literal),
          timezone_literal
        )
    )},
    // datetime_literal: $ => /\d{4}-\d{2}-\d{2}T\d{2}:\d{2}:\d{2}(Z|(\+|-)\d{2}:\d{2})/,
    group_by: $ => seq(
      $.keyword_group_by,
      $.fieldGroupByList,
      optional($.having)
    ),
    fieldGroupByList: $ => listOf($.fieldName),
    having: $ => seq(
      $.keyword_having,
      $.havingConditionExpression
    ),
    havingConditionExpression: $ => _buildConditionExpression($, $.fieldHavingExpression),
    order_by: $ => seq(
      $.keyword_orderby,
      $.fieldOrderByList,
      optional($.orderDirection),
      optional($.nullHandling)
    ),
    fieldOrderByList: $ => listOf($.fieldName),
    limit: $ => seq(
      $.keyword_limit,
      $.numberOfRowsToReturn
    ),
    orderDirection: $ => choice(
      caseInsensitive('ASC'), 
      caseInsensitive('DESC'),
    ),
    nullHandling: $ => seq(
      caseInsensitive('NULLS'),
      choice(
          caseInsensitive('FIRST'), 
          caseInsensitive('LAST'),
      ),
    ),
    numberOfRowsToReturn: $ => $.number_literal,
    offset: $ => seq(
      caseInsensitive('OFFSET'),
      $.number_literal
    ),
    identifier: $ => /([a-zA-Z_][0-9a-zA-Z_]*)/
  }
});

function toCaseInsensitive(a) {
  var ca = a.charCodeAt(0);
  if (ca>=97 && ca<=122) return `[${a}${a.toUpperCase()}]`;
  if (ca>=65 && ca<= 90) return `[${a.toLowerCase()}${a}]`;
  return a;
}

function caseInsensitive (keyword) {
  return new RegExp(keyword
    .split('')
    .map(toCaseInsensitive)
    .join('')
  )
}
