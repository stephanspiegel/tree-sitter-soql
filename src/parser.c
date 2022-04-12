#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 270
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 147
#define ALIAS_COUNT 0
#define TOKEN_COUNT 89
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 6

enum {
  sym_identifier = 1,
  sym_keyword_select = 2,
  sym_keyword_typeof = 3,
  sym_keyword_when = 4,
  sym_keyword_then = 5,
  sym_keyword_else = 6,
  sym_keyword_end = 7,
  sym_keyword_from = 8,
  sym_keyword_where = 9,
  sym_keyword_having = 10,
  sym_keyword_group_by = 11,
  sym_keyword_orderby = 12,
  sym_keyword_limit = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_COMMA = 16,
  anon_sym_DOT = 17,
  aux_sym_aggregateFunction_token1 = 18,
  aux_sym_aggregateFunction_token2 = 19,
  aux_sym_aggregateFunction_token3 = 20,
  aux_sym_aggregateFunction_token4 = 21,
  aux_sym_aggregateFunction_token5 = 22,
  aux_sym_aggregateFunction_token6 = 23,
  sym_operator_equals = 24,
  sym_operator_not_equals = 25,
  sym_operator_less_than = 26,
  sym_operator_less_or_equal = 27,
  sym_operator_greater_than = 28,
  sym_operator_greater_or_equal = 29,
  sym_operator_like = 30,
  sym_operator_in = 31,
  sym_operator_not_in = 32,
  sym_operator_includes = 33,
  sym_operator_excludes = 34,
  sym_operator_and = 35,
  sym_operator_or = 36,
  sym_operator_not = 37,
  sym_operator_yesterday = 38,
  sym_operator_today = 39,
  sym_operator_tomorrow = 40,
  sym_operator_last_week = 41,
  sym_operator_this_week = 42,
  sym_operator_next_week = 43,
  sym_operator_last_month = 44,
  sym_operator_this_month = 45,
  sym_operator_next_month = 46,
  sym_operator_last_90_days = 47,
  sym_operator_next_90_days = 48,
  anon_sym_LAST_N_DAYS = 49,
  anon_sym_COLON = 50,
  anon_sym_NEXT_N_DAYS = 51,
  anon_sym_NEXT_N_WEEKS = 52,
  anon_sym_LAST_N_WEEKS = 53,
  anon_sym_NEXT_N_MONTHS = 54,
  anon_sym_LAST_N_MONTHS = 55,
  sym_operator_this_quarter = 56,
  sym_operator_last_quarter = 57,
  sym_operator_next_quarter = 58,
  anon_sym_NEXT_N_QUARTERS = 59,
  anon_sym_LAST_N_QUARTERS = 60,
  sym_operator_this_year = 61,
  sym_operator_last_year = 62,
  sym_operator_next_year = 63,
  anon_sym_NEXT_N_YEARS = 64,
  anon_sym_LAST_N_YEARS = 65,
  sym_operator_this_fiscal_quarter = 66,
  sym_operator_last_fiscal_quarter = 67,
  sym_operator_next_fiscal_quarter = 68,
  anon_sym_NEXT_N_FISCAL_QUARTERS = 69,
  anon_sym_LAST_N_FISCAL_QUARTERS = 70,
  sym_operator_this_fiscal_year = 71,
  sym_operator_last_fiscal_year = 72,
  sym_operator_next_fiscal_year = 73,
  anon_sym_NEXT_N_FISCAL_YEARS = 74,
  anon_sym_LAST_N_FISCAL_YEARS = 75,
  anon_sym_SQUOTE = 76,
  aux_sym_string_literal_token1 = 77,
  aux_sym_string_literal_token2 = 78,
  sym_null_literal = 79,
  sym_number_literal = 80,
  sym_date_literal = 81,
  sym_datetime_literal = 82,
  aux_sym_orderDirection_token1 = 83,
  aux_sym_orderDirection_token2 = 84,
  aux_sym_nullHandling_token1 = 85,
  aux_sym_nullHandling_token2 = 86,
  aux_sym_nullHandling_token3 = 87,
  aux_sym_offset_token1 = 88,
  sym_source_file = 89,
  sym_query = 90,
  sym_fieldList = 91,
  sym_fieldName = 92,
  sym_alias = 93,
  sym_aggregateFunction = 94,
  sym_typeof = 95,
  sym_typeofField = 96,
  sym_whenObjectType = 97,
  sym_whenFieldList = 98,
  sym_elseFieldList = 99,
  sym_sObject = 100,
  sym_where = 101,
  sym_fieldExpressionGroup = 102,
  sym_conditionExpression = 103,
  sym_fieldExpression = 104,
  sym_fieldHavingExpression = 105,
  sym_comparisonOperator = 106,
  sym_comparisonListOperator = 107,
  sym_operator_last_n_days = 108,
  sym_operator_next_n_days = 109,
  sym_operator_next_n_weeks = 110,
  sym_operator_last_n_weeks = 111,
  sym_operator_next_n_months = 112,
  sym_operator_last_n_months = 113,
  sym_operator_next_n_quarters = 114,
  sym_operator_last_n_quarters = 115,
  sym_operator_next_n_years = 116,
  sym_operator_last_n_years = 117,
  sym_operator_next_n_fiscal_quarters = 118,
  sym_operator_last_n_fiscal_quarters = 119,
  sym_operator_next_n_fiscal_years = 120,
  sym_operator_last_n_fiscal_years = 121,
  sym_logical_operator = 122,
  sym_datetime_operator = 123,
  sym_value = 124,
  sym_string_literal = 125,
  sym_group_by = 126,
  sym_fieldGroupByList = 127,
  sym_having = 128,
  sym_havingConditionExpression = 129,
  sym_order_by = 130,
  sym_fieldOrderByList = 131,
  sym_limit = 132,
  sym_orderDirection = 133,
  sym_nullHandling = 134,
  sym_numberOfRowsToReturn = 135,
  sym_offset = 136,
  aux_sym_source_file_repeat1 = 137,
  aux_sym_fieldList_repeat1 = 138,
  aux_sym_fieldName_repeat1 = 139,
  aux_sym_typeof_repeat1 = 140,
  aux_sym_fieldExpressionGroup_repeat1 = 141,
  aux_sym_conditionExpression_repeat1 = 142,
  aux_sym_fieldExpression_repeat1 = 143,
  aux_sym_string_literal_repeat1 = 144,
  aux_sym_fieldGroupByList_repeat1 = 145,
  aux_sym_havingConditionExpression_repeat1 = 146,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_typeof] = "keyword_typeof",
  [sym_keyword_when] = "keyword_when",
  [sym_keyword_then] = "keyword_then",
  [sym_keyword_else] = "keyword_else",
  [sym_keyword_end] = "keyword_end",
  [sym_keyword_from] = "keyword_from",
  [sym_keyword_where] = "keyword_where",
  [sym_keyword_having] = "keyword_having",
  [sym_keyword_group_by] = "keyword_group_by",
  [sym_keyword_orderby] = "keyword_orderby",
  [sym_keyword_limit] = "keyword_limit",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [aux_sym_aggregateFunction_token1] = "aggregateFunction_token1",
  [aux_sym_aggregateFunction_token2] = "aggregateFunction_token2",
  [aux_sym_aggregateFunction_token3] = "aggregateFunction_token3",
  [aux_sym_aggregateFunction_token4] = "aggregateFunction_token4",
  [aux_sym_aggregateFunction_token5] = "aggregateFunction_token5",
  [aux_sym_aggregateFunction_token6] = "aggregateFunction_token6",
  [sym_operator_equals] = "operator_equals",
  [sym_operator_not_equals] = "operator_not_equals",
  [sym_operator_less_than] = "operator_less_than",
  [sym_operator_less_or_equal] = "operator_less_or_equal",
  [sym_operator_greater_than] = "operator_greater_than",
  [sym_operator_greater_or_equal] = "operator_greater_or_equal",
  [sym_operator_like] = "operator_like",
  [sym_operator_in] = "operator_in",
  [sym_operator_not_in] = "operator_not_in",
  [sym_operator_includes] = "operator_includes",
  [sym_operator_excludes] = "operator_excludes",
  [sym_operator_and] = "operator_and",
  [sym_operator_or] = "operator_or",
  [sym_operator_not] = "operator_not",
  [sym_operator_yesterday] = "operator_yesterday",
  [sym_operator_today] = "operator_today",
  [sym_operator_tomorrow] = "operator_tomorrow",
  [sym_operator_last_week] = "operator_last_week",
  [sym_operator_this_week] = "operator_this_week",
  [sym_operator_next_week] = "operator_next_week",
  [sym_operator_last_month] = "operator_last_month",
  [sym_operator_this_month] = "operator_this_month",
  [sym_operator_next_month] = "operator_next_month",
  [sym_operator_last_90_days] = "operator_last_90_days",
  [sym_operator_next_90_days] = "operator_next_90_days",
  [anon_sym_LAST_N_DAYS] = "LAST_N_DAYS",
  [anon_sym_COLON] = ":",
  [anon_sym_NEXT_N_DAYS] = "NEXT_N_DAYS",
  [anon_sym_NEXT_N_WEEKS] = "NEXT_N_WEEKS",
  [anon_sym_LAST_N_WEEKS] = "LAST_N_WEEKS",
  [anon_sym_NEXT_N_MONTHS] = "NEXT_N_MONTHS",
  [anon_sym_LAST_N_MONTHS] = "LAST_N_MONTHS",
  [sym_operator_this_quarter] = "operator_this_quarter",
  [sym_operator_last_quarter] = "operator_last_quarter",
  [sym_operator_next_quarter] = "operator_next_quarter",
  [anon_sym_NEXT_N_QUARTERS] = "NEXT_N_QUARTERS",
  [anon_sym_LAST_N_QUARTERS] = "LAST_N_QUARTERS",
  [sym_operator_this_year] = "operator_this_year",
  [sym_operator_last_year] = "operator_last_year",
  [sym_operator_next_year] = "operator_next_year",
  [anon_sym_NEXT_N_YEARS] = "NEXT_N_YEARS",
  [anon_sym_LAST_N_YEARS] = "LAST_N_YEARS",
  [sym_operator_this_fiscal_quarter] = "operator_this_fiscal_quarter",
  [sym_operator_last_fiscal_quarter] = "operator_last_fiscal_quarter",
  [sym_operator_next_fiscal_quarter] = "operator_next_fiscal_quarter",
  [anon_sym_NEXT_N_FISCAL_QUARTERS] = "NEXT_N_FISCAL_QUARTERS",
  [anon_sym_LAST_N_FISCAL_QUARTERS] = "LAST_N_FISCAL_QUARTERS",
  [sym_operator_this_fiscal_year] = "operator_this_fiscal_year",
  [sym_operator_last_fiscal_year] = "operator_last_fiscal_year",
  [sym_operator_next_fiscal_year] = "operator_next_fiscal_year",
  [anon_sym_NEXT_N_FISCAL_YEARS] = "NEXT_N_FISCAL_YEARS",
  [anon_sym_LAST_N_FISCAL_YEARS] = "LAST_N_FISCAL_YEARS",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [sym_null_literal] = "null_literal",
  [sym_number_literal] = "number_literal",
  [sym_date_literal] = "date_literal",
  [sym_datetime_literal] = "datetime_literal",
  [aux_sym_orderDirection_token1] = "orderDirection_token1",
  [aux_sym_orderDirection_token2] = "orderDirection_token2",
  [aux_sym_nullHandling_token1] = "nullHandling_token1",
  [aux_sym_nullHandling_token2] = "nullHandling_token2",
  [aux_sym_nullHandling_token3] = "nullHandling_token3",
  [aux_sym_offset_token1] = "offset_token1",
  [sym_source_file] = "source_file",
  [sym_query] = "query",
  [sym_fieldList] = "fieldList",
  [sym_fieldName] = "fieldName",
  [sym_alias] = "alias",
  [sym_aggregateFunction] = "aggregateFunction",
  [sym_typeof] = "typeof",
  [sym_typeofField] = "typeofField",
  [sym_whenObjectType] = "whenObjectType",
  [sym_whenFieldList] = "whenFieldList",
  [sym_elseFieldList] = "elseFieldList",
  [sym_sObject] = "sObject",
  [sym_where] = "where",
  [sym_fieldExpressionGroup] = "fieldExpressionGroup",
  [sym_conditionExpression] = "conditionExpression",
  [sym_fieldExpression] = "fieldExpression",
  [sym_fieldHavingExpression] = "fieldHavingExpression",
  [sym_comparisonOperator] = "comparisonOperator",
  [sym_comparisonListOperator] = "comparisonListOperator",
  [sym_operator_last_n_days] = "operator_last_n_days",
  [sym_operator_next_n_days] = "operator_next_n_days",
  [sym_operator_next_n_weeks] = "operator_next_n_weeks",
  [sym_operator_last_n_weeks] = "operator_last_n_weeks",
  [sym_operator_next_n_months] = "operator_next_n_months",
  [sym_operator_last_n_months] = "operator_last_n_months",
  [sym_operator_next_n_quarters] = "operator_next_n_quarters",
  [sym_operator_last_n_quarters] = "operator_last_n_quarters",
  [sym_operator_next_n_years] = "operator_next_n_years",
  [sym_operator_last_n_years] = "operator_last_n_years",
  [sym_operator_next_n_fiscal_quarters] = "operator_next_n_fiscal_quarters",
  [sym_operator_last_n_fiscal_quarters] = "operator_last_n_fiscal_quarters",
  [sym_operator_next_n_fiscal_years] = "operator_next_n_fiscal_years",
  [sym_operator_last_n_fiscal_years] = "operator_last_n_fiscal_years",
  [sym_logical_operator] = "logical_operator",
  [sym_datetime_operator] = "datetime_operator",
  [sym_value] = "value",
  [sym_string_literal] = "string_literal",
  [sym_group_by] = "group_by",
  [sym_fieldGroupByList] = "fieldGroupByList",
  [sym_having] = "having",
  [sym_havingConditionExpression] = "havingConditionExpression",
  [sym_order_by] = "order_by",
  [sym_fieldOrderByList] = "fieldOrderByList",
  [sym_limit] = "limit",
  [sym_orderDirection] = "orderDirection",
  [sym_nullHandling] = "nullHandling",
  [sym_numberOfRowsToReturn] = "numberOfRowsToReturn",
  [sym_offset] = "offset",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_fieldList_repeat1] = "fieldList_repeat1",
  [aux_sym_fieldName_repeat1] = "fieldName_repeat1",
  [aux_sym_typeof_repeat1] = "typeof_repeat1",
  [aux_sym_fieldExpressionGroup_repeat1] = "fieldExpressionGroup_repeat1",
  [aux_sym_conditionExpression_repeat1] = "conditionExpression_repeat1",
  [aux_sym_fieldExpression_repeat1] = "fieldExpression_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_fieldGroupByList_repeat1] = "fieldGroupByList_repeat1",
  [aux_sym_havingConditionExpression_repeat1] = "havingConditionExpression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_keyword_select] = sym_keyword_select,
  [sym_keyword_typeof] = sym_keyword_typeof,
  [sym_keyword_when] = sym_keyword_when,
  [sym_keyword_then] = sym_keyword_then,
  [sym_keyword_else] = sym_keyword_else,
  [sym_keyword_end] = sym_keyword_end,
  [sym_keyword_from] = sym_keyword_from,
  [sym_keyword_where] = sym_keyword_where,
  [sym_keyword_having] = sym_keyword_having,
  [sym_keyword_group_by] = sym_keyword_group_by,
  [sym_keyword_orderby] = sym_keyword_orderby,
  [sym_keyword_limit] = sym_keyword_limit,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_aggregateFunction_token1] = aux_sym_aggregateFunction_token1,
  [aux_sym_aggregateFunction_token2] = aux_sym_aggregateFunction_token2,
  [aux_sym_aggregateFunction_token3] = aux_sym_aggregateFunction_token3,
  [aux_sym_aggregateFunction_token4] = aux_sym_aggregateFunction_token4,
  [aux_sym_aggregateFunction_token5] = aux_sym_aggregateFunction_token5,
  [aux_sym_aggregateFunction_token6] = aux_sym_aggregateFunction_token6,
  [sym_operator_equals] = sym_operator_equals,
  [sym_operator_not_equals] = sym_operator_not_equals,
  [sym_operator_less_than] = sym_operator_less_than,
  [sym_operator_less_or_equal] = sym_operator_less_or_equal,
  [sym_operator_greater_than] = sym_operator_greater_than,
  [sym_operator_greater_or_equal] = sym_operator_greater_or_equal,
  [sym_operator_like] = sym_operator_like,
  [sym_operator_in] = sym_operator_in,
  [sym_operator_not_in] = sym_operator_not_in,
  [sym_operator_includes] = sym_operator_includes,
  [sym_operator_excludes] = sym_operator_excludes,
  [sym_operator_and] = sym_operator_and,
  [sym_operator_or] = sym_operator_or,
  [sym_operator_not] = sym_operator_not,
  [sym_operator_yesterday] = sym_operator_yesterday,
  [sym_operator_today] = sym_operator_today,
  [sym_operator_tomorrow] = sym_operator_tomorrow,
  [sym_operator_last_week] = sym_operator_last_week,
  [sym_operator_this_week] = sym_operator_this_week,
  [sym_operator_next_week] = sym_operator_next_week,
  [sym_operator_last_month] = sym_operator_last_month,
  [sym_operator_this_month] = sym_operator_this_month,
  [sym_operator_next_month] = sym_operator_next_month,
  [sym_operator_last_90_days] = sym_operator_last_90_days,
  [sym_operator_next_90_days] = sym_operator_next_90_days,
  [anon_sym_LAST_N_DAYS] = anon_sym_LAST_N_DAYS,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_NEXT_N_DAYS] = anon_sym_NEXT_N_DAYS,
  [anon_sym_NEXT_N_WEEKS] = anon_sym_NEXT_N_WEEKS,
  [anon_sym_LAST_N_WEEKS] = anon_sym_LAST_N_WEEKS,
  [anon_sym_NEXT_N_MONTHS] = anon_sym_NEXT_N_MONTHS,
  [anon_sym_LAST_N_MONTHS] = anon_sym_LAST_N_MONTHS,
  [sym_operator_this_quarter] = sym_operator_this_quarter,
  [sym_operator_last_quarter] = sym_operator_last_quarter,
  [sym_operator_next_quarter] = sym_operator_next_quarter,
  [anon_sym_NEXT_N_QUARTERS] = anon_sym_NEXT_N_QUARTERS,
  [anon_sym_LAST_N_QUARTERS] = anon_sym_LAST_N_QUARTERS,
  [sym_operator_this_year] = sym_operator_this_year,
  [sym_operator_last_year] = sym_operator_last_year,
  [sym_operator_next_year] = sym_operator_next_year,
  [anon_sym_NEXT_N_YEARS] = anon_sym_NEXT_N_YEARS,
  [anon_sym_LAST_N_YEARS] = anon_sym_LAST_N_YEARS,
  [sym_operator_this_fiscal_quarter] = sym_operator_this_fiscal_quarter,
  [sym_operator_last_fiscal_quarter] = sym_operator_last_fiscal_quarter,
  [sym_operator_next_fiscal_quarter] = sym_operator_next_fiscal_quarter,
  [anon_sym_NEXT_N_FISCAL_QUARTERS] = anon_sym_NEXT_N_FISCAL_QUARTERS,
  [anon_sym_LAST_N_FISCAL_QUARTERS] = anon_sym_LAST_N_FISCAL_QUARTERS,
  [sym_operator_this_fiscal_year] = sym_operator_this_fiscal_year,
  [sym_operator_last_fiscal_year] = sym_operator_last_fiscal_year,
  [sym_operator_next_fiscal_year] = sym_operator_next_fiscal_year,
  [anon_sym_NEXT_N_FISCAL_YEARS] = anon_sym_NEXT_N_FISCAL_YEARS,
  [anon_sym_LAST_N_FISCAL_YEARS] = anon_sym_LAST_N_FISCAL_YEARS,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [sym_null_literal] = sym_null_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_date_literal] = sym_date_literal,
  [sym_datetime_literal] = sym_datetime_literal,
  [aux_sym_orderDirection_token1] = aux_sym_orderDirection_token1,
  [aux_sym_orderDirection_token2] = aux_sym_orderDirection_token2,
  [aux_sym_nullHandling_token1] = aux_sym_nullHandling_token1,
  [aux_sym_nullHandling_token2] = aux_sym_nullHandling_token2,
  [aux_sym_nullHandling_token3] = aux_sym_nullHandling_token3,
  [aux_sym_offset_token1] = aux_sym_offset_token1,
  [sym_source_file] = sym_source_file,
  [sym_query] = sym_query,
  [sym_fieldList] = sym_fieldList,
  [sym_fieldName] = sym_fieldName,
  [sym_alias] = sym_alias,
  [sym_aggregateFunction] = sym_aggregateFunction,
  [sym_typeof] = sym_typeof,
  [sym_typeofField] = sym_typeofField,
  [sym_whenObjectType] = sym_whenObjectType,
  [sym_whenFieldList] = sym_whenFieldList,
  [sym_elseFieldList] = sym_elseFieldList,
  [sym_sObject] = sym_sObject,
  [sym_where] = sym_where,
  [sym_fieldExpressionGroup] = sym_fieldExpressionGroup,
  [sym_conditionExpression] = sym_conditionExpression,
  [sym_fieldExpression] = sym_fieldExpression,
  [sym_fieldHavingExpression] = sym_fieldHavingExpression,
  [sym_comparisonOperator] = sym_comparisonOperator,
  [sym_comparisonListOperator] = sym_comparisonListOperator,
  [sym_operator_last_n_days] = sym_operator_last_n_days,
  [sym_operator_next_n_days] = sym_operator_next_n_days,
  [sym_operator_next_n_weeks] = sym_operator_next_n_weeks,
  [sym_operator_last_n_weeks] = sym_operator_last_n_weeks,
  [sym_operator_next_n_months] = sym_operator_next_n_months,
  [sym_operator_last_n_months] = sym_operator_last_n_months,
  [sym_operator_next_n_quarters] = sym_operator_next_n_quarters,
  [sym_operator_last_n_quarters] = sym_operator_last_n_quarters,
  [sym_operator_next_n_years] = sym_operator_next_n_years,
  [sym_operator_last_n_years] = sym_operator_last_n_years,
  [sym_operator_next_n_fiscal_quarters] = sym_operator_next_n_fiscal_quarters,
  [sym_operator_last_n_fiscal_quarters] = sym_operator_last_n_fiscal_quarters,
  [sym_operator_next_n_fiscal_years] = sym_operator_next_n_fiscal_years,
  [sym_operator_last_n_fiscal_years] = sym_operator_last_n_fiscal_years,
  [sym_logical_operator] = sym_logical_operator,
  [sym_datetime_operator] = sym_datetime_operator,
  [sym_value] = sym_value,
  [sym_string_literal] = sym_string_literal,
  [sym_group_by] = sym_group_by,
  [sym_fieldGroupByList] = sym_fieldGroupByList,
  [sym_having] = sym_having,
  [sym_havingConditionExpression] = sym_havingConditionExpression,
  [sym_order_by] = sym_order_by,
  [sym_fieldOrderByList] = sym_fieldOrderByList,
  [sym_limit] = sym_limit,
  [sym_orderDirection] = sym_orderDirection,
  [sym_nullHandling] = sym_nullHandling,
  [sym_numberOfRowsToReturn] = sym_numberOfRowsToReturn,
  [sym_offset] = sym_offset,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_fieldList_repeat1] = aux_sym_fieldList_repeat1,
  [aux_sym_fieldName_repeat1] = aux_sym_fieldName_repeat1,
  [aux_sym_typeof_repeat1] = aux_sym_typeof_repeat1,
  [aux_sym_fieldExpressionGroup_repeat1] = aux_sym_fieldExpressionGroup_repeat1,
  [aux_sym_conditionExpression_repeat1] = aux_sym_conditionExpression_repeat1,
  [aux_sym_fieldExpression_repeat1] = aux_sym_fieldExpression_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_fieldGroupByList_repeat1] = aux_sym_fieldGroupByList_repeat1,
  [aux_sym_havingConditionExpression_repeat1] = aux_sym_havingConditionExpression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_select] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_typeof] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_when] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_then] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_else] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_end] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_from] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_where] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_having] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_group_by] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_orderby] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_limit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_aggregateFunction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aggregateFunction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aggregateFunction_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aggregateFunction_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aggregateFunction_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aggregateFunction_token6] = {
    .visible = false,
    .named = false,
  },
  [sym_operator_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_not_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_less_than] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_less_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_greater_than] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_greater_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_like] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_in] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_not_in] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_includes] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_excludes] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_and] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_or] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_not] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_yesterday] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_today] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_tomorrow] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_last_week] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_this_week] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_next_week] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_last_month] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_this_month] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_next_month] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_last_90_days] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_next_90_days] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LAST_N_DAYS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NEXT_N_DAYS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NEXT_N_WEEKS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LAST_N_WEEKS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NEXT_N_MONTHS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LAST_N_MONTHS] = {
    .visible = true,
    .named = false,
  },
  [sym_operator_this_quarter] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_last_quarter] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_next_quarter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NEXT_N_QUARTERS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LAST_N_QUARTERS] = {
    .visible = true,
    .named = false,
  },
  [sym_operator_this_year] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_last_year] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_next_year] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NEXT_N_YEARS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LAST_N_YEARS] = {
    .visible = true,
    .named = false,
  },
  [sym_operator_this_fiscal_quarter] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_last_fiscal_quarter] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_next_fiscal_quarter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NEXT_N_FISCAL_QUARTERS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LAST_N_FISCAL_QUARTERS] = {
    .visible = true,
    .named = false,
  },
  [sym_operator_this_fiscal_year] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_last_fiscal_year] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_next_fiscal_year] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NEXT_N_FISCAL_YEARS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LAST_N_FISCAL_YEARS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_date_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_datetime_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_orderDirection_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_orderDirection_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nullHandling_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nullHandling_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nullHandling_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_offset_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldList] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldName] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregateFunction] = {
    .visible = true,
    .named = true,
  },
  [sym_typeof] = {
    .visible = true,
    .named = true,
  },
  [sym_typeofField] = {
    .visible = true,
    .named = true,
  },
  [sym_whenObjectType] = {
    .visible = true,
    .named = true,
  },
  [sym_whenFieldList] = {
    .visible = true,
    .named = true,
  },
  [sym_elseFieldList] = {
    .visible = true,
    .named = true,
  },
  [sym_sObject] = {
    .visible = true,
    .named = true,
  },
  [sym_where] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldExpressionGroup] = {
    .visible = true,
    .named = true,
  },
  [sym_conditionExpression] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldExpression] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldHavingExpression] = {
    .visible = true,
    .named = true,
  },
  [sym_comparisonOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_comparisonListOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_last_n_days] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_next_n_days] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_next_n_weeks] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_last_n_weeks] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_next_n_months] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_last_n_months] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_next_n_quarters] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_last_n_quarters] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_next_n_years] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_last_n_years] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_next_n_fiscal_quarters] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_last_n_fiscal_quarters] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_next_n_fiscal_years] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_last_n_fiscal_years] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_datetime_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldGroupByList] = {
    .visible = true,
    .named = true,
  },
  [sym_having] = {
    .visible = true,
    .named = true,
  },
  [sym_havingConditionExpression] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldOrderByList] = {
    .visible = true,
    .named = true,
  },
  [sym_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_orderDirection] = {
    .visible = true,
    .named = true,
  },
  [sym_nullHandling] = {
    .visible = true,
    .named = true,
  },
  [sym_numberOfRowsToReturn] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fieldList_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fieldName_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typeof_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fieldExpressionGroup_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditionExpression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fieldExpression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fieldGroupByList_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_havingConditionExpression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_parentSObject = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_parentSObject] = "parentSObject",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_parentSObject, 0},
  [2] =
    {field_name, 1},
    {field_parentSObject, 0, .inherited = true},
  [4] =
    {field_parentSObject, 0, .inherited = true},
    {field_parentSObject, 1, .inherited = true},
  [6] =
    {field_parentSObject, 0, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'Z') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == 'Z') ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 36:
      if (eof) ADVANCE(40);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 37:
      if (eof) ADVANCE(40);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_keyword_orderby);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_operator_equals);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_operator_not_equals);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_operator_less_than);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_operator_less_or_equal);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_operator_greater_than);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_operator_greater_or_equal);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_operator_not_in);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_operator_or);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_operator_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '\'') ADVANCE(58);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(59);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_date_literal);
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_datetime_literal);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'L') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(3);
      if (lookahead == 'Y') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(8);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(9);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(10);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(12);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(13);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(14);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(15);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(17);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == 'H') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(27);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(38);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(50);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'X') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'S') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 36:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_operator_in);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 45:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 46:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(79);
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_operator_not);
      END_STATE();
    case 54:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 58:
      if (lookahead == 'O') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_operator_and);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_orderDirection_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_aggregateFunction_token2);
      END_STATE();
    case 64:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_keyword_end);
      END_STATE();
    case 68:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_aggregateFunction_token5);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_aggregateFunction_token4);
      END_STATE();
    case 75:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_aggregateFunction_token6);
      END_STATE();
    case 78:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_nullHandling_token3);
      if (lookahead == '_') ADVANCE(103);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_nullHandling_token3);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_operator_like);
      END_STATE();
    case 82:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(107);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_keyword_then);
      END_STATE();
    case 87:
      if (lookahead == 'Y') ADVANCE(108);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(109);
      END_STATE();
    case 89:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 91:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_orderDirection_token2);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_keyword_else);
      END_STATE();
    case 94:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 98:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_keyword_when);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 103:
      if (lookahead == '9') ADVANCE(120);
      if (lookahead == 'F') ADVANCE(121);
      if (lookahead == 'M') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(123);
      if (lookahead == 'Q') ADVANCE(124);
      if (lookahead == 'W') ADVANCE(125);
      if (lookahead == 'Y') ADVANCE(126);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 105:
      if (lookahead == '9') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(128);
      if (lookahead == 'M') ADVANCE(129);
      if (lookahead == 'N') ADVANCE(130);
      if (lookahead == 'Q') ADVANCE(131);
      if (lookahead == 'W') ADVANCE(132);
      if (lookahead == 'Y') ADVANCE(133);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_nullHandling_token1);
      END_STATE();
    case 107:
      if (lookahead == 'F') ADVANCE(134);
      if (lookahead == 'M') ADVANCE(135);
      if (lookahead == 'Q') ADVANCE(136);
      if (lookahead == 'W') ADVANCE(137);
      if (lookahead == 'Y') ADVANCE(138);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_operator_today);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(139);
      END_STATE();
    case 110:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(140);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(141);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_aggregateFunction_token1);
      if (lookahead == '_') ADVANCE(142);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_nullHandling_token2);
      END_STATE();
    case 115:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 117:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 118:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 120:
      if (lookahead == '0') ADVANCE(148);
      END_STATE();
    case 121:
      if (lookahead == 'I') ADVANCE(149);
      END_STATE();
    case 122:
      if (lookahead == 'O') ADVANCE(150);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(151);
      END_STATE();
    case 124:
      if (lookahead == 'U') ADVANCE(152);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 127:
      if (lookahead == '0') ADVANCE(155);
      END_STATE();
    case 128:
      if (lookahead == 'I') ADVANCE(156);
      END_STATE();
    case 129:
      if (lookahead == 'O') ADVANCE(157);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(158);
      END_STATE();
    case 131:
      if (lookahead == 'U') ADVANCE(159);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(161);
      END_STATE();
    case 134:
      if (lookahead == 'I') ADVANCE(162);
      END_STATE();
    case 135:
      if (lookahead == 'O') ADVANCE(163);
      END_STATE();
    case 136:
      if (lookahead == 'U') ADVANCE(164);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 139:
      if (lookahead == 'O') ADVANCE(167);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_keyword_typeof);
      END_STATE();
    case 141:
      if (lookahead == 'D') ADVANCE(168);
      END_STATE();
    case 142:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(172);
      END_STATE();
    case 149:
      if (lookahead == 'S') ADVANCE(173);
      END_STATE();
    case 150:
      if (lookahead == 'N') ADVANCE(174);
      END_STATE();
    case 151:
      if (lookahead == 'D') ADVANCE(175);
      if (lookahead == 'F') ADVANCE(176);
      if (lookahead == 'M') ADVANCE(177);
      if (lookahead == 'Q') ADVANCE(178);
      if (lookahead == 'W') ADVANCE(179);
      if (lookahead == 'Y') ADVANCE(180);
      END_STATE();
    case 152:
      if (lookahead == 'A') ADVANCE(181);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(182);
      END_STATE();
    case 154:
      if (lookahead == 'A') ADVANCE(183);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(184);
      END_STATE();
    case 156:
      if (lookahead == 'S') ADVANCE(185);
      END_STATE();
    case 157:
      if (lookahead == 'N') ADVANCE(186);
      END_STATE();
    case 158:
      if (lookahead == 'D') ADVANCE(187);
      if (lookahead == 'F') ADVANCE(188);
      if (lookahead == 'M') ADVANCE(189);
      if (lookahead == 'Q') ADVANCE(190);
      if (lookahead == 'W') ADVANCE(191);
      if (lookahead == 'Y') ADVANCE(192);
      END_STATE();
    case 159:
      if (lookahead == 'A') ADVANCE(193);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 161:
      if (lookahead == 'A') ADVANCE(195);
      END_STATE();
    case 162:
      if (lookahead == 'S') ADVANCE(196);
      END_STATE();
    case 163:
      if (lookahead == 'N') ADVANCE(197);
      END_STATE();
    case 164:
      if (lookahead == 'A') ADVANCE(198);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(199);
      END_STATE();
    case 166:
      if (lookahead == 'A') ADVANCE(200);
      END_STATE();
    case 167:
      if (lookahead == 'W') ADVANCE(201);
      END_STATE();
    case 168:
      if (lookahead == 'A') ADVANCE(202);
      END_STATE();
    case 169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 170:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      END_STATE();
    case 171:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      END_STATE();
    case 172:
      if (lookahead == 'D') ADVANCE(206);
      END_STATE();
    case 173:
      if (lookahead == 'C') ADVANCE(207);
      END_STATE();
    case 174:
      if (lookahead == 'T') ADVANCE(208);
      END_STATE();
    case 175:
      if (lookahead == 'A') ADVANCE(209);
      END_STATE();
    case 176:
      if (lookahead == 'I') ADVANCE(210);
      END_STATE();
    case 177:
      if (lookahead == 'O') ADVANCE(211);
      END_STATE();
    case 178:
      if (lookahead == 'U') ADVANCE(212);
      END_STATE();
    case 179:
      if (lookahead == 'E') ADVANCE(213);
      END_STATE();
    case 180:
      if (lookahead == 'E') ADVANCE(214);
      END_STATE();
    case 181:
      if (lookahead == 'R') ADVANCE(215);
      END_STATE();
    case 182:
      if (lookahead == 'K') ADVANCE(216);
      END_STATE();
    case 183:
      if (lookahead == 'R') ADVANCE(217);
      END_STATE();
    case 184:
      if (lookahead == 'D') ADVANCE(218);
      END_STATE();
    case 185:
      if (lookahead == 'C') ADVANCE(219);
      END_STATE();
    case 186:
      if (lookahead == 'T') ADVANCE(220);
      END_STATE();
    case 187:
      if (lookahead == 'A') ADVANCE(221);
      END_STATE();
    case 188:
      if (lookahead == 'I') ADVANCE(222);
      END_STATE();
    case 189:
      if (lookahead == 'O') ADVANCE(223);
      END_STATE();
    case 190:
      if (lookahead == 'U') ADVANCE(224);
      END_STATE();
    case 191:
      if (lookahead == 'E') ADVANCE(225);
      END_STATE();
    case 192:
      if (lookahead == 'E') ADVANCE(226);
      END_STATE();
    case 193:
      if (lookahead == 'R') ADVANCE(227);
      END_STATE();
    case 194:
      if (lookahead == 'K') ADVANCE(228);
      END_STATE();
    case 195:
      if (lookahead == 'R') ADVANCE(229);
      END_STATE();
    case 196:
      if (lookahead == 'C') ADVANCE(230);
      END_STATE();
    case 197:
      if (lookahead == 'T') ADVANCE(231);
      END_STATE();
    case 198:
      if (lookahead == 'R') ADVANCE(232);
      END_STATE();
    case 199:
      if (lookahead == 'K') ADVANCE(233);
      END_STATE();
    case 200:
      if (lookahead == 'R') ADVANCE(234);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_operator_tomorrow);
      END_STATE();
    case 202:
      if (lookahead == 'Y') ADVANCE(235);
      END_STATE();
    case 203:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_operator_excludes);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_operator_includes);
      END_STATE();
    case 206:
      if (lookahead == 'A') ADVANCE(237);
      END_STATE();
    case 207:
      if (lookahead == 'A') ADVANCE(238);
      END_STATE();
    case 208:
      if (lookahead == 'H') ADVANCE(239);
      END_STATE();
    case 209:
      if (lookahead == 'Y') ADVANCE(240);
      END_STATE();
    case 210:
      if (lookahead == 'S') ADVANCE(241);
      END_STATE();
    case 211:
      if (lookahead == 'N') ADVANCE(242);
      END_STATE();
    case 212:
      if (lookahead == 'A') ADVANCE(243);
      END_STATE();
    case 213:
      if (lookahead == 'E') ADVANCE(244);
      END_STATE();
    case 214:
      if (lookahead == 'A') ADVANCE(245);
      END_STATE();
    case 215:
      if (lookahead == 'T') ADVANCE(246);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_operator_last_week);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_operator_last_year);
      END_STATE();
    case 218:
      if (lookahead == 'A') ADVANCE(247);
      END_STATE();
    case 219:
      if (lookahead == 'A') ADVANCE(248);
      END_STATE();
    case 220:
      if (lookahead == 'H') ADVANCE(249);
      END_STATE();
    case 221:
      if (lookahead == 'Y') ADVANCE(250);
      END_STATE();
    case 222:
      if (lookahead == 'S') ADVANCE(251);
      END_STATE();
    case 223:
      if (lookahead == 'N') ADVANCE(252);
      END_STATE();
    case 224:
      if (lookahead == 'A') ADVANCE(253);
      END_STATE();
    case 225:
      if (lookahead == 'E') ADVANCE(254);
      END_STATE();
    case 226:
      if (lookahead == 'A') ADVANCE(255);
      END_STATE();
    case 227:
      if (lookahead == 'T') ADVANCE(256);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_operator_next_week);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_operator_next_year);
      END_STATE();
    case 230:
      if (lookahead == 'A') ADVANCE(257);
      END_STATE();
    case 231:
      if (lookahead == 'H') ADVANCE(258);
      END_STATE();
    case 232:
      if (lookahead == 'T') ADVANCE(259);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_operator_this_week);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_operator_this_year);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_operator_yesterday);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 237:
      if (lookahead == 'Y') ADVANCE(261);
      END_STATE();
    case 238:
      if (lookahead == 'L') ADVANCE(262);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_operator_last_month);
      END_STATE();
    case 240:
      if (lookahead == 'S') ADVANCE(263);
      END_STATE();
    case 241:
      if (lookahead == 'C') ADVANCE(264);
      END_STATE();
    case 242:
      if (lookahead == 'T') ADVANCE(265);
      END_STATE();
    case 243:
      if (lookahead == 'R') ADVANCE(266);
      END_STATE();
    case 244:
      if (lookahead == 'K') ADVANCE(267);
      END_STATE();
    case 245:
      if (lookahead == 'R') ADVANCE(268);
      END_STATE();
    case 246:
      if (lookahead == 'E') ADVANCE(269);
      END_STATE();
    case 247:
      if (lookahead == 'Y') ADVANCE(270);
      END_STATE();
    case 248:
      if (lookahead == 'L') ADVANCE(271);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_operator_next_month);
      END_STATE();
    case 250:
      if (lookahead == 'S') ADVANCE(272);
      END_STATE();
    case 251:
      if (lookahead == 'C') ADVANCE(273);
      END_STATE();
    case 252:
      if (lookahead == 'T') ADVANCE(274);
      END_STATE();
    case 253:
      if (lookahead == 'R') ADVANCE(275);
      END_STATE();
    case 254:
      if (lookahead == 'K') ADVANCE(276);
      END_STATE();
    case 255:
      if (lookahead == 'R') ADVANCE(277);
      END_STATE();
    case 256:
      if (lookahead == 'E') ADVANCE(278);
      END_STATE();
    case 257:
      if (lookahead == 'L') ADVANCE(279);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_operator_this_month);
      END_STATE();
    case 259:
      if (lookahead == 'E') ADVANCE(280);
      END_STATE();
    case 260:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 261:
      if (lookahead == 'S') ADVANCE(282);
      END_STATE();
    case 262:
      if (lookahead == '_') ADVANCE(283);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LAST_N_DAYS);
      END_STATE();
    case 264:
      if (lookahead == 'A') ADVANCE(284);
      END_STATE();
    case 265:
      if (lookahead == 'H') ADVANCE(285);
      END_STATE();
    case 266:
      if (lookahead == 'T') ADVANCE(286);
      END_STATE();
    case 267:
      if (lookahead == 'S') ADVANCE(287);
      END_STATE();
    case 268:
      if (lookahead == 'S') ADVANCE(288);
      END_STATE();
    case 269:
      if (lookahead == 'R') ADVANCE(289);
      END_STATE();
    case 270:
      if (lookahead == 'S') ADVANCE(290);
      END_STATE();
    case 271:
      if (lookahead == '_') ADVANCE(291);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_NEXT_N_DAYS);
      END_STATE();
    case 273:
      if (lookahead == 'A') ADVANCE(292);
      END_STATE();
    case 274:
      if (lookahead == 'H') ADVANCE(293);
      END_STATE();
    case 275:
      if (lookahead == 'T') ADVANCE(294);
      END_STATE();
    case 276:
      if (lookahead == 'S') ADVANCE(295);
      END_STATE();
    case 277:
      if (lookahead == 'S') ADVANCE(296);
      END_STATE();
    case 278:
      if (lookahead == 'R') ADVANCE(297);
      END_STATE();
    case 279:
      if (lookahead == '_') ADVANCE(298);
      END_STATE();
    case 280:
      if (lookahead == 'R') ADVANCE(299);
      END_STATE();
    case 281:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(300);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_operator_last_90_days);
      END_STATE();
    case 283:
      if (lookahead == 'Q') ADVANCE(301);
      if (lookahead == 'Y') ADVANCE(302);
      END_STATE();
    case 284:
      if (lookahead == 'L') ADVANCE(303);
      END_STATE();
    case 285:
      if (lookahead == 'S') ADVANCE(304);
      END_STATE();
    case 286:
      if (lookahead == 'E') ADVANCE(305);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LAST_N_WEEKS);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LAST_N_YEARS);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_operator_last_quarter);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_operator_next_90_days);
      END_STATE();
    case 291:
      if (lookahead == 'Q') ADVANCE(306);
      if (lookahead == 'Y') ADVANCE(307);
      END_STATE();
    case 292:
      if (lookahead == 'L') ADVANCE(308);
      END_STATE();
    case 293:
      if (lookahead == 'S') ADVANCE(309);
      END_STATE();
    case 294:
      if (lookahead == 'E') ADVANCE(310);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_NEXT_N_WEEKS);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_NEXT_N_YEARS);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_operator_next_quarter);
      END_STATE();
    case 298:
      if (lookahead == 'Q') ADVANCE(311);
      if (lookahead == 'Y') ADVANCE(312);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_operator_this_quarter);
      END_STATE();
    case 300:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 301:
      if (lookahead == 'U') ADVANCE(314);
      END_STATE();
    case 302:
      if (lookahead == 'E') ADVANCE(315);
      END_STATE();
    case 303:
      if (lookahead == '_') ADVANCE(316);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LAST_N_MONTHS);
      END_STATE();
    case 305:
      if (lookahead == 'R') ADVANCE(317);
      END_STATE();
    case 306:
      if (lookahead == 'U') ADVANCE(318);
      END_STATE();
    case 307:
      if (lookahead == 'E') ADVANCE(319);
      END_STATE();
    case 308:
      if (lookahead == '_') ADVANCE(320);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_NEXT_N_MONTHS);
      END_STATE();
    case 310:
      if (lookahead == 'R') ADVANCE(321);
      END_STATE();
    case 311:
      if (lookahead == 'U') ADVANCE(322);
      END_STATE();
    case 312:
      if (lookahead == 'E') ADVANCE(323);
      END_STATE();
    case 313:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      END_STATE();
    case 314:
      if (lookahead == 'A') ADVANCE(325);
      END_STATE();
    case 315:
      if (lookahead == 'A') ADVANCE(326);
      END_STATE();
    case 316:
      if (lookahead == 'Q') ADVANCE(327);
      if (lookahead == 'Y') ADVANCE(328);
      END_STATE();
    case 317:
      if (lookahead == 'S') ADVANCE(329);
      END_STATE();
    case 318:
      if (lookahead == 'A') ADVANCE(330);
      END_STATE();
    case 319:
      if (lookahead == 'A') ADVANCE(331);
      END_STATE();
    case 320:
      if (lookahead == 'Q') ADVANCE(332);
      if (lookahead == 'Y') ADVANCE(333);
      END_STATE();
    case 321:
      if (lookahead == 'S') ADVANCE(334);
      END_STATE();
    case 322:
      if (lookahead == 'A') ADVANCE(335);
      END_STATE();
    case 323:
      if (lookahead == 'A') ADVANCE(336);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_aggregateFunction_token3);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(337);
      END_STATE();
    case 326:
      if (lookahead == 'R') ADVANCE(338);
      END_STATE();
    case 327:
      if (lookahead == 'U') ADVANCE(339);
      END_STATE();
    case 328:
      if (lookahead == 'E') ADVANCE(340);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LAST_N_QUARTERS);
      END_STATE();
    case 330:
      if (lookahead == 'R') ADVANCE(341);
      END_STATE();
    case 331:
      if (lookahead == 'R') ADVANCE(342);
      END_STATE();
    case 332:
      if (lookahead == 'U') ADVANCE(343);
      END_STATE();
    case 333:
      if (lookahead == 'E') ADVANCE(344);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_NEXT_N_QUARTERS);
      END_STATE();
    case 335:
      if (lookahead == 'R') ADVANCE(345);
      END_STATE();
    case 336:
      if (lookahead == 'R') ADVANCE(346);
      END_STATE();
    case 337:
      if (lookahead == 'T') ADVANCE(347);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_operator_last_fiscal_year);
      END_STATE();
    case 339:
      if (lookahead == 'A') ADVANCE(348);
      END_STATE();
    case 340:
      if (lookahead == 'A') ADVANCE(349);
      END_STATE();
    case 341:
      if (lookahead == 'T') ADVANCE(350);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_operator_next_fiscal_year);
      END_STATE();
    case 343:
      if (lookahead == 'A') ADVANCE(351);
      END_STATE();
    case 344:
      if (lookahead == 'A') ADVANCE(352);
      END_STATE();
    case 345:
      if (lookahead == 'T') ADVANCE(353);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_operator_this_fiscal_year);
      END_STATE();
    case 347:
      if (lookahead == 'E') ADVANCE(354);
      END_STATE();
    case 348:
      if (lookahead == 'R') ADVANCE(355);
      END_STATE();
    case 349:
      if (lookahead == 'R') ADVANCE(356);
      END_STATE();
    case 350:
      if (lookahead == 'E') ADVANCE(357);
      END_STATE();
    case 351:
      if (lookahead == 'R') ADVANCE(358);
      END_STATE();
    case 352:
      if (lookahead == 'R') ADVANCE(359);
      END_STATE();
    case 353:
      if (lookahead == 'E') ADVANCE(360);
      END_STATE();
    case 354:
      if (lookahead == 'R') ADVANCE(361);
      END_STATE();
    case 355:
      if (lookahead == 'T') ADVANCE(362);
      END_STATE();
    case 356:
      if (lookahead == 'S') ADVANCE(363);
      END_STATE();
    case 357:
      if (lookahead == 'R') ADVANCE(364);
      END_STATE();
    case 358:
      if (lookahead == 'T') ADVANCE(365);
      END_STATE();
    case 359:
      if (lookahead == 'S') ADVANCE(366);
      END_STATE();
    case 360:
      if (lookahead == 'R') ADVANCE(367);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_operator_last_fiscal_quarter);
      END_STATE();
    case 362:
      if (lookahead == 'E') ADVANCE(368);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_LAST_N_FISCAL_YEARS);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_operator_next_fiscal_quarter);
      END_STATE();
    case 365:
      if (lookahead == 'E') ADVANCE(369);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_NEXT_N_FISCAL_YEARS);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_operator_this_fiscal_quarter);
      END_STATE();
    case 368:
      if (lookahead == 'R') ADVANCE(370);
      END_STATE();
    case 369:
      if (lookahead == 'R') ADVANCE(371);
      END_STATE();
    case 370:
      if (lookahead == 'S') ADVANCE(372);
      END_STATE();
    case 371:
      if (lookahead == 'S') ADVANCE(373);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_LAST_N_FISCAL_QUARTERS);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_NEXT_N_FISCAL_QUARTERS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 38},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 39},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 38},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 39},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 39},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 38},
  [56] = {.lex_state = 38},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 36},
  [63] = {.lex_state = 38},
  [64] = {.lex_state = 38},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 36},
  [70] = {.lex_state = 37},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 39},
  [73] = {.lex_state = 36},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 36},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 36},
  [79] = {.lex_state = 36},
  [80] = {.lex_state = 37},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 36},
  [83] = {.lex_state = 38},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 37},
  [86] = {.lex_state = 36},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 36},
  [89] = {.lex_state = 37},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 36},
  [92] = {.lex_state = 36},
  [93] = {.lex_state = 37},
  [94] = {.lex_state = 36},
  [95] = {.lex_state = 36},
  [96] = {.lex_state = 36},
  [97] = {.lex_state = 36},
  [98] = {.lex_state = 36},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 36},
  [101] = {.lex_state = 36},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 36},
  [104] = {.lex_state = 36},
  [105] = {.lex_state = 37},
  [106] = {.lex_state = 36},
  [107] = {.lex_state = 36},
  [108] = {.lex_state = 36},
  [109] = {.lex_state = 36},
  [110] = {.lex_state = 36},
  [111] = {.lex_state = 36},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 36},
  [115] = {.lex_state = 36},
  [116] = {.lex_state = 36},
  [117] = {.lex_state = 36},
  [118] = {.lex_state = 36},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 36},
  [122] = {.lex_state = 36},
  [123] = {.lex_state = 36},
  [124] = {.lex_state = 36},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 36},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 36},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 36},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 36},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 36},
  [151] = {.lex_state = 36},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 36},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 36},
  [158] = {.lex_state = 36},
  [159] = {.lex_state = 36},
  [160] = {.lex_state = 36},
  [161] = {.lex_state = 36},
  [162] = {.lex_state = 36},
  [163] = {.lex_state = 36},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 36},
  [166] = {.lex_state = 36},
  [167] = {.lex_state = 36},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 36},
  [172] = {.lex_state = 36},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 36},
  [175] = {.lex_state = 36},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 36},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 36},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 36},
  [183] = {.lex_state = 36},
  [184] = {.lex_state = 36},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 36},
  [187] = {.lex_state = 36},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 36},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 36},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 36},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 36},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 36},
  [225] = {.lex_state = 36},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 36},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 36},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 36},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_typeof] = ACTIONS(1),
    [sym_keyword_when] = ACTIONS(1),
    [sym_keyword_then] = ACTIONS(1),
    [sym_keyword_else] = ACTIONS(1),
    [sym_keyword_end] = ACTIONS(1),
    [sym_keyword_from] = ACTIONS(1),
    [sym_keyword_where] = ACTIONS(1),
    [sym_keyword_having] = ACTIONS(1),
    [sym_keyword_group_by] = ACTIONS(1),
    [sym_keyword_orderby] = ACTIONS(1),
    [sym_keyword_limit] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_aggregateFunction_token1] = ACTIONS(1),
    [aux_sym_aggregateFunction_token2] = ACTIONS(1),
    [aux_sym_aggregateFunction_token3] = ACTIONS(1),
    [aux_sym_aggregateFunction_token4] = ACTIONS(1),
    [aux_sym_aggregateFunction_token5] = ACTIONS(1),
    [aux_sym_aggregateFunction_token6] = ACTIONS(1),
    [sym_operator_equals] = ACTIONS(1),
    [sym_operator_not_equals] = ACTIONS(1),
    [sym_operator_less_than] = ACTIONS(1),
    [sym_operator_less_or_equal] = ACTIONS(1),
    [sym_operator_greater_than] = ACTIONS(1),
    [sym_operator_greater_or_equal] = ACTIONS(1),
    [sym_operator_like] = ACTIONS(1),
    [sym_operator_in] = ACTIONS(1),
    [sym_operator_includes] = ACTIONS(1),
    [sym_operator_excludes] = ACTIONS(1),
    [sym_operator_and] = ACTIONS(1),
    [sym_operator_or] = ACTIONS(1),
    [sym_operator_not] = ACTIONS(1),
    [sym_operator_yesterday] = ACTIONS(1),
    [sym_operator_today] = ACTIONS(1),
    [sym_operator_tomorrow] = ACTIONS(1),
    [sym_operator_last_week] = ACTIONS(1),
    [sym_operator_this_week] = ACTIONS(1),
    [sym_operator_next_week] = ACTIONS(1),
    [sym_operator_last_month] = ACTIONS(1),
    [sym_operator_this_month] = ACTIONS(1),
    [sym_operator_next_month] = ACTIONS(1),
    [sym_operator_last_90_days] = ACTIONS(1),
    [sym_operator_next_90_days] = ACTIONS(1),
    [anon_sym_LAST_N_DAYS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_NEXT_N_DAYS] = ACTIONS(1),
    [anon_sym_NEXT_N_WEEKS] = ACTIONS(1),
    [anon_sym_LAST_N_WEEKS] = ACTIONS(1),
    [anon_sym_NEXT_N_MONTHS] = ACTIONS(1),
    [anon_sym_LAST_N_MONTHS] = ACTIONS(1),
    [sym_operator_this_quarter] = ACTIONS(1),
    [sym_operator_last_quarter] = ACTIONS(1),
    [sym_operator_next_quarter] = ACTIONS(1),
    [anon_sym_NEXT_N_QUARTERS] = ACTIONS(1),
    [anon_sym_LAST_N_QUARTERS] = ACTIONS(1),
    [sym_operator_this_year] = ACTIONS(1),
    [sym_operator_last_year] = ACTIONS(1),
    [sym_operator_next_year] = ACTIONS(1),
    [anon_sym_NEXT_N_YEARS] = ACTIONS(1),
    [anon_sym_LAST_N_YEARS] = ACTIONS(1),
    [sym_operator_this_fiscal_quarter] = ACTIONS(1),
    [sym_operator_last_fiscal_quarter] = ACTIONS(1),
    [sym_operator_next_fiscal_quarter] = ACTIONS(1),
    [anon_sym_NEXT_N_FISCAL_QUARTERS] = ACTIONS(1),
    [anon_sym_LAST_N_FISCAL_QUARTERS] = ACTIONS(1),
    [sym_operator_this_fiscal_year] = ACTIONS(1),
    [sym_operator_last_fiscal_year] = ACTIONS(1),
    [sym_operator_next_fiscal_year] = ACTIONS(1),
    [anon_sym_NEXT_N_FISCAL_YEARS] = ACTIONS(1),
    [anon_sym_LAST_N_FISCAL_YEARS] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_date_literal] = ACTIONS(1),
    [sym_datetime_literal] = ACTIONS(1),
    [aux_sym_orderDirection_token1] = ACTIONS(1),
    [aux_sym_orderDirection_token2] = ACTIONS(1),
    [aux_sym_nullHandling_token1] = ACTIONS(1),
    [aux_sym_nullHandling_token2] = ACTIONS(1),
    [aux_sym_nullHandling_token3] = ACTIONS(1),
    [aux_sym_offset_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(205),
    [sym_query] = STATE(121),
    [aux_sym_source_file_repeat1] = STATE(121),
    [sym_keyword_select] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(9), 1,
      anon_sym_LAST_N_DAYS,
    ACTIONS(11), 1,
      anon_sym_NEXT_N_DAYS,
    ACTIONS(13), 1,
      anon_sym_NEXT_N_WEEKS,
    ACTIONS(15), 1,
      anon_sym_LAST_N_WEEKS,
    ACTIONS(17), 1,
      anon_sym_NEXT_N_MONTHS,
    ACTIONS(19), 1,
      anon_sym_LAST_N_MONTHS,
    ACTIONS(21), 1,
      anon_sym_NEXT_N_QUARTERS,
    ACTIONS(23), 1,
      anon_sym_LAST_N_QUARTERS,
    ACTIONS(25), 1,
      anon_sym_NEXT_N_YEARS,
    ACTIONS(27), 1,
      anon_sym_LAST_N_YEARS,
    ACTIONS(29), 1,
      anon_sym_NEXT_N_FISCAL_QUARTERS,
    ACTIONS(31), 1,
      anon_sym_LAST_N_FISCAL_QUARTERS,
    ACTIONS(33), 1,
      anon_sym_NEXT_N_FISCAL_YEARS,
    ACTIONS(35), 1,
      anon_sym_LAST_N_FISCAL_YEARS,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(168), 1,
      sym_value,
    STATE(230), 1,
      sym_query,
    ACTIONS(39), 2,
      sym_null_literal,
      sym_datetime_literal,
    ACTIONS(41), 2,
      sym_number_literal,
      sym_date_literal,
    STATE(45), 2,
      sym_datetime_operator,
      sym_string_literal,
    STATE(43), 14,
      sym_operator_last_n_days,
      sym_operator_next_n_days,
      sym_operator_next_n_weeks,
      sym_operator_last_n_weeks,
      sym_operator_next_n_months,
      sym_operator_last_n_months,
      sym_operator_next_n_quarters,
      sym_operator_last_n_quarters,
      sym_operator_next_n_years,
      sym_operator_last_n_years,
      sym_operator_next_n_fiscal_quarters,
      sym_operator_last_n_fiscal_quarters,
      sym_operator_next_n_fiscal_years,
      sym_operator_last_n_fiscal_years,
    ACTIONS(7), 23,
      sym_operator_yesterday,
      sym_operator_today,
      sym_operator_tomorrow,
      sym_operator_last_week,
      sym_operator_this_week,
      sym_operator_next_week,
      sym_operator_last_month,
      sym_operator_this_month,
      sym_operator_next_month,
      sym_operator_last_90_days,
      sym_operator_next_90_days,
      sym_operator_this_quarter,
      sym_operator_last_quarter,
      sym_operator_next_quarter,
      sym_operator_this_year,
      sym_operator_last_year,
      sym_operator_next_year,
      sym_operator_this_fiscal_quarter,
      sym_operator_last_fiscal_quarter,
      sym_operator_next_fiscal_quarter,
      sym_operator_this_fiscal_year,
      sym_operator_last_fiscal_year,
      sym_operator_next_fiscal_year,
  [108] = 23,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(9), 1,
      anon_sym_LAST_N_DAYS,
    ACTIONS(11), 1,
      anon_sym_NEXT_N_DAYS,
    ACTIONS(13), 1,
      anon_sym_NEXT_N_WEEKS,
    ACTIONS(15), 1,
      anon_sym_LAST_N_WEEKS,
    ACTIONS(17), 1,
      anon_sym_NEXT_N_MONTHS,
    ACTIONS(19), 1,
      anon_sym_LAST_N_MONTHS,
    ACTIONS(21), 1,
      anon_sym_NEXT_N_QUARTERS,
    ACTIONS(23), 1,
      anon_sym_LAST_N_QUARTERS,
    ACTIONS(25), 1,
      anon_sym_NEXT_N_YEARS,
    ACTIONS(27), 1,
      anon_sym_LAST_N_YEARS,
    ACTIONS(29), 1,
      anon_sym_NEXT_N_FISCAL_QUARTERS,
    ACTIONS(31), 1,
      anon_sym_LAST_N_FISCAL_QUARTERS,
    ACTIONS(33), 1,
      anon_sym_NEXT_N_FISCAL_YEARS,
    ACTIONS(35), 1,
      anon_sym_LAST_N_FISCAL_YEARS,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(170), 1,
      sym_value,
    STATE(194), 1,
      sym_query,
    ACTIONS(39), 2,
      sym_null_literal,
      sym_datetime_literal,
    ACTIONS(41), 2,
      sym_number_literal,
      sym_date_literal,
    STATE(45), 2,
      sym_datetime_operator,
      sym_string_literal,
    STATE(43), 14,
      sym_operator_last_n_days,
      sym_operator_next_n_days,
      sym_operator_next_n_weeks,
      sym_operator_last_n_weeks,
      sym_operator_next_n_months,
      sym_operator_last_n_months,
      sym_operator_next_n_quarters,
      sym_operator_last_n_quarters,
      sym_operator_next_n_years,
      sym_operator_last_n_years,
      sym_operator_next_n_fiscal_quarters,
      sym_operator_last_n_fiscal_quarters,
      sym_operator_next_n_fiscal_years,
      sym_operator_last_n_fiscal_years,
    ACTIONS(7), 23,
      sym_operator_yesterday,
      sym_operator_today,
      sym_operator_tomorrow,
      sym_operator_last_week,
      sym_operator_this_week,
      sym_operator_next_week,
      sym_operator_last_month,
      sym_operator_this_month,
      sym_operator_next_month,
      sym_operator_last_90_days,
      sym_operator_next_90_days,
      sym_operator_this_quarter,
      sym_operator_last_quarter,
      sym_operator_next_quarter,
      sym_operator_this_year,
      sym_operator_last_year,
      sym_operator_next_year,
      sym_operator_this_fiscal_quarter,
      sym_operator_last_fiscal_quarter,
      sym_operator_next_fiscal_quarter,
      sym_operator_this_fiscal_year,
      sym_operator_last_fiscal_year,
      sym_operator_next_fiscal_year,
  [216] = 23,
    ACTIONS(5), 1,
      sym_keyword_select,
    ACTIONS(9), 1,
      anon_sym_LAST_N_DAYS,
    ACTIONS(11), 1,
      anon_sym_NEXT_N_DAYS,
    ACTIONS(13), 1,
      anon_sym_NEXT_N_WEEKS,
    ACTIONS(15), 1,
      anon_sym_LAST_N_WEEKS,
    ACTIONS(17), 1,
      anon_sym_NEXT_N_MONTHS,
    ACTIONS(19), 1,
      anon_sym_LAST_N_MONTHS,
    ACTIONS(21), 1,
      anon_sym_NEXT_N_QUARTERS,
    ACTIONS(23), 1,
      anon_sym_LAST_N_QUARTERS,
    ACTIONS(25), 1,
      anon_sym_NEXT_N_YEARS,
    ACTIONS(27), 1,
      anon_sym_LAST_N_YEARS,
    ACTIONS(29), 1,
      anon_sym_NEXT_N_FISCAL_QUARTERS,
    ACTIONS(31), 1,
      anon_sym_LAST_N_FISCAL_QUARTERS,
    ACTIONS(33), 1,
      anon_sym_NEXT_N_FISCAL_YEARS,
    ACTIONS(35), 1,
      anon_sym_LAST_N_FISCAL_YEARS,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(176), 1,
      sym_value,
    STATE(246), 1,
      sym_query,
    ACTIONS(39), 2,
      sym_null_literal,
      sym_datetime_literal,
    ACTIONS(41), 2,
      sym_number_literal,
      sym_date_literal,
    STATE(45), 2,
      sym_datetime_operator,
      sym_string_literal,
    STATE(43), 14,
      sym_operator_last_n_days,
      sym_operator_next_n_days,
      sym_operator_next_n_weeks,
      sym_operator_last_n_weeks,
      sym_operator_next_n_months,
      sym_operator_last_n_months,
      sym_operator_next_n_quarters,
      sym_operator_last_n_quarters,
      sym_operator_next_n_years,
      sym_operator_last_n_years,
      sym_operator_next_n_fiscal_quarters,
      sym_operator_last_n_fiscal_quarters,
      sym_operator_next_n_fiscal_years,
      sym_operator_last_n_fiscal_years,
    ACTIONS(7), 23,
      sym_operator_yesterday,
      sym_operator_today,
      sym_operator_tomorrow,
      sym_operator_last_week,
      sym_operator_this_week,
      sym_operator_next_week,
      sym_operator_last_month,
      sym_operator_this_month,
      sym_operator_next_month,
      sym_operator_last_90_days,
      sym_operator_next_90_days,
      sym_operator_this_quarter,
      sym_operator_last_quarter,
      sym_operator_next_quarter,
      sym_operator_this_year,
      sym_operator_last_year,
      sym_operator_next_year,
      sym_operator_this_fiscal_quarter,
      sym_operator_last_fiscal_quarter,
      sym_operator_next_fiscal_quarter,
      sym_operator_this_fiscal_year,
      sym_operator_last_fiscal_year,
      sym_operator_next_fiscal_year,
  [324] = 21,
    ACTIONS(9), 1,
      anon_sym_LAST_N_DAYS,
    ACTIONS(11), 1,
      anon_sym_NEXT_N_DAYS,
    ACTIONS(13), 1,
      anon_sym_NEXT_N_WEEKS,
    ACTIONS(15), 1,
      anon_sym_LAST_N_WEEKS,
    ACTIONS(17), 1,
      anon_sym_NEXT_N_MONTHS,
    ACTIONS(19), 1,
      anon_sym_LAST_N_MONTHS,
    ACTIONS(21), 1,
      anon_sym_NEXT_N_QUARTERS,
    ACTIONS(23), 1,
      anon_sym_LAST_N_QUARTERS,
    ACTIONS(25), 1,
      anon_sym_NEXT_N_YEARS,
    ACTIONS(27), 1,
      anon_sym_LAST_N_YEARS,
    ACTIONS(29), 1,
      anon_sym_NEXT_N_FISCAL_QUARTERS,
    ACTIONS(31), 1,
      anon_sym_LAST_N_FISCAL_QUARTERS,
    ACTIONS(33), 1,
      anon_sym_NEXT_N_FISCAL_YEARS,
    ACTIONS(35), 1,
      anon_sym_LAST_N_FISCAL_YEARS,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(67), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_null_literal,
      sym_datetime_literal,
    ACTIONS(41), 2,
      sym_number_literal,
      sym_date_literal,
    STATE(45), 2,
      sym_datetime_operator,
      sym_string_literal,
    STATE(43), 14,
      sym_operator_last_n_days,
      sym_operator_next_n_days,
      sym_operator_next_n_weeks,
      sym_operator_last_n_weeks,
      sym_operator_next_n_months,
      sym_operator_last_n_months,
      sym_operator_next_n_quarters,
      sym_operator_last_n_quarters,
      sym_operator_next_n_years,
      sym_operator_last_n_years,
      sym_operator_next_n_fiscal_quarters,
      sym_operator_last_n_fiscal_quarters,
      sym_operator_next_n_fiscal_years,
      sym_operator_last_n_fiscal_years,
    ACTIONS(7), 23,
      sym_operator_yesterday,
      sym_operator_today,
      sym_operator_tomorrow,
      sym_operator_last_week,
      sym_operator_this_week,
      sym_operator_next_week,
      sym_operator_last_month,
      sym_operator_this_month,
      sym_operator_next_month,
      sym_operator_last_90_days,
      sym_operator_next_90_days,
      sym_operator_this_quarter,
      sym_operator_last_quarter,
      sym_operator_next_quarter,
      sym_operator_this_year,
      sym_operator_last_year,
      sym_operator_next_year,
      sym_operator_this_fiscal_quarter,
      sym_operator_last_fiscal_quarter,
      sym_operator_next_fiscal_quarter,
      sym_operator_this_fiscal_year,
      sym_operator_last_fiscal_year,
      sym_operator_next_fiscal_year,
  [426] = 21,
    ACTIONS(45), 1,
      anon_sym_LAST_N_DAYS,
    ACTIONS(47), 1,
      anon_sym_NEXT_N_DAYS,
    ACTIONS(49), 1,
      anon_sym_NEXT_N_WEEKS,
    ACTIONS(51), 1,
      anon_sym_LAST_N_WEEKS,
    ACTIONS(53), 1,
      anon_sym_NEXT_N_MONTHS,
    ACTIONS(55), 1,
      anon_sym_LAST_N_MONTHS,
    ACTIONS(57), 1,
      anon_sym_NEXT_N_QUARTERS,
    ACTIONS(59), 1,
      anon_sym_LAST_N_QUARTERS,
    ACTIONS(61), 1,
      anon_sym_NEXT_N_YEARS,
    ACTIONS(63), 1,
      anon_sym_LAST_N_YEARS,
    ACTIONS(65), 1,
      anon_sym_NEXT_N_FISCAL_QUARTERS,
    ACTIONS(67), 1,
      anon_sym_LAST_N_FISCAL_QUARTERS,
    ACTIONS(69), 1,
      anon_sym_NEXT_N_FISCAL_YEARS,
    ACTIONS(71), 1,
      anon_sym_LAST_N_FISCAL_YEARS,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    STATE(152), 1,
      sym_value,
    ACTIONS(75), 2,
      sym_null_literal,
      sym_datetime_literal,
    ACTIONS(77), 2,
      sym_number_literal,
      sym_date_literal,
    STATE(154), 2,
      sym_datetime_operator,
      sym_string_literal,
    STATE(156), 14,
      sym_operator_last_n_days,
      sym_operator_next_n_days,
      sym_operator_next_n_weeks,
      sym_operator_last_n_weeks,
      sym_operator_next_n_months,
      sym_operator_last_n_months,
      sym_operator_next_n_quarters,
      sym_operator_last_n_quarters,
      sym_operator_next_n_years,
      sym_operator_last_n_years,
      sym_operator_next_n_fiscal_quarters,
      sym_operator_last_n_fiscal_quarters,
      sym_operator_next_n_fiscal_years,
      sym_operator_last_n_fiscal_years,
    ACTIONS(43), 23,
      sym_operator_yesterday,
      sym_operator_today,
      sym_operator_tomorrow,
      sym_operator_last_week,
      sym_operator_this_week,
      sym_operator_next_week,
      sym_operator_last_month,
      sym_operator_this_month,
      sym_operator_next_month,
      sym_operator_last_90_days,
      sym_operator_next_90_days,
      sym_operator_this_quarter,
      sym_operator_last_quarter,
      sym_operator_next_quarter,
      sym_operator_this_year,
      sym_operator_last_year,
      sym_operator_next_year,
      sym_operator_this_fiscal_quarter,
      sym_operator_last_fiscal_quarter,
      sym_operator_next_fiscal_quarter,
      sym_operator_this_fiscal_year,
      sym_operator_last_fiscal_year,
      sym_operator_next_fiscal_year,
  [528] = 21,
    ACTIONS(9), 1,
      anon_sym_LAST_N_DAYS,
    ACTIONS(11), 1,
      anon_sym_NEXT_N_DAYS,
    ACTIONS(13), 1,
      anon_sym_NEXT_N_WEEKS,
    ACTIONS(15), 1,
      anon_sym_LAST_N_WEEKS,
    ACTIONS(17), 1,
      anon_sym_NEXT_N_MONTHS,
    ACTIONS(19), 1,
      anon_sym_LAST_N_MONTHS,
    ACTIONS(21), 1,
      anon_sym_NEXT_N_QUARTERS,
    ACTIONS(23), 1,
      anon_sym_LAST_N_QUARTERS,
    ACTIONS(25), 1,
      anon_sym_NEXT_N_YEARS,
    ACTIONS(27), 1,
      anon_sym_LAST_N_YEARS,
    ACTIONS(29), 1,
      anon_sym_NEXT_N_FISCAL_QUARTERS,
    ACTIONS(31), 1,
      anon_sym_LAST_N_FISCAL_QUARTERS,
    ACTIONS(33), 1,
      anon_sym_NEXT_N_FISCAL_YEARS,
    ACTIONS(35), 1,
      anon_sym_LAST_N_FISCAL_YEARS,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_null_literal,
      sym_datetime_literal,
    ACTIONS(41), 2,
      sym_number_literal,
      sym_date_literal,
    STATE(45), 2,
      sym_datetime_operator,
      sym_string_literal,
    STATE(43), 14,
      sym_operator_last_n_days,
      sym_operator_next_n_days,
      sym_operator_next_n_weeks,
      sym_operator_last_n_weeks,
      sym_operator_next_n_months,
      sym_operator_last_n_months,
      sym_operator_next_n_quarters,
      sym_operator_last_n_quarters,
      sym_operator_next_n_years,
      sym_operator_last_n_years,
      sym_operator_next_n_fiscal_quarters,
      sym_operator_last_n_fiscal_quarters,
      sym_operator_next_n_fiscal_years,
      sym_operator_last_n_fiscal_years,
    ACTIONS(7), 23,
      sym_operator_yesterday,
      sym_operator_today,
      sym_operator_tomorrow,
      sym_operator_last_week,
      sym_operator_this_week,
      sym_operator_next_week,
      sym_operator_last_month,
      sym_operator_this_month,
      sym_operator_next_month,
      sym_operator_last_90_days,
      sym_operator_next_90_days,
      sym_operator_this_quarter,
      sym_operator_last_quarter,
      sym_operator_next_quarter,
      sym_operator_this_year,
      sym_operator_last_year,
      sym_operator_next_year,
      sym_operator_this_fiscal_quarter,
      sym_operator_last_fiscal_quarter,
      sym_operator_next_fiscal_quarter,
      sym_operator_this_fiscal_year,
      sym_operator_last_fiscal_year,
      sym_operator_next_fiscal_year,
  [630] = 21,
    ACTIONS(9), 1,
      anon_sym_LAST_N_DAYS,
    ACTIONS(11), 1,
      anon_sym_NEXT_N_DAYS,
    ACTIONS(13), 1,
      anon_sym_NEXT_N_WEEKS,
    ACTIONS(15), 1,
      anon_sym_LAST_N_WEEKS,
    ACTIONS(17), 1,
      anon_sym_NEXT_N_MONTHS,
    ACTIONS(19), 1,
      anon_sym_LAST_N_MONTHS,
    ACTIONS(21), 1,
      anon_sym_NEXT_N_QUARTERS,
    ACTIONS(23), 1,
      anon_sym_LAST_N_QUARTERS,
    ACTIONS(25), 1,
      anon_sym_NEXT_N_YEARS,
    ACTIONS(27), 1,
      anon_sym_LAST_N_YEARS,
    ACTIONS(29), 1,
      anon_sym_NEXT_N_FISCAL_QUARTERS,
    ACTIONS(31), 1,
      anon_sym_LAST_N_FISCAL_QUARTERS,
    ACTIONS(33), 1,
      anon_sym_NEXT_N_FISCAL_YEARS,
    ACTIONS(35), 1,
      anon_sym_LAST_N_FISCAL_YEARS,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(181), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_null_literal,
      sym_datetime_literal,
    ACTIONS(41), 2,
      sym_number_literal,
      sym_date_literal,
    STATE(45), 2,
      sym_datetime_operator,
      sym_string_literal,
    STATE(43), 14,
      sym_operator_last_n_days,
      sym_operator_next_n_days,
      sym_operator_next_n_weeks,
      sym_operator_last_n_weeks,
      sym_operator_next_n_months,
      sym_operator_last_n_months,
      sym_operator_next_n_quarters,
      sym_operator_last_n_quarters,
      sym_operator_next_n_years,
      sym_operator_last_n_years,
      sym_operator_next_n_fiscal_quarters,
      sym_operator_last_n_fiscal_quarters,
      sym_operator_next_n_fiscal_years,
      sym_operator_last_n_fiscal_years,
    ACTIONS(7), 23,
      sym_operator_yesterday,
      sym_operator_today,
      sym_operator_tomorrow,
      sym_operator_last_week,
      sym_operator_this_week,
      sym_operator_next_week,
      sym_operator_last_month,
      sym_operator_this_month,
      sym_operator_next_month,
      sym_operator_last_90_days,
      sym_operator_next_90_days,
      sym_operator_this_quarter,
      sym_operator_last_quarter,
      sym_operator_next_quarter,
      sym_operator_this_year,
      sym_operator_last_year,
      sym_operator_next_year,
      sym_operator_this_fiscal_quarter,
      sym_operator_last_fiscal_quarter,
      sym_operator_next_fiscal_quarter,
      sym_operator_this_fiscal_year,
      sym_operator_last_fiscal_year,
      sym_operator_next_fiscal_year,
  [732] = 2,
    ACTIONS(81), 2,
      sym_number_literal,
      sym_date_literal,
    ACTIONS(79), 40,
      sym_operator_yesterday,
      sym_operator_today,
      sym_operator_tomorrow,
      sym_operator_last_week,
      sym_operator_this_week,
      sym_operator_next_week,
      sym_operator_last_month,
      sym_operator_this_month,
      sym_operator_next_month,
      sym_operator_last_90_days,
      sym_operator_next_90_days,
      anon_sym_LAST_N_DAYS,
      anon_sym_NEXT_N_DAYS,
      anon_sym_NEXT_N_WEEKS,
      anon_sym_LAST_N_WEEKS,
      anon_sym_NEXT_N_MONTHS,
      anon_sym_LAST_N_MONTHS,
      sym_operator_this_quarter,
      sym_operator_last_quarter,
      sym_operator_next_quarter,
      anon_sym_NEXT_N_QUARTERS,
      anon_sym_LAST_N_QUARTERS,
      sym_operator_this_year,
      sym_operator_last_year,
      sym_operator_next_year,
      anon_sym_NEXT_N_YEARS,
      anon_sym_LAST_N_YEARS,
      sym_operator_this_fiscal_quarter,
      sym_operator_last_fiscal_quarter,
      sym_operator_next_fiscal_quarter,
      anon_sym_NEXT_N_FISCAL_QUARTERS,
      anon_sym_LAST_N_FISCAL_QUARTERS,
      sym_operator_this_fiscal_year,
      sym_operator_last_fiscal_year,
      sym_operator_next_fiscal_year,
      anon_sym_NEXT_N_FISCAL_YEARS,
      anon_sym_LAST_N_FISCAL_YEARS,
      anon_sym_SQUOTE,
      sym_null_literal,
      sym_datetime_literal,
  [779] = 3,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(87), 3,
      sym_operator_less_than,
      sym_operator_greater_than,
      sym_operator_in,
    ACTIONS(83), 19,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_having,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_equals,
      sym_operator_not_equals,
      sym_operator_less_or_equal,
      sym_operator_greater_or_equal,
      sym_operator_like,
      sym_operator_not_in,
      sym_operator_includes,
      sym_operator_excludes,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [809] = 3,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(91), 3,
      sym_operator_less_than,
      sym_operator_greater_than,
      sym_operator_in,
    ACTIONS(89), 19,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_having,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_equals,
      sym_operator_not_equals,
      sym_operator_less_or_equal,
      sym_operator_greater_or_equal,
      sym_operator_like,
      sym_operator_not_in,
      sym_operator_includes,
      sym_operator_excludes,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [839] = 9,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_keyword_typeof,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_typeof,
    STATE(162), 1,
      sym_whenFieldList,
    STATE(163), 1,
      sym_fieldList,
    STATE(183), 1,
      aux_sym_fieldName_repeat1,
    STATE(75), 2,
      sym_fieldName,
      sym_aggregateFunction,
    ACTIONS(99), 6,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
  [873] = 9,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_keyword_typeof,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_typeof,
    STATE(183), 1,
      aux_sym_fieldName_repeat1,
    STATE(224), 1,
      sym_fieldList,
    STATE(225), 1,
      sym_elseFieldList,
    STATE(75), 2,
      sym_fieldName,
      sym_aggregateFunction,
    ACTIONS(99), 6,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
  [907] = 7,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_havingConditionExpression,
    STATE(184), 1,
      aux_sym_fieldName_repeat1,
    STATE(17), 2,
      sym_fieldName,
      sym_aggregateFunction,
    STATE(46), 2,
      sym_fieldExpressionGroup,
      sym_fieldHavingExpression,
    ACTIONS(105), 6,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
  [936] = 8,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_keyword_typeof,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_typeof,
    STATE(183), 1,
      aux_sym_fieldName_repeat1,
    STATE(267), 1,
      sym_fieldList,
    STATE(75), 2,
      sym_fieldName,
      sym_aggregateFunction,
    ACTIONS(99), 6,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
  [967] = 8,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_keyword_typeof,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_typeof,
    STATE(183), 1,
      aux_sym_fieldName_repeat1,
    STATE(258), 1,
      sym_fieldList,
    STATE(75), 2,
      sym_fieldName,
      sym_aggregateFunction,
    ACTIONS(99), 6,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
  [998] = 6,
    ACTIONS(111), 1,
      sym_operator_in,
    ACTIONS(113), 1,
      sym_operator_not_in,
    STATE(5), 1,
      sym_comparisonOperator,
    STATE(203), 1,
      sym_comparisonListOperator,
    ACTIONS(109), 2,
      sym_operator_less_than,
      sym_operator_greater_than,
    ACTIONS(107), 7,
      sym_operator_equals,
      sym_operator_not_equals,
      sym_operator_less_or_equal,
      sym_operator_greater_or_equal,
      sym_operator_like,
      sym_operator_includes,
      sym_operator_excludes,
  [1024] = 3,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(83), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(87), 10,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      sym_keyword_limit,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
      sym_identifier,
  [1044] = 6,
    ACTIONS(111), 1,
      sym_operator_in,
    ACTIONS(113), 1,
      sym_operator_not_in,
    STATE(6), 1,
      sym_comparisonOperator,
    STATE(268), 1,
      sym_comparisonListOperator,
    ACTIONS(109), 2,
      sym_operator_less_than,
      sym_operator_greater_than,
    ACTIONS(107), 7,
      sym_operator_equals,
      sym_operator_not_equals,
      sym_operator_less_or_equal,
      sym_operator_greater_or_equal,
      sym_operator_like,
      sym_operator_includes,
      sym_operator_excludes,
  [1070] = 6,
    ACTIONS(111), 1,
      sym_operator_in,
    ACTIONS(113), 1,
      sym_operator_not_in,
    STATE(7), 1,
      sym_comparisonOperator,
    STATE(201), 1,
      sym_comparisonListOperator,
    ACTIONS(109), 2,
      sym_operator_less_than,
      sym_operator_greater_than,
    ACTIONS(107), 7,
      sym_operator_equals,
      sym_operator_not_equals,
      sym_operator_less_or_equal,
      sym_operator_greater_or_equal,
      sym_operator_like,
      sym_operator_includes,
      sym_operator_excludes,
  [1096] = 6,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      aux_sym_fieldName_repeat1,
    STATE(17), 2,
      sym_fieldName,
      sym_aggregateFunction,
    STATE(72), 2,
      sym_fieldExpressionGroup,
      sym_fieldHavingExpression,
    ACTIONS(105), 6,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
  [1122] = 7,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_keyword_typeof,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_typeof,
    STATE(183), 1,
      aux_sym_fieldName_repeat1,
    STATE(82), 2,
      sym_fieldName,
      sym_aggregateFunction,
    ACTIONS(99), 6,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
  [1150] = 3,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(89), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(91), 10,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      sym_keyword_limit,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
      sym_identifier,
  [1170] = 3,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_fieldGroupByList_repeat1,
    ACTIONS(117), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_having,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [1189] = 11,
    ACTIONS(124), 1,
      sym_keyword_where,
    ACTIONS(126), 1,
      sym_keyword_group_by,
    ACTIONS(128), 1,
      sym_keyword_orderby,
    ACTIONS(130), 1,
      sym_keyword_limit,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    STATE(55), 1,
      sym_where,
    STATE(80), 1,
      sym_group_by,
    STATE(86), 1,
      sym_order_by,
    STATE(115), 1,
      sym_limit,
    STATE(172), 1,
      sym_offset,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_keyword_select,
  [1224] = 5,
    ACTIONS(138), 1,
      sym_operator_or,
    STATE(27), 1,
      aux_sym_conditionExpression_repeat1,
    STATE(98), 1,
      sym_logical_operator,
    ACTIONS(136), 2,
      sym_operator_and,
      sym_operator_not,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [1247] = 5,
    ACTIONS(138), 1,
      sym_operator_or,
    STATE(28), 1,
      aux_sym_conditionExpression_repeat1,
    STATE(98), 1,
      sym_logical_operator,
    ACTIONS(136), 2,
      sym_operator_and,
      sym_operator_not,
    ACTIONS(140), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [1270] = 5,
    ACTIONS(147), 1,
      sym_operator_or,
    STATE(28), 1,
      aux_sym_conditionExpression_repeat1,
    STATE(98), 1,
      sym_logical_operator,
    ACTIONS(144), 2,
      sym_operator_and,
      sym_operator_not,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [1293] = 2,
    ACTIONS(152), 3,
      sym_operator_less_than,
      sym_operator_greater_than,
      sym_operator_in,
    ACTIONS(150), 8,
      sym_operator_equals,
      sym_operator_not_equals,
      sym_operator_less_or_equal,
      sym_operator_greater_or_equal,
      sym_operator_like,
      sym_operator_not_in,
      sym_operator_includes,
      sym_operator_excludes,
  [1309] = 2,
    ACTIONS(156), 1,
      sym_operator_or,
    ACTIONS(154), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1325] = 2,
    ACTIONS(160), 1,
      sym_operator_or,
    ACTIONS(158), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1341] = 2,
    ACTIONS(164), 1,
      sym_operator_or,
    ACTIONS(162), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1357] = 5,
    ACTIONS(171), 1,
      sym_operator_or,
    STATE(21), 1,
      sym_logical_operator,
    STATE(33), 1,
      aux_sym_havingConditionExpression_repeat1,
    ACTIONS(168), 2,
      sym_operator_and,
      sym_operator_not,
    ACTIONS(166), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [1379] = 2,
    ACTIONS(176), 1,
      sym_operator_or,
    ACTIONS(174), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1395] = 2,
    ACTIONS(180), 1,
      sym_operator_or,
    ACTIONS(178), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1411] = 2,
    ACTIONS(184), 1,
      sym_operator_or,
    ACTIONS(182), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1427] = 11,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(124), 1,
      sym_keyword_where,
    ACTIONS(126), 1,
      sym_keyword_group_by,
    ACTIONS(130), 1,
      sym_keyword_limit,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    ACTIONS(186), 1,
      sym_keyword_orderby,
    STATE(64), 1,
      sym_where,
    STATE(86), 1,
      sym_order_by,
    STATE(89), 1,
      sym_group_by,
    STATE(115), 1,
      sym_limit,
    STATE(172), 1,
      sym_offset,
  [1461] = 1,
    ACTIONS(117), 11,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_having,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [1475] = 2,
    ACTIONS(190), 1,
      sym_operator_or,
    ACTIONS(188), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1491] = 2,
    ACTIONS(194), 1,
      sym_operator_or,
    ACTIONS(192), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1507] = 2,
    ACTIONS(198), 1,
      sym_operator_or,
    ACTIONS(196), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1523] = 2,
    ACTIONS(202), 1,
      sym_operator_or,
    ACTIONS(200), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1539] = 2,
    ACTIONS(206), 1,
      sym_operator_or,
    ACTIONS(204), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1555] = 2,
    ACTIONS(210), 1,
      sym_operator_or,
    ACTIONS(208), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1571] = 2,
    ACTIONS(214), 1,
      sym_operator_or,
    ACTIONS(212), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1587] = 5,
    ACTIONS(138), 1,
      sym_operator_or,
    STATE(21), 1,
      sym_logical_operator,
    STATE(53), 1,
      aux_sym_havingConditionExpression_repeat1,
    ACTIONS(136), 2,
      sym_operator_and,
      sym_operator_not,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [1609] = 2,
    ACTIONS(220), 3,
      sym_operator_less_than,
      sym_operator_greater_than,
      sym_operator_in,
    ACTIONS(218), 8,
      sym_operator_equals,
      sym_operator_not_equals,
      sym_operator_less_or_equal,
      sym_operator_greater_or_equal,
      sym_operator_like,
      sym_operator_not_in,
      sym_operator_includes,
      sym_operator_excludes,
  [1625] = 2,
    ACTIONS(224), 1,
      sym_operator_or,
    ACTIONS(222), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1641] = 2,
    ACTIONS(228), 1,
      sym_operator_or,
    ACTIONS(226), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1657] = 2,
    ACTIONS(232), 1,
      sym_operator_or,
    ACTIONS(230), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1673] = 2,
    ACTIONS(236), 1,
      sym_operator_or,
    ACTIONS(234), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1689] = 2,
    ACTIONS(240), 1,
      sym_operator_or,
    ACTIONS(238), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1705] = 5,
    ACTIONS(138), 1,
      sym_operator_or,
    STATE(21), 1,
      sym_logical_operator,
    STATE(33), 1,
      aux_sym_havingConditionExpression_repeat1,
    ACTIONS(136), 2,
      sym_operator_and,
      sym_operator_not,
    ACTIONS(242), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [1727] = 2,
    ACTIONS(246), 1,
      sym_operator_or,
    ACTIONS(244), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1742] = 9,
    ACTIONS(126), 1,
      sym_keyword_group_by,
    ACTIONS(128), 1,
      sym_keyword_orderby,
    ACTIONS(130), 1,
      sym_keyword_limit,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    STATE(74), 1,
      sym_group_by,
    STATE(81), 1,
      sym_order_by,
    STATE(113), 1,
      sym_limit,
    STATE(164), 1,
      sym_offset,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      sym_keyword_select,
  [1771] = 2,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(250), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_then,
      sym_keyword_where,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [1786] = 2,
    ACTIONS(254), 1,
      sym_operator_or,
    ACTIONS(252), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1801] = 2,
    ACTIONS(258), 1,
      sym_operator_or,
    ACTIONS(256), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1816] = 2,
    ACTIONS(262), 1,
      sym_operator_or,
    ACTIONS(260), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1831] = 2,
    ACTIONS(264), 1,
      sym_operator_or,
    ACTIONS(142), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1846] = 2,
    ACTIONS(268), 1,
      sym_operator_or,
    ACTIONS(266), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1861] = 5,
    ACTIONS(274), 1,
      aux_sym_nullHandling_token1,
    STATE(88), 1,
      sym_orderDirection,
    STATE(110), 1,
      sym_nullHandling,
    ACTIONS(272), 2,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
    ACTIONS(270), 5,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [1882] = 2,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(276), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_then,
      sym_keyword_where,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [1897] = 9,
    ACTIONS(126), 1,
      sym_keyword_group_by,
    ACTIONS(130), 1,
      sym_keyword_limit,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    ACTIONS(186), 1,
      sym_keyword_orderby,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_order_by,
    STATE(85), 1,
      sym_group_by,
    STATE(113), 1,
      sym_limit,
    STATE(164), 1,
      sym_offset,
  [1925] = 2,
    ACTIONS(280), 1,
      sym_operator_or,
    ACTIONS(278), 8,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1939] = 2,
    ACTIONS(284), 1,
      sym_operator_or,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1953] = 2,
    ACTIONS(288), 1,
      sym_operator_or,
    ACTIONS(286), 8,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [1967] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_fieldGroupByList_repeat1,
    ACTIONS(290), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_having,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [1983] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_fieldGroupByList_repeat1,
    ACTIONS(294), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [1999] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_fieldGroupByList_repeat1,
    ACTIONS(296), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_having,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2015] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_fieldGroupByList_repeat1,
    ACTIONS(298), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [2031] = 2,
    ACTIONS(300), 1,
      sym_operator_or,
    ACTIONS(166), 8,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [2045] = 2,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 7,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
      sym_identifier,
  [2058] = 7,
    ACTIONS(128), 1,
      sym_keyword_orderby,
    ACTIONS(130), 1,
      sym_keyword_limit,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    STATE(84), 1,
      sym_order_by,
    STATE(111), 1,
      sym_limit,
    STATE(175), 1,
      sym_offset,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      sym_keyword_select,
  [2081] = 5,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      sym_alias,
    STATE(104), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(310), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [2100] = 3,
    ACTIONS(316), 1,
      sym_keyword_having,
    STATE(93), 1,
      sym_having,
    ACTIONS(314), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2115] = 3,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_fieldGroupByList_repeat1,
    ACTIONS(294), 6,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [2130] = 3,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_fieldGroupByList_repeat1,
    ACTIONS(117), 6,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [2145] = 3,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_fieldGroupByList_repeat1,
    ACTIONS(298), 6,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [2160] = 7,
    ACTIONS(128), 1,
      sym_keyword_orderby,
    ACTIONS(130), 1,
      sym_keyword_limit,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    STATE(81), 1,
      sym_order_by,
    STATE(113), 1,
      sym_limit,
    STATE(164), 1,
      sym_offset,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      sym_keyword_select,
  [2183] = 5,
    ACTIONS(130), 1,
      sym_keyword_limit,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    STATE(111), 1,
      sym_limit,
    STATE(175), 1,
      sym_offset,
    ACTIONS(306), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [2201] = 4,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      sym_alias,
    ACTIONS(323), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [2217] = 1,
    ACTIONS(327), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2227] = 5,
    ACTIONS(130), 1,
      sym_keyword_limit,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    STATE(107), 1,
      sym_limit,
    STATE(174), 1,
      sym_offset,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [2245] = 7,
    ACTIONS(130), 1,
      sym_keyword_limit,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    ACTIONS(186), 1,
      sym_keyword_orderby,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_order_by,
    STATE(111), 1,
      sym_limit,
    STATE(175), 1,
      sym_offset,
  [2267] = 5,
    ACTIONS(130), 1,
      sym_keyword_limit,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    STATE(113), 1,
      sym_limit,
    STATE(164), 1,
      sym_offset,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [2285] = 6,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(20), 1,
      sym_fieldName,
    STATE(83), 1,
      sym_conditionExpression,
    STATE(184), 1,
      aux_sym_fieldName_repeat1,
    STATE(26), 2,
      sym_fieldExpressionGroup,
      sym_fieldExpression,
  [2305] = 3,
    ACTIONS(274), 1,
      aux_sym_nullHandling_token1,
    STATE(108), 1,
      sym_nullHandling,
    ACTIONS(333), 5,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2319] = 7,
    ACTIONS(130), 1,
      sym_keyword_limit,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    ACTIONS(186), 1,
      sym_keyword_orderby,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_order_by,
    STATE(113), 1,
      sym_limit,
    STATE(164), 1,
      sym_offset,
  [2341] = 4,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_fieldExpressionGroup_repeat1,
    STATE(137), 1,
      sym_logical_operator,
    ACTIONS(136), 3,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2356] = 2,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      sym_identifier,
  [2367] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(325), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [2380] = 1,
    ACTIONS(340), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2389] = 3,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(342), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [2402] = 1,
    ACTIONS(344), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [2411] = 3,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(346), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [2424] = 3,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(348), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [2437] = 5,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(20), 1,
      sym_fieldName,
    STATE(184), 1,
      aux_sym_fieldName_repeat1,
    STATE(60), 2,
      sym_fieldExpressionGroup,
      sym_fieldExpression,
  [2454] = 4,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_fieldExpressionGroup_repeat1,
    STATE(137), 1,
      sym_logical_operator,
    ACTIONS(352), 3,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2469] = 3,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(355), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [2482] = 2,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(220), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      sym_identifier,
  [2493] = 4,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_fieldExpressionGroup_repeat1,
    STATE(137), 1,
      sym_logical_operator,
    ACTIONS(136), 3,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2508] = 3,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(342), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [2521] = 3,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(355), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [2534] = 1,
    ACTIONS(359), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2543] = 1,
    ACTIONS(325), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      anon_sym_COMMA,
  [2551] = 3,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    STATE(161), 1,
      sym_offset,
    ACTIONS(361), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [2563] = 1,
    ACTIONS(363), 5,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2571] = 1,
    ACTIONS(365), 5,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2579] = 1,
    ACTIONS(333), 5,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2587] = 3,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    STATE(174), 1,
      sym_offset,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [2599] = 1,
    ACTIONS(367), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      anon_sym_COMMA,
  [2607] = 3,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    STATE(175), 1,
      sym_offset,
    ACTIONS(306), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [2619] = 1,
    ACTIONS(369), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      anon_sym_COMMA,
  [2627] = 3,
    ACTIONS(132), 1,
      aux_sym_offset_token1,
    STATE(164), 1,
      sym_offset,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [2639] = 1,
    ACTIONS(371), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      anon_sym_COMMA,
  [2647] = 1,
    ACTIONS(373), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      anon_sym_COMMA,
  [2655] = 1,
    ACTIONS(375), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      anon_sym_COMMA,
  [2663] = 1,
    ACTIONS(350), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2670] = 1,
    ACTIONS(178), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2677] = 3,
    ACTIONS(3), 1,
      sym_keyword_select,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    STATE(151), 2,
      sym_query,
      aux_sym_source_file_repeat1,
  [2688] = 4,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_fieldName_repeat1,
    STATE(188), 1,
      sym_typeofField,
    STATE(202), 1,
      sym_fieldName,
  [2701] = 3,
    ACTIONS(381), 1,
      sym_keyword_when,
    STATE(123), 1,
      aux_sym_typeof_repeat1,
    ACTIONS(384), 2,
      sym_keyword_else,
      sym_keyword_end,
  [2712] = 4,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(68), 1,
      sym_fieldName,
    STATE(76), 1,
      sym_fieldGroupByList,
    STATE(184), 1,
      aux_sym_fieldName_repeat1,
  [2725] = 3,
    ACTIONS(386), 1,
      anon_sym_SQUOTE,
    STATE(125), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(388), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [2736] = 3,
    ACTIONS(391), 1,
      anon_sym_SQUOTE,
    STATE(125), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(393), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [2747] = 3,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    STATE(126), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(397), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [2758] = 4,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_fieldName_repeat1,
    STATE(226), 1,
      sym_fieldName,
  [2771] = 1,
    ACTIONS(252), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2778] = 3,
    ACTIONS(401), 1,
      anon_sym_SQUOTE,
    STATE(153), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(403), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [2789] = 4,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(62), 1,
      sym_fieldOrderByList,
    STATE(69), 1,
      sym_fieldName,
    STATE(184), 1,
      aux_sym_fieldName_repeat1,
  [2802] = 1,
    ACTIONS(256), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2809] = 1,
    ACTIONS(222), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2816] = 4,
    ACTIONS(405), 1,
      sym_keyword_when,
    ACTIONS(407), 1,
      sym_keyword_else,
    ACTIONS(409), 1,
      sym_keyword_end,
    STATE(123), 1,
      aux_sym_typeof_repeat1,
  [2829] = 1,
    ACTIONS(226), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2836] = 1,
    ACTIONS(230), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2843] = 4,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(19), 1,
      sym_fieldName,
    STATE(119), 1,
      sym_fieldExpression,
    STATE(184), 1,
      aux_sym_fieldName_repeat1,
  [2856] = 1,
    ACTIONS(234), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2863] = 1,
    ACTIONS(200), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2870] = 1,
    ACTIONS(208), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2877] = 1,
    ACTIONS(196), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2884] = 1,
    ACTIONS(192), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2891] = 1,
    ACTIONS(188), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2898] = 1,
    ACTIONS(182), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2905] = 1,
    ACTIONS(174), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2912] = 1,
    ACTIONS(162), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2919] = 1,
    ACTIONS(158), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2926] = 1,
    ACTIONS(238), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2933] = 1,
    ACTIONS(154), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2940] = 4,
    ACTIONS(411), 1,
      sym_identifier,
    STATE(186), 1,
      aux_sym_fieldName_repeat1,
    STATE(192), 1,
      sym_whenObjectType,
    STATE(229), 1,
      sym_sObject,
  [2953] = 3,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    ACTIONS(415), 1,
      sym_keyword_select,
    STATE(151), 2,
      sym_query,
      aux_sym_source_file_repeat1,
  [2964] = 1,
    ACTIONS(244), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2971] = 3,
    ACTIONS(418), 1,
      anon_sym_SQUOTE,
    STATE(125), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(393), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [2982] = 1,
    ACTIONS(212), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [2989] = 4,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(19), 1,
      sym_fieldName,
    STATE(90), 1,
      sym_fieldExpression,
    STATE(184), 1,
      aux_sym_fieldName_repeat1,
  [3002] = 1,
    ACTIONS(204), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3009] = 1,
    ACTIONS(420), 4,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [3016] = 1,
    ACTIONS(422), 4,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [3023] = 4,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_fieldName_repeat1,
    STATE(195), 1,
      sym_fieldName,
  [3036] = 4,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(62), 1,
      sym_fieldOrderByList,
    STATE(77), 1,
      sym_fieldName,
    STATE(183), 1,
      aux_sym_fieldName_repeat1,
  [3049] = 1,
    ACTIONS(426), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3055] = 1,
    ACTIONS(428), 3,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
  [3061] = 1,
    ACTIONS(430), 3,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
  [3067] = 1,
    ACTIONS(306), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3073] = 1,
    ACTIONS(432), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3079] = 3,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(38), 1,
      sym_fieldName,
    STATE(184), 1,
      aux_sym_fieldName_repeat1,
  [3089] = 3,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(38), 1,
      sym_fieldName,
    STATE(183), 1,
      aux_sym_fieldName_repeat1,
  [3099] = 3,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_fieldExpression_repeat1,
  [3109] = 3,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_fieldExpression_repeat1,
  [3119] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym_fieldExpression_repeat1,
  [3129] = 3,
    ACTIONS(411), 1,
      sym_identifier,
    STATE(25), 1,
      sym_sObject,
    STATE(186), 1,
      aux_sym_fieldName_repeat1,
  [3139] = 1,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3145] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_fieldExpression_repeat1,
  [3155] = 1,
    ACTIONS(361), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3161] = 1,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3167] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_fieldExpression_repeat1,
  [3177] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_fieldExpression_repeat1,
  [3187] = 3,
    ACTIONS(411), 1,
      sym_identifier,
    STATE(37), 1,
      sym_sObject,
    STATE(186), 1,
      aux_sym_fieldName_repeat1,
  [3197] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_fieldExpression_repeat1,
  [3207] = 2,
    ACTIONS(453), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_fieldName_repeat1,
  [3214] = 1,
    ACTIONS(438), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3219] = 2,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(200), 1,
      sym_query,
  [3226] = 2,
    ACTIONS(456), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_fieldName_repeat1,
  [3233] = 2,
    ACTIONS(458), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_fieldName_repeat1,
  [3240] = 2,
    ACTIONS(460), 1,
      sym_number_literal,
    STATE(158), 1,
      sym_numberOfRowsToReturn,
  [3247] = 2,
    ACTIONS(462), 1,
      sym_identifier,
    STATE(180), 1,
      aux_sym_fieldName_repeat1,
  [3254] = 1,
    ACTIONS(464), 2,
      aux_sym_nullHandling_token2,
      aux_sym_nullHandling_token3,
  [3259] = 2,
    ACTIONS(405), 1,
      sym_keyword_when,
    STATE(134), 1,
      aux_sym_typeof_repeat1,
  [3266] = 2,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(251), 1,
      sym_query,
  [3273] = 1,
    ACTIONS(466), 1,
      anon_sym_COLON,
  [3277] = 1,
    ACTIONS(468), 1,
      anon_sym_COLON,
  [3281] = 1,
    ACTIONS(470), 1,
      sym_keyword_then,
  [3285] = 1,
    ACTIONS(85), 1,
      anon_sym_DOT,
  [3289] = 1,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
  [3293] = 1,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
  [3297] = 1,
    ACTIONS(474), 1,
      anon_sym_COLON,
  [3301] = 1,
    ACTIONS(476), 1,
      sym_identifier,
  [3305] = 1,
    ACTIONS(478), 1,
      anon_sym_COLON,
  [3309] = 1,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
  [3313] = 1,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [3317] = 1,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
  [3321] = 1,
    ACTIONS(486), 1,
      sym_keyword_when,
  [3325] = 1,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
  [3329] = 1,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
  [3333] = 1,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
  [3337] = 1,
    ACTIONS(494), 1,
      sym_number_literal,
  [3341] = 1,
    ACTIONS(496), 1,
      sym_number_literal,
  [3345] = 1,
    ACTIONS(498), 1,
      sym_number_literal,
  [3349] = 1,
    ACTIONS(500), 1,
      sym_number_literal,
  [3353] = 1,
    ACTIONS(502), 1,
      sym_number_literal,
  [3357] = 1,
    ACTIONS(504), 1,
      sym_number_literal,
  [3361] = 1,
    ACTIONS(506), 1,
      sym_number_literal,
  [3365] = 1,
    ACTIONS(508), 1,
      sym_number_literal,
  [3369] = 1,
    ACTIONS(510), 1,
      sym_number_literal,
  [3373] = 1,
    ACTIONS(512), 1,
      sym_number_literal,
  [3377] = 1,
    ACTIONS(514), 1,
      sym_number_literal,
  [3381] = 1,
    ACTIONS(516), 1,
      sym_number_literal,
  [3385] = 1,
    ACTIONS(518), 1,
      sym_number_literal,
  [3389] = 1,
    ACTIONS(520), 1,
      sym_number_literal,
  [3393] = 1,
    ACTIONS(522), 1,
      anon_sym_COLON,
  [3397] = 1,
    ACTIONS(524), 1,
      anon_sym_COLON,
  [3401] = 1,
    ACTIONS(526), 1,
      anon_sym_COLON,
  [3405] = 1,
    ACTIONS(528), 1,
      anon_sym_COLON,
  [3409] = 1,
    ACTIONS(530), 1,
      sym_keyword_end,
  [3413] = 1,
    ACTIONS(532), 1,
      sym_keyword_end,
  [3417] = 1,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
  [3421] = 1,
    ACTIONS(536), 1,
      sym_number_literal,
  [3425] = 1,
    ACTIONS(538), 1,
      anon_sym_COLON,
  [3429] = 1,
    ACTIONS(540), 1,
      sym_keyword_then,
  [3433] = 1,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
  [3437] = 1,
    ACTIONS(542), 1,
      sym_number_literal,
  [3441] = 1,
    ACTIONS(544), 1,
      sym_number_literal,
  [3445] = 1,
    ACTIONS(546), 1,
      sym_number_literal,
  [3449] = 1,
    ACTIONS(548), 1,
      sym_number_literal,
  [3453] = 1,
    ACTIONS(550), 1,
      sym_number_literal,
  [3457] = 1,
    ACTIONS(552), 1,
      sym_number_literal,
  [3461] = 1,
    ACTIONS(554), 1,
      sym_number_literal,
  [3465] = 1,
    ACTIONS(556), 1,
      sym_number_literal,
  [3469] = 1,
    ACTIONS(558), 1,
      sym_number_literal,
  [3473] = 1,
    ACTIONS(560), 1,
      sym_number_literal,
  [3477] = 1,
    ACTIONS(562), 1,
      sym_number_literal,
  [3481] = 1,
    ACTIONS(564), 1,
      sym_number_literal,
  [3485] = 1,
    ACTIONS(566), 1,
      sym_number_literal,
  [3489] = 1,
    ACTIONS(568), 1,
      sym_number_literal,
  [3493] = 1,
    ACTIONS(570), 1,
      anon_sym_COLON,
  [3497] = 1,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
  [3501] = 1,
    ACTIONS(572), 1,
      anon_sym_COLON,
  [3505] = 1,
    ACTIONS(574), 1,
      anon_sym_COLON,
  [3509] = 1,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
  [3513] = 1,
    ACTIONS(578), 1,
      anon_sym_COLON,
  [3517] = 1,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
  [3521] = 1,
    ACTIONS(582), 1,
      anon_sym_COLON,
  [3525] = 1,
    ACTIONS(584), 1,
      anon_sym_COLON,
  [3529] = 1,
    ACTIONS(586), 1,
      anon_sym_COLON,
  [3533] = 1,
    ACTIONS(588), 1,
      anon_sym_COLON,
  [3537] = 1,
    ACTIONS(590), 1,
      anon_sym_COLON,
  [3541] = 1,
    ACTIONS(592), 1,
      anon_sym_COLON,
  [3545] = 1,
    ACTIONS(594), 1,
      sym_keyword_from,
  [3549] = 1,
    ACTIONS(596), 1,
      anon_sym_COLON,
  [3553] = 1,
    ACTIONS(598), 1,
      anon_sym_COLON,
  [3557] = 1,
    ACTIONS(600), 1,
      anon_sym_COLON,
  [3561] = 1,
    ACTIONS(602), 1,
      anon_sym_COLON,
  [3565] = 1,
    ACTIONS(604), 1,
      anon_sym_COLON,
  [3569] = 1,
    ACTIONS(606), 1,
      anon_sym_COLON,
  [3573] = 1,
    ACTIONS(608), 1,
      anon_sym_COLON,
  [3577] = 1,
    ACTIONS(610), 1,
      anon_sym_COLON,
  [3581] = 1,
    ACTIONS(612), 1,
      sym_keyword_from,
  [3585] = 1,
    ACTIONS(614), 1,
      anon_sym_LPAREN,
  [3589] = 1,
    ACTIONS(616), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 108,
  [SMALL_STATE(4)] = 216,
  [SMALL_STATE(5)] = 324,
  [SMALL_STATE(6)] = 426,
  [SMALL_STATE(7)] = 528,
  [SMALL_STATE(8)] = 630,
  [SMALL_STATE(9)] = 732,
  [SMALL_STATE(10)] = 779,
  [SMALL_STATE(11)] = 809,
  [SMALL_STATE(12)] = 839,
  [SMALL_STATE(13)] = 873,
  [SMALL_STATE(14)] = 907,
  [SMALL_STATE(15)] = 936,
  [SMALL_STATE(16)] = 967,
  [SMALL_STATE(17)] = 998,
  [SMALL_STATE(18)] = 1024,
  [SMALL_STATE(19)] = 1044,
  [SMALL_STATE(20)] = 1070,
  [SMALL_STATE(21)] = 1096,
  [SMALL_STATE(22)] = 1122,
  [SMALL_STATE(23)] = 1150,
  [SMALL_STATE(24)] = 1170,
  [SMALL_STATE(25)] = 1189,
  [SMALL_STATE(26)] = 1224,
  [SMALL_STATE(27)] = 1247,
  [SMALL_STATE(28)] = 1270,
  [SMALL_STATE(29)] = 1293,
  [SMALL_STATE(30)] = 1309,
  [SMALL_STATE(31)] = 1325,
  [SMALL_STATE(32)] = 1341,
  [SMALL_STATE(33)] = 1357,
  [SMALL_STATE(34)] = 1379,
  [SMALL_STATE(35)] = 1395,
  [SMALL_STATE(36)] = 1411,
  [SMALL_STATE(37)] = 1427,
  [SMALL_STATE(38)] = 1461,
  [SMALL_STATE(39)] = 1475,
  [SMALL_STATE(40)] = 1491,
  [SMALL_STATE(41)] = 1507,
  [SMALL_STATE(42)] = 1523,
  [SMALL_STATE(43)] = 1539,
  [SMALL_STATE(44)] = 1555,
  [SMALL_STATE(45)] = 1571,
  [SMALL_STATE(46)] = 1587,
  [SMALL_STATE(47)] = 1609,
  [SMALL_STATE(48)] = 1625,
  [SMALL_STATE(49)] = 1641,
  [SMALL_STATE(50)] = 1657,
  [SMALL_STATE(51)] = 1673,
  [SMALL_STATE(52)] = 1689,
  [SMALL_STATE(53)] = 1705,
  [SMALL_STATE(54)] = 1727,
  [SMALL_STATE(55)] = 1742,
  [SMALL_STATE(56)] = 1771,
  [SMALL_STATE(57)] = 1786,
  [SMALL_STATE(58)] = 1801,
  [SMALL_STATE(59)] = 1816,
  [SMALL_STATE(60)] = 1831,
  [SMALL_STATE(61)] = 1846,
  [SMALL_STATE(62)] = 1861,
  [SMALL_STATE(63)] = 1882,
  [SMALL_STATE(64)] = 1897,
  [SMALL_STATE(65)] = 1925,
  [SMALL_STATE(66)] = 1939,
  [SMALL_STATE(67)] = 1953,
  [SMALL_STATE(68)] = 1967,
  [SMALL_STATE(69)] = 1983,
  [SMALL_STATE(70)] = 1999,
  [SMALL_STATE(71)] = 2015,
  [SMALL_STATE(72)] = 2031,
  [SMALL_STATE(73)] = 2045,
  [SMALL_STATE(74)] = 2058,
  [SMALL_STATE(75)] = 2081,
  [SMALL_STATE(76)] = 2100,
  [SMALL_STATE(77)] = 2115,
  [SMALL_STATE(78)] = 2130,
  [SMALL_STATE(79)] = 2145,
  [SMALL_STATE(80)] = 2160,
  [SMALL_STATE(81)] = 2183,
  [SMALL_STATE(82)] = 2201,
  [SMALL_STATE(83)] = 2217,
  [SMALL_STATE(84)] = 2227,
  [SMALL_STATE(85)] = 2245,
  [SMALL_STATE(86)] = 2267,
  [SMALL_STATE(87)] = 2285,
  [SMALL_STATE(88)] = 2305,
  [SMALL_STATE(89)] = 2319,
  [SMALL_STATE(90)] = 2341,
  [SMALL_STATE(91)] = 2356,
  [SMALL_STATE(92)] = 2367,
  [SMALL_STATE(93)] = 2380,
  [SMALL_STATE(94)] = 2389,
  [SMALL_STATE(95)] = 2402,
  [SMALL_STATE(96)] = 2411,
  [SMALL_STATE(97)] = 2424,
  [SMALL_STATE(98)] = 2437,
  [SMALL_STATE(99)] = 2454,
  [SMALL_STATE(100)] = 2469,
  [SMALL_STATE(101)] = 2482,
  [SMALL_STATE(102)] = 2493,
  [SMALL_STATE(103)] = 2508,
  [SMALL_STATE(104)] = 2521,
  [SMALL_STATE(105)] = 2534,
  [SMALL_STATE(106)] = 2543,
  [SMALL_STATE(107)] = 2551,
  [SMALL_STATE(108)] = 2563,
  [SMALL_STATE(109)] = 2571,
  [SMALL_STATE(110)] = 2579,
  [SMALL_STATE(111)] = 2587,
  [SMALL_STATE(112)] = 2599,
  [SMALL_STATE(113)] = 2607,
  [SMALL_STATE(114)] = 2619,
  [SMALL_STATE(115)] = 2627,
  [SMALL_STATE(116)] = 2639,
  [SMALL_STATE(117)] = 2647,
  [SMALL_STATE(118)] = 2655,
  [SMALL_STATE(119)] = 2663,
  [SMALL_STATE(120)] = 2670,
  [SMALL_STATE(121)] = 2677,
  [SMALL_STATE(122)] = 2688,
  [SMALL_STATE(123)] = 2701,
  [SMALL_STATE(124)] = 2712,
  [SMALL_STATE(125)] = 2725,
  [SMALL_STATE(126)] = 2736,
  [SMALL_STATE(127)] = 2747,
  [SMALL_STATE(128)] = 2758,
  [SMALL_STATE(129)] = 2771,
  [SMALL_STATE(130)] = 2778,
  [SMALL_STATE(131)] = 2789,
  [SMALL_STATE(132)] = 2802,
  [SMALL_STATE(133)] = 2809,
  [SMALL_STATE(134)] = 2816,
  [SMALL_STATE(135)] = 2829,
  [SMALL_STATE(136)] = 2836,
  [SMALL_STATE(137)] = 2843,
  [SMALL_STATE(138)] = 2856,
  [SMALL_STATE(139)] = 2863,
  [SMALL_STATE(140)] = 2870,
  [SMALL_STATE(141)] = 2877,
  [SMALL_STATE(142)] = 2884,
  [SMALL_STATE(143)] = 2891,
  [SMALL_STATE(144)] = 2898,
  [SMALL_STATE(145)] = 2905,
  [SMALL_STATE(146)] = 2912,
  [SMALL_STATE(147)] = 2919,
  [SMALL_STATE(148)] = 2926,
  [SMALL_STATE(149)] = 2933,
  [SMALL_STATE(150)] = 2940,
  [SMALL_STATE(151)] = 2953,
  [SMALL_STATE(152)] = 2964,
  [SMALL_STATE(153)] = 2971,
  [SMALL_STATE(154)] = 2982,
  [SMALL_STATE(155)] = 2989,
  [SMALL_STATE(156)] = 3002,
  [SMALL_STATE(157)] = 3009,
  [SMALL_STATE(158)] = 3016,
  [SMALL_STATE(159)] = 3023,
  [SMALL_STATE(160)] = 3036,
  [SMALL_STATE(161)] = 3049,
  [SMALL_STATE(162)] = 3055,
  [SMALL_STATE(163)] = 3061,
  [SMALL_STATE(164)] = 3067,
  [SMALL_STATE(165)] = 3073,
  [SMALL_STATE(166)] = 3079,
  [SMALL_STATE(167)] = 3089,
  [SMALL_STATE(168)] = 3099,
  [SMALL_STATE(169)] = 3109,
  [SMALL_STATE(170)] = 3119,
  [SMALL_STATE(171)] = 3129,
  [SMALL_STATE(172)] = 3139,
  [SMALL_STATE(173)] = 3145,
  [SMALL_STATE(174)] = 3155,
  [SMALL_STATE(175)] = 3161,
  [SMALL_STATE(176)] = 3167,
  [SMALL_STATE(177)] = 3177,
  [SMALL_STATE(178)] = 3187,
  [SMALL_STATE(179)] = 3197,
  [SMALL_STATE(180)] = 3207,
  [SMALL_STATE(181)] = 3214,
  [SMALL_STATE(182)] = 3219,
  [SMALL_STATE(183)] = 3226,
  [SMALL_STATE(184)] = 3233,
  [SMALL_STATE(185)] = 3240,
  [SMALL_STATE(186)] = 3247,
  [SMALL_STATE(187)] = 3254,
  [SMALL_STATE(188)] = 3259,
  [SMALL_STATE(189)] = 3266,
  [SMALL_STATE(190)] = 3273,
  [SMALL_STATE(191)] = 3277,
  [SMALL_STATE(192)] = 3281,
  [SMALL_STATE(193)] = 3285,
  [SMALL_STATE(194)] = 3289,
  [SMALL_STATE(195)] = 3293,
  [SMALL_STATE(196)] = 3297,
  [SMALL_STATE(197)] = 3301,
  [SMALL_STATE(198)] = 3305,
  [SMALL_STATE(199)] = 3309,
  [SMALL_STATE(200)] = 3313,
  [SMALL_STATE(201)] = 3317,
  [SMALL_STATE(202)] = 3321,
  [SMALL_STATE(203)] = 3325,
  [SMALL_STATE(204)] = 3329,
  [SMALL_STATE(205)] = 3333,
  [SMALL_STATE(206)] = 3337,
  [SMALL_STATE(207)] = 3341,
  [SMALL_STATE(208)] = 3345,
  [SMALL_STATE(209)] = 3349,
  [SMALL_STATE(210)] = 3353,
  [SMALL_STATE(211)] = 3357,
  [SMALL_STATE(212)] = 3361,
  [SMALL_STATE(213)] = 3365,
  [SMALL_STATE(214)] = 3369,
  [SMALL_STATE(215)] = 3373,
  [SMALL_STATE(216)] = 3377,
  [SMALL_STATE(217)] = 3381,
  [SMALL_STATE(218)] = 3385,
  [SMALL_STATE(219)] = 3389,
  [SMALL_STATE(220)] = 3393,
  [SMALL_STATE(221)] = 3397,
  [SMALL_STATE(222)] = 3401,
  [SMALL_STATE(223)] = 3405,
  [SMALL_STATE(224)] = 3409,
  [SMALL_STATE(225)] = 3413,
  [SMALL_STATE(226)] = 3417,
  [SMALL_STATE(227)] = 3421,
  [SMALL_STATE(228)] = 3425,
  [SMALL_STATE(229)] = 3429,
  [SMALL_STATE(230)] = 3433,
  [SMALL_STATE(231)] = 3437,
  [SMALL_STATE(232)] = 3441,
  [SMALL_STATE(233)] = 3445,
  [SMALL_STATE(234)] = 3449,
  [SMALL_STATE(235)] = 3453,
  [SMALL_STATE(236)] = 3457,
  [SMALL_STATE(237)] = 3461,
  [SMALL_STATE(238)] = 3465,
  [SMALL_STATE(239)] = 3469,
  [SMALL_STATE(240)] = 3473,
  [SMALL_STATE(241)] = 3477,
  [SMALL_STATE(242)] = 3481,
  [SMALL_STATE(243)] = 3485,
  [SMALL_STATE(244)] = 3489,
  [SMALL_STATE(245)] = 3493,
  [SMALL_STATE(246)] = 3497,
  [SMALL_STATE(247)] = 3501,
  [SMALL_STATE(248)] = 3505,
  [SMALL_STATE(249)] = 3509,
  [SMALL_STATE(250)] = 3513,
  [SMALL_STATE(251)] = 3517,
  [SMALL_STATE(252)] = 3521,
  [SMALL_STATE(253)] = 3525,
  [SMALL_STATE(254)] = 3529,
  [SMALL_STATE(255)] = 3533,
  [SMALL_STATE(256)] = 3537,
  [SMALL_STATE(257)] = 3541,
  [SMALL_STATE(258)] = 3545,
  [SMALL_STATE(259)] = 3549,
  [SMALL_STATE(260)] = 3553,
  [SMALL_STATE(261)] = 3557,
  [SMALL_STATE(262)] = 3561,
  [SMALL_STATE(263)] = 3565,
  [SMALL_STATE(264)] = 3569,
  [SMALL_STATE(265)] = 3573,
  [SMALL_STATE(266)] = 3577,
  [SMALL_STATE(267)] = 3581,
  [SMALL_STATE(268)] = 3585,
  [SMALL_STATE(269)] = 3589,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparisonOperator, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparisonOperator, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldName, 1, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 2, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldName, 2, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldGroupByList_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldGroupByList_repeat1, 2), SHIFT_REPEAT(166),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionExpression, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionExpression, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditionExpression_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditionExpression_repeat1, 2), SHIFT_REPEAT(73),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditionExpression_repeat1, 2), SHIFT_REPEAT(73),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregateFunction, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregateFunction, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_last_n_days, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_last_n_days, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_next_n_weeks, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_next_n_weeks, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_last_n_weeks, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_last_n_weeks, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_havingConditionExpression_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_havingConditionExpression_repeat1, 2), SHIFT_REPEAT(73),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_havingConditionExpression_repeat1, 2), SHIFT_REPEAT(73),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_next_n_months, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_next_n_months, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_last_n_months, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_last_n_months, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_next_n_quarters, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_next_n_quarters, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_last_n_quarters, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_last_n_quarters, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_next_n_years, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_next_n_years, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_next_n_fiscal_quarters, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_next_n_fiscal_quarters, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime_operator, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime_operator, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_last_n_years, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_last_n_years, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_havingConditionExpression, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregateFunction, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregateFunction, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_last_n_fiscal_years, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_last_n_fiscal_years, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_next_n_fiscal_years, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_next_n_fiscal_years, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_last_n_fiscal_quarters, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_last_n_fiscal_quarters, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_next_n_days, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_next_n_days, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_havingConditionExpression, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldExpression, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldExpression, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sObject, 2, .production_id = 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldExpression, 6),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldExpression, 6),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldExpression, 5),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldExpression, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldExpressionGroup, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldExpressionGroup, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditionExpression_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldExpressionGroup, 4),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldExpressionGroup, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sObject, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldHavingExpression, 6),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldHavingExpression, 6),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldHavingExpression, 5),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldHavingExpression, 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldHavingExpression, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldHavingExpression, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldGroupByList, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldOrderByList, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldGroupByList, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldOrderByList, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_havingConditionExpression_repeat1, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_operator, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_operator, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldList, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldGroupByList_repeat1, 2), SHIFT_REPEAT(167),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fieldList_repeat1, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldList_repeat1, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 7),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldList_repeat1, 2), SHIFT_REPEAT(22),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldList, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orderDirection, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldList, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldList, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldExpressionGroup_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldExpressionGroup_repeat1, 2), SHIFT_REPEAT(73),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldList, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 8),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nullHandling, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1, .production_id = 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeof, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldList_repeat1, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeof, 6),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldList_repeat1, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typeof_repeat1, 2), SHIFT_REPEAT(150),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typeof_repeat1, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(125),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberOfRowsToReturn, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 9),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typeof_repeat1, 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whenFieldList, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldExpression_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldExpression_repeat1, 2), SHIFT_REPEAT(8),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldName_repeat1, 2, .production_id = 4), SHIFT_REPEAT(193),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldName_repeat1, 2, .production_id = 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparisonListOperator, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeofField, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [492] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elseFieldList, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whenObjectType, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_SOQL(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
