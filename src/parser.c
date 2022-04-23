#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 310
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 190
#define ALIAS_COUNT 0
#define TOKEN_COUNT 124
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 6

enum {
  sym_identifier = 1,
  sym_keyword_select = 2,
  sym_keyword_typeof = 3,
  sym_keyword_using_scope = 4,
  sym_keyword_when = 5,
  sym_keyword_then = 6,
  sym_keyword_else = 7,
  sym_keyword_end = 8,
  sym_keyword_from = 9,
  sym_keyword_where = 10,
  sym_keyword_having = 11,
  sym_keyword_group_by = 12,
  sym_keyword_orderby = 13,
  sym_keyword_limit = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_COMMA = 17,
  anon_sym_DOT = 18,
  aux_sym_aggregateFunction_token1 = 19,
  aux_sym_aggregateFunction_token2 = 20,
  aux_sym_aggregateFunction_token3 = 21,
  aux_sym_aggregateFunction_token4 = 22,
  aux_sym_aggregateFunction_token5 = 23,
  aux_sym_aggregateFunction_token6 = 24,
  aux_sym_dateFunction_token1 = 25,
  aux_sym_dateFunction_token2 = 26,
  aux_sym_dateFunction_token3 = 27,
  aux_sym_dateFunction_token4 = 28,
  aux_sym_dateFunction_token5 = 29,
  aux_sym_dateFunction_token6 = 30,
  aux_sym_dateFunction_token7 = 31,
  aux_sym_dateFunction_token8 = 32,
  aux_sym_dateFunction_token9 = 33,
  aux_sym_dateFunction_token10 = 34,
  aux_sym_dateFunction_token11 = 35,
  aux_sym_dateFunction_token12 = 36,
  aux_sym_dateFunction_token13 = 37,
  aux_sym_toLabel_token1 = 38,
  aux_sym_filterScope_token1 = 39,
  aux_sym_filterScope_token2 = 40,
  aux_sym_filterScope_token3 = 41,
  aux_sym_filterScope_token4 = 42,
  aux_sym_filterScope_token5 = 43,
  aux_sym_filterScope_token6 = 44,
  aux_sym_filterScope_token7 = 45,
  sym_operator_equals = 46,
  sym_operator_not_equals = 47,
  sym_operator_less_than = 48,
  sym_operator_less_or_equal = 49,
  sym_operator_greater_than = 50,
  sym_operator_greater_or_equal = 51,
  sym_operator_like = 52,
  sym_operator_in = 53,
  sym_operator_not_in = 54,
  sym_operator_includes = 55,
  sym_operator_excludes = 56,
  sym_operator_and = 57,
  sym_operator_or = 58,
  sym_operator_not = 59,
  sym_operator_yesterday = 60,
  sym_operator_today = 61,
  sym_operator_tomorrow = 62,
  sym_operator_last_week = 63,
  sym_operator_this_week = 64,
  sym_operator_next_week = 65,
  sym_operator_last_month = 66,
  sym_operator_this_month = 67,
  sym_operator_next_month = 68,
  sym_operator_last_90_days = 69,
  sym_operator_next_90_days = 70,
  anon_sym_LAST_N_DAYS = 71,
  anon_sym_COLON = 72,
  anon_sym_NEXT_N_DAYS = 73,
  anon_sym_NEXT_N_WEEKS = 74,
  anon_sym_LAST_N_WEEKS = 75,
  anon_sym_NEXT_N_MONTHS = 76,
  anon_sym_LAST_N_MONTHS = 77,
  sym_operator_this_quarter = 78,
  sym_operator_last_quarter = 79,
  sym_operator_next_quarter = 80,
  anon_sym_NEXT_N_QUARTERS = 81,
  anon_sym_LAST_N_QUARTERS = 82,
  sym_operator_this_year = 83,
  sym_operator_last_year = 84,
  sym_operator_next_year = 85,
  anon_sym_NEXT_N_YEARS = 86,
  anon_sym_LAST_N_YEARS = 87,
  sym_operator_this_fiscal_quarter = 88,
  sym_operator_last_fiscal_quarter = 89,
  sym_operator_next_fiscal_quarter = 90,
  anon_sym_NEXT_N_FISCAL_QUARTERS = 91,
  anon_sym_LAST_N_FISCAL_QUARTERS = 92,
  sym_operator_this_fiscal_year = 93,
  sym_operator_last_fiscal_year = 94,
  sym_operator_next_fiscal_year = 95,
  anon_sym_NEXT_N_FISCAL_YEARS = 96,
  anon_sym_LAST_N_FISCAL_YEARS = 97,
  anon_sym_SQUOTE = 98,
  aux_sym_string_literal_token1 = 99,
  anon_sym_BSLASH = 100,
  anon_sym_n = 101,
  anon_sym_N = 102,
  anon_sym_r = 103,
  anon_sym_R = 104,
  anon_sym_t = 105,
  anon_sym_T = 106,
  anon_sym_b = 107,
  anon_sym_B = 108,
  anon_sym_f = 109,
  anon_sym_F = 110,
  anon_sym_DQUOTE = 111,
  anon_sym__ = 112,
  anon_sym_PERCENT = 113,
  sym_null_literal = 114,
  sym_number_literal = 115,
  sym_date_literal = 116,
  sym_datetime_literal = 117,
  aux_sym_orderDirection_token1 = 118,
  aux_sym_orderDirection_token2 = 119,
  aux_sym_nullHandling_token1 = 120,
  aux_sym_nullHandling_token2 = 121,
  aux_sym_nullHandling_token3 = 122,
  aux_sym_offset_token1 = 123,
  sym_source_file = 124,
  sym_query = 125,
  sym_fieldList = 126,
  sym_fieldName = 127,
  sym_alias = 128,
  sym_aggregateFunction = 129,
  sym_dateFunction = 130,
  sym_toLabel = 131,
  sym_typeof = 132,
  sym_typeofField = 133,
  sym_whenObjectType = 134,
  sym_whenFieldList = 135,
  sym_elseFieldList = 136,
  sym_sObject = 137,
  sym_usingScope = 138,
  sym_filterScope = 139,
  sym_where = 140,
  sym_fieldExpressionGroup = 141,
  sym_conditionExpression = 142,
  sym_fieldExpression = 143,
  sym_fieldHavingExpression = 144,
  sym_comparisonOperator = 145,
  sym_comparisonListOperator = 146,
  sym_operator_last_n_days = 147,
  sym_operator_next_n_days = 148,
  sym_operator_next_n_weeks = 149,
  sym_operator_last_n_weeks = 150,
  sym_operator_next_n_months = 151,
  sym_operator_last_n_months = 152,
  sym_operator_next_n_quarters = 153,
  sym_operator_last_n_quarters = 154,
  sym_operator_next_n_years = 155,
  sym_operator_last_n_years = 156,
  sym_operator_next_n_fiscal_quarters = 157,
  sym_operator_last_n_fiscal_quarters = 158,
  sym_operator_next_n_fiscal_years = 159,
  sym_operator_last_n_fiscal_years = 160,
  sym_logical_operator = 161,
  sym_datetime_operator = 162,
  sym_value = 163,
  sym_string_literal = 164,
  sym__string_escape_sequence = 165,
  sym_string_escape_character = 166,
  sym_special_character = 167,
  sym_group_by = 168,
  sym_fieldGroupByList = 169,
  sym_having = 170,
  sym_havingConditionExpression = 171,
  sym_order_by = 172,
  sym_fieldOrderByList = 173,
  sym_limit = 174,
  sym_orderDirection = 175,
  sym_nullHandling = 176,
  sym_numberOfRowsToReturn = 177,
  sym_offset = 178,
  aux_sym_source_file_repeat1 = 179,
  aux_sym_fieldList_repeat1 = 180,
  aux_sym_fieldName_repeat1 = 181,
  aux_sym_typeof_repeat1 = 182,
  aux_sym_fieldExpressionGroup_repeat1 = 183,
  aux_sym_conditionExpression_repeat1 = 184,
  aux_sym_fieldExpression_repeat1 = 185,
  aux_sym_string_literal_repeat1 = 186,
  aux_sym_fieldGroupByList_repeat1 = 187,
  aux_sym_havingConditionExpression_repeat1 = 188,
  aux_sym_fieldOrderByList_repeat1 = 189,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_typeof] = "keyword_typeof",
  [sym_keyword_using_scope] = "keyword_using_scope",
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
  [aux_sym_dateFunction_token1] = "dateFunction_token1",
  [aux_sym_dateFunction_token2] = "dateFunction_token2",
  [aux_sym_dateFunction_token3] = "dateFunction_token3",
  [aux_sym_dateFunction_token4] = "dateFunction_token4",
  [aux_sym_dateFunction_token5] = "dateFunction_token5",
  [aux_sym_dateFunction_token6] = "dateFunction_token6",
  [aux_sym_dateFunction_token7] = "dateFunction_token7",
  [aux_sym_dateFunction_token8] = "dateFunction_token8",
  [aux_sym_dateFunction_token9] = "dateFunction_token9",
  [aux_sym_dateFunction_token10] = "dateFunction_token10",
  [aux_sym_dateFunction_token11] = "dateFunction_token11",
  [aux_sym_dateFunction_token12] = "dateFunction_token12",
  [aux_sym_dateFunction_token13] = "dateFunction_token13",
  [aux_sym_toLabel_token1] = "toLabel_token1",
  [aux_sym_filterScope_token1] = "filterScope_token1",
  [aux_sym_filterScope_token2] = "filterScope_token2",
  [aux_sym_filterScope_token3] = "filterScope_token3",
  [aux_sym_filterScope_token4] = "filterScope_token4",
  [aux_sym_filterScope_token5] = "filterScope_token5",
  [aux_sym_filterScope_token6] = "filterScope_token6",
  [aux_sym_filterScope_token7] = "filterScope_token7",
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
  [anon_sym_BSLASH] = "\\",
  [anon_sym_n] = "n",
  [anon_sym_N] = "N",
  [anon_sym_r] = "r",
  [anon_sym_R] = "R",
  [anon_sym_t] = "t",
  [anon_sym_T] = "T",
  [anon_sym_b] = "b",
  [anon_sym_B] = "B",
  [anon_sym_f] = "f",
  [anon_sym_F] = "F",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym__] = "_",
  [anon_sym_PERCENT] = "%",
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
  [sym_dateFunction] = "dateFunction",
  [sym_toLabel] = "toLabel",
  [sym_typeof] = "typeof",
  [sym_typeofField] = "typeofField",
  [sym_whenObjectType] = "whenObjectType",
  [sym_whenFieldList] = "whenFieldList",
  [sym_elseFieldList] = "elseFieldList",
  [sym_sObject] = "sObject",
  [sym_usingScope] = "usingScope",
  [sym_filterScope] = "filterScope",
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
  [sym__string_escape_sequence] = "_string_escape_sequence",
  [sym_string_escape_character] = "string_escape_character",
  [sym_special_character] = "special_character",
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
  [aux_sym_fieldOrderByList_repeat1] = "fieldOrderByList_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_keyword_select] = sym_keyword_select,
  [sym_keyword_typeof] = sym_keyword_typeof,
  [sym_keyword_using_scope] = sym_keyword_using_scope,
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
  [aux_sym_dateFunction_token1] = aux_sym_dateFunction_token1,
  [aux_sym_dateFunction_token2] = aux_sym_dateFunction_token2,
  [aux_sym_dateFunction_token3] = aux_sym_dateFunction_token3,
  [aux_sym_dateFunction_token4] = aux_sym_dateFunction_token4,
  [aux_sym_dateFunction_token5] = aux_sym_dateFunction_token5,
  [aux_sym_dateFunction_token6] = aux_sym_dateFunction_token6,
  [aux_sym_dateFunction_token7] = aux_sym_dateFunction_token7,
  [aux_sym_dateFunction_token8] = aux_sym_dateFunction_token8,
  [aux_sym_dateFunction_token9] = aux_sym_dateFunction_token9,
  [aux_sym_dateFunction_token10] = aux_sym_dateFunction_token10,
  [aux_sym_dateFunction_token11] = aux_sym_dateFunction_token11,
  [aux_sym_dateFunction_token12] = aux_sym_dateFunction_token12,
  [aux_sym_dateFunction_token13] = aux_sym_dateFunction_token13,
  [aux_sym_toLabel_token1] = aux_sym_toLabel_token1,
  [aux_sym_filterScope_token1] = aux_sym_filterScope_token1,
  [aux_sym_filterScope_token2] = aux_sym_filterScope_token2,
  [aux_sym_filterScope_token3] = aux_sym_filterScope_token3,
  [aux_sym_filterScope_token4] = aux_sym_filterScope_token4,
  [aux_sym_filterScope_token5] = aux_sym_filterScope_token5,
  [aux_sym_filterScope_token6] = aux_sym_filterScope_token6,
  [aux_sym_filterScope_token7] = aux_sym_filterScope_token7,
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
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_R] = anon_sym_R,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_B] = anon_sym_B,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym__] = anon_sym__,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
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
  [sym_dateFunction] = sym_dateFunction,
  [sym_toLabel] = sym_toLabel,
  [sym_typeof] = sym_typeof,
  [sym_typeofField] = sym_typeofField,
  [sym_whenObjectType] = sym_whenObjectType,
  [sym_whenFieldList] = sym_whenFieldList,
  [sym_elseFieldList] = sym_elseFieldList,
  [sym_sObject] = sym_sObject,
  [sym_usingScope] = sym_usingScope,
  [sym_filterScope] = sym_filterScope,
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
  [sym__string_escape_sequence] = sym__string_escape_sequence,
  [sym_string_escape_character] = sym_string_escape_character,
  [sym_special_character] = sym_special_character,
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
  [aux_sym_fieldOrderByList_repeat1] = aux_sym_fieldOrderByList_repeat1,
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
  [sym_keyword_using_scope] = {
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
  [aux_sym_dateFunction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dateFunction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dateFunction_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dateFunction_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dateFunction_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dateFunction_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dateFunction_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dateFunction_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dateFunction_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dateFunction_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dateFunction_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dateFunction_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dateFunction_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_toLabel_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filterScope_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filterScope_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filterScope_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filterScope_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filterScope_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filterScope_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filterScope_token7] = {
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
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
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
  [sym_dateFunction] = {
    .visible = true,
    .named = true,
  },
  [sym_toLabel] = {
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
  [sym_usingScope] = {
    .visible = true,
    .named = true,
  },
  [sym_filterScope] = {
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
  [sym__string_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_string_escape_character] = {
    .visible = true,
    .named = true,
  },
  [sym_special_character] = {
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
  [aux_sym_fieldOrderByList_repeat1] = {
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
      if (eof) ADVANCE(46);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(89);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'Z') ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (lookahead == 'Z') ADVANCE(76);
      END_STATE();
    case 11:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      if (eof) ADVANCE(46);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 40:
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 41:
      if (eof) ADVANCE(46);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(89);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 42:
      if (eof) ADVANCE(46);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 43:
      if (eof) ADVANCE(46);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(89);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 44:
      if (eof) ADVANCE(46);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(89);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_keyword_using_scope);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_keyword_orderby);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_operator_equals);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_operator_not_equals);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_operator_less_than);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_operator_less_or_equal);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_operator_greater_than);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_operator_greater_or_equal);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_operator_not_in);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_operator_or);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_operator_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_date_literal);
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_datetime_literal);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
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
      if (lookahead == 'B') ADVANCE(1);
      if (lookahead == 'F') ADVANCE(2);
      if (lookahead == 'L') ADVANCE(3);
      if (lookahead == 'N') ADVANCE(4);
      if (lookahead == 'R') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(6);
      if (lookahead == 'Y') ADVANCE(7);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(15);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(16);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(20);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(21);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead == 'E') ADVANCE(30);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(31);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'H') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(31);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(35);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(36);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(41);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(47);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(49);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 20:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 28:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 29:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(67);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'X') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'M') ADVANCE(75);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 36:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == 'S') ADVANCE(79);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 42:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 43:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 44:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 46:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_operator_in);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 54:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 55:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(97);
      END_STATE();
    case 57:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 59:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(103);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 64:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 65:
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 66:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 69:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_operator_not);
      END_STATE();
    case 71:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == 'S') ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 75:
      if (lookahead == 'O') ADVANCE(115);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 77:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 79:
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_operator_and);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_orderDirection_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_aggregateFunction_token2);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(122);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_keyword_end);
      END_STATE();
    case 90:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 93:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 94:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_aggregateFunction_token5);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_aggregateFunction_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 97:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 98:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_aggregateFunction_token6);
      END_STATE();
    case 101:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(135);
      END_STATE();
    case 102:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 103:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_nullHandling_token3);
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_nullHandling_token3);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_operator_like);
      END_STATE();
    case 109:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(142);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_null_literal);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_keyword_then);
      END_STATE();
    case 114:
      if (lookahead == 'Y') ADVANCE(145);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(146);
      END_STATE();
    case 116:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_filterScope_token7);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 121:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 123:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_orderDirection_token2);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_keyword_else);
      END_STATE();
    case 126:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 127:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(158);
      END_STATE();
    case 130:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_filterScope_token3);
      if (lookahead == '_') ADVANCE(160);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 134:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(164);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_keyword_when);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_nullHandling_token2);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 140:
      if (lookahead == '9') ADVANCE(167);
      if (lookahead == 'F') ADVANCE(168);
      if (lookahead == 'M') ADVANCE(169);
      if (lookahead == 'N') ADVANCE(170);
      if (lookahead == 'Q') ADVANCE(171);
      if (lookahead == 'W') ADVANCE(172);
      if (lookahead == 'Y') ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 142:
      if (lookahead == '9') ADVANCE(174);
      if (lookahead == 'F') ADVANCE(175);
      if (lookahead == 'M') ADVANCE(176);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == 'Q') ADVANCE(178);
      if (lookahead == 'W') ADVANCE(179);
      if (lookahead == 'Y') ADVANCE(180);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_nullHandling_token1);
      END_STATE();
    case 144:
      if (lookahead == 'F') ADVANCE(181);
      if (lookahead == 'M') ADVANCE(182);
      if (lookahead == 'Q') ADVANCE(183);
      if (lookahead == 'W') ADVANCE(184);
      if (lookahead == 'Y') ADVANCE(185);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_operator_today);
      END_STATE();
    case 146:
      if (lookahead == 'R') ADVANCE(186);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 148:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(188);
      END_STATE();
    case 149:
      if (lookahead == 'R') ADVANCE(189);
      END_STATE();
    case 150:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_aggregateFunction_token1);
      if (lookahead == '_') ADVANCE(191);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 156:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 157:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(197);
      END_STATE();
    case 158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 159:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 162:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      END_STATE();
    case 163:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 166:
      if (lookahead == '_') ADVANCE(206);
      END_STATE();
    case 167:
      if (lookahead == '0') ADVANCE(207);
      END_STATE();
    case 168:
      if (lookahead == 'I') ADVANCE(208);
      END_STATE();
    case 169:
      if (lookahead == 'O') ADVANCE(209);
      END_STATE();
    case 170:
      if (lookahead == '_') ADVANCE(210);
      END_STATE();
    case 171:
      if (lookahead == 'U') ADVANCE(211);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(212);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(213);
      END_STATE();
    case 174:
      if (lookahead == '0') ADVANCE(214);
      END_STATE();
    case 175:
      if (lookahead == 'I') ADVANCE(215);
      END_STATE();
    case 176:
      if (lookahead == 'O') ADVANCE(216);
      END_STATE();
    case 177:
      if (lookahead == '_') ADVANCE(217);
      END_STATE();
    case 178:
      if (lookahead == 'U') ADVANCE(218);
      END_STATE();
    case 179:
      if (lookahead == 'E') ADVANCE(219);
      END_STATE();
    case 180:
      if (lookahead == 'E') ADVANCE(220);
      END_STATE();
    case 181:
      if (lookahead == 'I') ADVANCE(221);
      END_STATE();
    case 182:
      if (lookahead == 'O') ADVANCE(222);
      END_STATE();
    case 183:
      if (lookahead == 'U') ADVANCE(223);
      END_STATE();
    case 184:
      if (lookahead == 'E') ADVANCE(224);
      END_STATE();
    case 185:
      if (lookahead == 'E') ADVANCE(225);
      END_STATE();
    case 186:
      if (lookahead == 'O') ADVANCE(226);
      END_STATE();
    case 187:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_keyword_typeof);
      END_STATE();
    case 189:
      if (lookahead == 'D') ADVANCE(228);
      END_STATE();
    case 190:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 191:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 192:
      if (lookahead == '_') ADVANCE(231);
      END_STATE();
    case 193:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 194:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 195:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(234);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_keyword_having);
      END_STATE();
    case 198:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 200:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 201:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_offset_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 205:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 206:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(242);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(243);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(244);
      END_STATE();
    case 207:
      if (lookahead == '_') ADVANCE(245);
      END_STATE();
    case 208:
      if (lookahead == 'S') ADVANCE(246);
      END_STATE();
    case 209:
      if (lookahead == 'N') ADVANCE(247);
      END_STATE();
    case 210:
      if (lookahead == 'D') ADVANCE(248);
      if (lookahead == 'F') ADVANCE(249);
      if (lookahead == 'M') ADVANCE(250);
      if (lookahead == 'Q') ADVANCE(251);
      if (lookahead == 'W') ADVANCE(252);
      if (lookahead == 'Y') ADVANCE(253);
      END_STATE();
    case 211:
      if (lookahead == 'A') ADVANCE(254);
      END_STATE();
    case 212:
      if (lookahead == 'E') ADVANCE(255);
      END_STATE();
    case 213:
      if (lookahead == 'A') ADVANCE(256);
      END_STATE();
    case 214:
      if (lookahead == '_') ADVANCE(257);
      END_STATE();
    case 215:
      if (lookahead == 'S') ADVANCE(258);
      END_STATE();
    case 216:
      if (lookahead == 'N') ADVANCE(259);
      END_STATE();
    case 217:
      if (lookahead == 'D') ADVANCE(260);
      if (lookahead == 'F') ADVANCE(261);
      if (lookahead == 'M') ADVANCE(262);
      if (lookahead == 'Q') ADVANCE(263);
      if (lookahead == 'W') ADVANCE(264);
      if (lookahead == 'Y') ADVANCE(265);
      END_STATE();
    case 218:
      if (lookahead == 'A') ADVANCE(266);
      END_STATE();
    case 219:
      if (lookahead == 'E') ADVANCE(267);
      END_STATE();
    case 220:
      if (lookahead == 'A') ADVANCE(268);
      END_STATE();
    case 221:
      if (lookahead == 'S') ADVANCE(269);
      END_STATE();
    case 222:
      if (lookahead == 'N') ADVANCE(270);
      END_STATE();
    case 223:
      if (lookahead == 'A') ADVANCE(271);
      END_STATE();
    case 224:
      if (lookahead == 'E') ADVANCE(272);
      END_STATE();
    case 225:
      if (lookahead == 'A') ADVANCE(273);
      END_STATE();
    case 226:
      if (lookahead == 'W') ADVANCE(274);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_toLabel_token1);
      END_STATE();
    case 228:
      if (lookahead == 'A') ADVANCE(275);
      END_STATE();
    case 229:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 231:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(278);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(279);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(280);
      END_STATE();
    case 232:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(281);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 235:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(284);
      END_STATE();
    case 236:
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 237:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      END_STATE();
    case 238:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 239:
      if (lookahead == '_') ADVANCE(288);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 241:
      if (lookahead == '_') ADVANCE(290);
      END_STATE();
    case 242:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 243:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 245:
      if (lookahead == 'D') ADVANCE(294);
      END_STATE();
    case 246:
      if (lookahead == 'C') ADVANCE(295);
      END_STATE();
    case 247:
      if (lookahead == 'T') ADVANCE(296);
      END_STATE();
    case 248:
      if (lookahead == 'A') ADVANCE(297);
      END_STATE();
    case 249:
      if (lookahead == 'I') ADVANCE(298);
      END_STATE();
    case 250:
      if (lookahead == 'O') ADVANCE(299);
      END_STATE();
    case 251:
      if (lookahead == 'U') ADVANCE(300);
      END_STATE();
    case 252:
      if (lookahead == 'E') ADVANCE(301);
      END_STATE();
    case 253:
      if (lookahead == 'E') ADVANCE(302);
      END_STATE();
    case 254:
      if (lookahead == 'R') ADVANCE(303);
      END_STATE();
    case 255:
      if (lookahead == 'K') ADVANCE(304);
      END_STATE();
    case 256:
      if (lookahead == 'R') ADVANCE(305);
      END_STATE();
    case 257:
      if (lookahead == 'D') ADVANCE(306);
      END_STATE();
    case 258:
      if (lookahead == 'C') ADVANCE(307);
      END_STATE();
    case 259:
      if (lookahead == 'T') ADVANCE(308);
      END_STATE();
    case 260:
      if (lookahead == 'A') ADVANCE(309);
      END_STATE();
    case 261:
      if (lookahead == 'I') ADVANCE(310);
      END_STATE();
    case 262:
      if (lookahead == 'O') ADVANCE(311);
      END_STATE();
    case 263:
      if (lookahead == 'U') ADVANCE(312);
      END_STATE();
    case 264:
      if (lookahead == 'E') ADVANCE(313);
      END_STATE();
    case 265:
      if (lookahead == 'E') ADVANCE(314);
      END_STATE();
    case 266:
      if (lookahead == 'R') ADVANCE(315);
      END_STATE();
    case 267:
      if (lookahead == 'K') ADVANCE(316);
      END_STATE();
    case 268:
      if (lookahead == 'R') ADVANCE(317);
      END_STATE();
    case 269:
      if (lookahead == 'C') ADVANCE(318);
      END_STATE();
    case 270:
      if (lookahead == 'T') ADVANCE(319);
      END_STATE();
    case 271:
      if (lookahead == 'R') ADVANCE(320);
      END_STATE();
    case 272:
      if (lookahead == 'K') ADVANCE(321);
      END_STATE();
    case 273:
      if (lookahead == 'R') ADVANCE(322);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_operator_tomorrow);
      END_STATE();
    case 275:
      if (lookahead == 'Y') ADVANCE(323);
      END_STATE();
    case 276:
      if (lookahead == '_') ADVANCE(324);
      END_STATE();
    case 277:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(325);
      END_STATE();
    case 278:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_dateFunction_token7);
      END_STATE();
    case 282:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(329);
      END_STATE();
    case 283:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_operator_excludes);
      END_STATE();
    case 285:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_operator_includes);
      END_STATE();
    case 287:
      if (lookahead == '_') ADVANCE(332);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(335);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 292:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 293:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 294:
      if (lookahead == 'A') ADVANCE(340);
      END_STATE();
    case 295:
      if (lookahead == 'A') ADVANCE(341);
      END_STATE();
    case 296:
      if (lookahead == 'H') ADVANCE(342);
      END_STATE();
    case 297:
      if (lookahead == 'Y') ADVANCE(343);
      END_STATE();
    case 298:
      if (lookahead == 'S') ADVANCE(344);
      END_STATE();
    case 299:
      if (lookahead == 'N') ADVANCE(345);
      END_STATE();
    case 300:
      if (lookahead == 'A') ADVANCE(346);
      END_STATE();
    case 301:
      if (lookahead == 'E') ADVANCE(347);
      END_STATE();
    case 302:
      if (lookahead == 'A') ADVANCE(348);
      END_STATE();
    case 303:
      if (lookahead == 'T') ADVANCE(349);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_operator_last_week);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_operator_last_year);
      END_STATE();
    case 306:
      if (lookahead == 'A') ADVANCE(350);
      END_STATE();
    case 307:
      if (lookahead == 'A') ADVANCE(351);
      END_STATE();
    case 308:
      if (lookahead == 'H') ADVANCE(352);
      END_STATE();
    case 309:
      if (lookahead == 'Y') ADVANCE(353);
      END_STATE();
    case 310:
      if (lookahead == 'S') ADVANCE(354);
      END_STATE();
    case 311:
      if (lookahead == 'N') ADVANCE(355);
      END_STATE();
    case 312:
      if (lookahead == 'A') ADVANCE(356);
      END_STATE();
    case 313:
      if (lookahead == 'E') ADVANCE(357);
      END_STATE();
    case 314:
      if (lookahead == 'A') ADVANCE(358);
      END_STATE();
    case 315:
      if (lookahead == 'T') ADVANCE(359);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_operator_next_week);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_operator_next_year);
      END_STATE();
    case 318:
      if (lookahead == 'A') ADVANCE(360);
      END_STATE();
    case 319:
      if (lookahead == 'H') ADVANCE(361);
      END_STATE();
    case 320:
      if (lookahead == 'T') ADVANCE(362);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_operator_this_week);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_operator_this_year);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_operator_yesterday);
      END_STATE();
    case 324:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(363);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(364);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(365);
      END_STATE();
    case 325:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(366);
      END_STATE();
    case 326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 327:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 328:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_filterScope_token1);
      END_STATE();
    case 330:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(370);
      END_STATE();
    case 331:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 332:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(372);
      END_STATE();
    case 333:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 334:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 335:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 336:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 337:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(377);
      END_STATE();
    case 338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 340:
      if (lookahead == 'Y') ADVANCE(380);
      END_STATE();
    case 341:
      if (lookahead == 'L') ADVANCE(381);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_operator_last_month);
      END_STATE();
    case 343:
      if (lookahead == 'S') ADVANCE(382);
      END_STATE();
    case 344:
      if (lookahead == 'C') ADVANCE(383);
      END_STATE();
    case 345:
      if (lookahead == 'T') ADVANCE(384);
      END_STATE();
    case 346:
      if (lookahead == 'R') ADVANCE(385);
      END_STATE();
    case 347:
      if (lookahead == 'K') ADVANCE(386);
      END_STATE();
    case 348:
      if (lookahead == 'R') ADVANCE(387);
      END_STATE();
    case 349:
      if (lookahead == 'E') ADVANCE(388);
      END_STATE();
    case 350:
      if (lookahead == 'Y') ADVANCE(389);
      END_STATE();
    case 351:
      if (lookahead == 'L') ADVANCE(390);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_operator_next_month);
      END_STATE();
    case 353:
      if (lookahead == 'S') ADVANCE(391);
      END_STATE();
    case 354:
      if (lookahead == 'C') ADVANCE(392);
      END_STATE();
    case 355:
      if (lookahead == 'T') ADVANCE(393);
      END_STATE();
    case 356:
      if (lookahead == 'R') ADVANCE(394);
      END_STATE();
    case 357:
      if (lookahead == 'K') ADVANCE(395);
      END_STATE();
    case 358:
      if (lookahead == 'R') ADVANCE(396);
      END_STATE();
    case 359:
      if (lookahead == 'E') ADVANCE(397);
      END_STATE();
    case 360:
      if (lookahead == 'L') ADVANCE(398);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_operator_this_month);
      END_STATE();
    case 362:
      if (lookahead == 'E') ADVANCE(399);
      END_STATE();
    case 363:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 364:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(401);
      END_STATE();
    case 365:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 366:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      END_STATE();
    case 368:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(405);
      END_STATE();
    case 369:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_filterScope_token2);
      END_STATE();
    case 371:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(407);
      END_STATE();
    case 372:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(408);
      END_STATE();
    case 373:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 374:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 375:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 376:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(412);
      END_STATE();
    case 377:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(413);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(414);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_dateFunction_token10);
      END_STATE();
    case 380:
      if (lookahead == 'S') ADVANCE(415);
      END_STATE();
    case 381:
      if (lookahead == '_') ADVANCE(416);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_LAST_N_DAYS);
      END_STATE();
    case 383:
      if (lookahead == 'A') ADVANCE(417);
      END_STATE();
    case 384:
      if (lookahead == 'H') ADVANCE(418);
      END_STATE();
    case 385:
      if (lookahead == 'T') ADVANCE(419);
      END_STATE();
    case 386:
      if (lookahead == 'S') ADVANCE(420);
      END_STATE();
    case 387:
      if (lookahead == 'S') ADVANCE(421);
      END_STATE();
    case 388:
      if (lookahead == 'R') ADVANCE(422);
      END_STATE();
    case 389:
      if (lookahead == 'S') ADVANCE(423);
      END_STATE();
    case 390:
      if (lookahead == '_') ADVANCE(424);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_NEXT_N_DAYS);
      END_STATE();
    case 392:
      if (lookahead == 'A') ADVANCE(425);
      END_STATE();
    case 393:
      if (lookahead == 'H') ADVANCE(426);
      END_STATE();
    case 394:
      if (lookahead == 'T') ADVANCE(427);
      END_STATE();
    case 395:
      if (lookahead == 'S') ADVANCE(428);
      END_STATE();
    case 396:
      if (lookahead == 'S') ADVANCE(429);
      END_STATE();
    case 397:
      if (lookahead == 'R') ADVANCE(430);
      END_STATE();
    case 398:
      if (lookahead == '_') ADVANCE(431);
      END_STATE();
    case 399:
      if (lookahead == 'R') ADVANCE(432);
      END_STATE();
    case 400:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 401:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(434);
      END_STATE();
    case 402:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 403:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 404:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(437);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_dateFunction_token5);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_dateFunction_token6);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_dateFunction_token11);
      END_STATE();
    case 408:
      if (lookahead == '_') ADVANCE(438);
      END_STATE();
    case 409:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 410:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(440);
      END_STATE();
    case 411:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(441);
      END_STATE();
    case 412:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_dateFunction_token8);
      END_STATE();
    case 414:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_operator_last_90_days);
      END_STATE();
    case 416:
      if (lookahead == 'Q') ADVANCE(444);
      if (lookahead == 'Y') ADVANCE(445);
      END_STATE();
    case 417:
      if (lookahead == 'L') ADVANCE(446);
      END_STATE();
    case 418:
      if (lookahead == 'S') ADVANCE(447);
      END_STATE();
    case 419:
      if (lookahead == 'E') ADVANCE(448);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_LAST_N_WEEKS);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_LAST_N_YEARS);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_operator_last_quarter);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_operator_next_90_days);
      END_STATE();
    case 424:
      if (lookahead == 'Q') ADVANCE(449);
      if (lookahead == 'Y') ADVANCE(450);
      END_STATE();
    case 425:
      if (lookahead == 'L') ADVANCE(451);
      END_STATE();
    case 426:
      if (lookahead == 'S') ADVANCE(452);
      END_STATE();
    case 427:
      if (lookahead == 'E') ADVANCE(453);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_NEXT_N_WEEKS);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_NEXT_N_YEARS);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_operator_next_quarter);
      END_STATE();
    case 431:
      if (lookahead == 'Q') ADVANCE(454);
      if (lookahead == 'Y') ADVANCE(455);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_operator_this_quarter);
      END_STATE();
    case 433:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(456);
      END_STATE();
    case 434:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 435:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 436:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(459);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_dateFunction_token4);
      END_STATE();
    case 438:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(460);
      END_STATE();
    case 439:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_filterScope_token5);
      END_STATE();
    case 441:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(462);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_dateFunction_token13);
      END_STATE();
    case 443:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 444:
      if (lookahead == 'U') ADVANCE(464);
      END_STATE();
    case 445:
      if (lookahead == 'E') ADVANCE(465);
      END_STATE();
    case 446:
      if (lookahead == '_') ADVANCE(466);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_LAST_N_MONTHS);
      END_STATE();
    case 448:
      if (lookahead == 'R') ADVANCE(467);
      END_STATE();
    case 449:
      if (lookahead == 'U') ADVANCE(468);
      END_STATE();
    case 450:
      if (lookahead == 'E') ADVANCE(469);
      END_STATE();
    case 451:
      if (lookahead == '_') ADVANCE(470);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_NEXT_N_MONTHS);
      END_STATE();
    case 453:
      if (lookahead == 'R') ADVANCE(471);
      END_STATE();
    case 454:
      if (lookahead == 'U') ADVANCE(472);
      END_STATE();
    case 455:
      if (lookahead == 'E') ADVANCE(473);
      END_STATE();
    case 456:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(474);
      END_STATE();
    case 457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_dateFunction_token3);
      END_STATE();
    case 459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(476);
      END_STATE();
    case 460:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_dateFunction_token12);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_dateFunction_token9);
      END_STATE();
    case 464:
      if (lookahead == 'A') ADVANCE(479);
      END_STATE();
    case 465:
      if (lookahead == 'A') ADVANCE(480);
      END_STATE();
    case 466:
      if (lookahead == 'Q') ADVANCE(481);
      if (lookahead == 'Y') ADVANCE(482);
      END_STATE();
    case 467:
      if (lookahead == 'S') ADVANCE(483);
      END_STATE();
    case 468:
      if (lookahead == 'A') ADVANCE(484);
      END_STATE();
    case 469:
      if (lookahead == 'A') ADVANCE(485);
      END_STATE();
    case 470:
      if (lookahead == 'Q') ADVANCE(486);
      if (lookahead == 'Y') ADVANCE(487);
      END_STATE();
    case 471:
      if (lookahead == 'S') ADVANCE(488);
      END_STATE();
    case 472:
      if (lookahead == 'A') ADVANCE(489);
      END_STATE();
    case 473:
      if (lookahead == 'A') ADVANCE(490);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_dateFunction_token1);
      END_STATE();
    case 475:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_aggregateFunction_token3);
      END_STATE();
    case 477:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 478:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 479:
      if (lookahead == 'R') ADVANCE(494);
      END_STATE();
    case 480:
      if (lookahead == 'R') ADVANCE(495);
      END_STATE();
    case 481:
      if (lookahead == 'U') ADVANCE(496);
      END_STATE();
    case 482:
      if (lookahead == 'E') ADVANCE(497);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_LAST_N_QUARTERS);
      END_STATE();
    case 484:
      if (lookahead == 'R') ADVANCE(498);
      END_STATE();
    case 485:
      if (lookahead == 'R') ADVANCE(499);
      END_STATE();
    case 486:
      if (lookahead == 'U') ADVANCE(500);
      END_STATE();
    case 487:
      if (lookahead == 'E') ADVANCE(501);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_NEXT_N_QUARTERS);
      END_STATE();
    case 489:
      if (lookahead == 'R') ADVANCE(502);
      END_STATE();
    case 490:
      if (lookahead == 'R') ADVANCE(503);
      END_STATE();
    case 491:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 492:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(505);
      END_STATE();
    case 493:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 494:
      if (lookahead == 'T') ADVANCE(507);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_operator_last_fiscal_year);
      END_STATE();
    case 496:
      if (lookahead == 'A') ADVANCE(508);
      END_STATE();
    case 497:
      if (lookahead == 'A') ADVANCE(509);
      END_STATE();
    case 498:
      if (lookahead == 'T') ADVANCE(510);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_operator_next_fiscal_year);
      END_STATE();
    case 500:
      if (lookahead == 'A') ADVANCE(511);
      END_STATE();
    case 501:
      if (lookahead == 'A') ADVANCE(512);
      END_STATE();
    case 502:
      if (lookahead == 'T') ADVANCE(513);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_operator_this_fiscal_year);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_dateFunction_token2);
      END_STATE();
    case 505:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(514);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(515);
      END_STATE();
    case 507:
      if (lookahead == 'E') ADVANCE(516);
      END_STATE();
    case 508:
      if (lookahead == 'R') ADVANCE(517);
      END_STATE();
    case 509:
      if (lookahead == 'R') ADVANCE(518);
      END_STATE();
    case 510:
      if (lookahead == 'E') ADVANCE(519);
      END_STATE();
    case 511:
      if (lookahead == 'R') ADVANCE(520);
      END_STATE();
    case 512:
      if (lookahead == 'R') ADVANCE(521);
      END_STATE();
    case 513:
      if (lookahead == 'E') ADVANCE(522);
      END_STATE();
    case 514:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(523);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_filterScope_token6);
      END_STATE();
    case 516:
      if (lookahead == 'R') ADVANCE(524);
      END_STATE();
    case 517:
      if (lookahead == 'T') ADVANCE(525);
      END_STATE();
    case 518:
      if (lookahead == 'S') ADVANCE(526);
      END_STATE();
    case 519:
      if (lookahead == 'R') ADVANCE(527);
      END_STATE();
    case 520:
      if (lookahead == 'T') ADVANCE(528);
      END_STATE();
    case 521:
      if (lookahead == 'S') ADVANCE(529);
      END_STATE();
    case 522:
      if (lookahead == 'R') ADVANCE(530);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_filterScope_token4);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_operator_last_fiscal_quarter);
      END_STATE();
    case 525:
      if (lookahead == 'E') ADVANCE(531);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_LAST_N_FISCAL_YEARS);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_operator_next_fiscal_quarter);
      END_STATE();
    case 528:
      if (lookahead == 'E') ADVANCE(532);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_NEXT_N_FISCAL_YEARS);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_operator_this_fiscal_quarter);
      END_STATE();
    case 531:
      if (lookahead == 'R') ADVANCE(533);
      END_STATE();
    case 532:
      if (lookahead == 'R') ADVANCE(534);
      END_STATE();
    case 533:
      if (lookahead == 'S') ADVANCE(535);
      END_STATE();
    case 534:
      if (lookahead == 'S') ADVANCE(536);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_LAST_N_FISCAL_QUARTERS);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_NEXT_N_FISCAL_QUARTERS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 40},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 40},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 40},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 39},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 40},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 40},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 43},
  [38] = {.lex_state = 44},
  [39] = {.lex_state = 41},
  [40] = {.lex_state = 41},
  [41] = {.lex_state = 41},
  [42] = {.lex_state = 41},
  [43] = {.lex_state = 45},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 41},
  [46] = {.lex_state = 41},
  [47] = {.lex_state = 41},
  [48] = {.lex_state = 41},
  [49] = {.lex_state = 41},
  [50] = {.lex_state = 41},
  [51] = {.lex_state = 41},
  [52] = {.lex_state = 41},
  [53] = {.lex_state = 41},
  [54] = {.lex_state = 45},
  [55] = {.lex_state = 41},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 41},
  [59] = {.lex_state = 41},
  [60] = {.lex_state = 41},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 41},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 41},
  [65] = {.lex_state = 41},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 43},
  [70] = {.lex_state = 44},
  [71] = {.lex_state = 41},
  [72] = {.lex_state = 41},
  [73] = {.lex_state = 41},
  [74] = {.lex_state = 44},
  [75] = {.lex_state = 41},
  [76] = {.lex_state = 41},
  [77] = {.lex_state = 41},
  [78] = {.lex_state = 40},
  [79] = {.lex_state = 45},
  [80] = {.lex_state = 45},
  [81] = {.lex_state = 40},
  [82] = {.lex_state = 42},
  [83] = {.lex_state = 42},
  [84] = {.lex_state = 44},
  [85] = {.lex_state = 40},
  [86] = {.lex_state = 40},
  [87] = {.lex_state = 45},
  [88] = {.lex_state = 40},
  [89] = {.lex_state = 44},
  [90] = {.lex_state = 42},
  [91] = {.lex_state = 45},
  [92] = {.lex_state = 44},
  [93] = {.lex_state = 42},
  [94] = {.lex_state = 42},
  [95] = {.lex_state = 42},
  [96] = {.lex_state = 40},
  [97] = {.lex_state = 44},
  [98] = {.lex_state = 42},
  [99] = {.lex_state = 42},
  [100] = {.lex_state = 40},
  [101] = {.lex_state = 40},
  [102] = {.lex_state = 40},
  [103] = {.lex_state = 40},
  [104] = {.lex_state = 42},
  [105] = {.lex_state = 40},
  [106] = {.lex_state = 44},
  [107] = {.lex_state = 40},
  [108] = {.lex_state = 40},
  [109] = {.lex_state = 42},
  [110] = {.lex_state = 40},
  [111] = {.lex_state = 40},
  [112] = {.lex_state = 40},
  [113] = {.lex_state = 42},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 40},
  [116] = {.lex_state = 42},
  [117] = {.lex_state = 40},
  [118] = {.lex_state = 40},
  [119] = {.lex_state = 40},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 42},
  [122] = {.lex_state = 40},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 40},
  [125] = {.lex_state = 40},
  [126] = {.lex_state = 40},
  [127] = {.lex_state = 40},
  [128] = {.lex_state = 40},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 40},
  [133] = {.lex_state = 40},
  [134] = {.lex_state = 40},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 40},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 40},
  [139] = {.lex_state = 40},
  [140] = {.lex_state = 40},
  [141] = {.lex_state = 40},
  [142] = {.lex_state = 40},
  [143] = {.lex_state = 40},
  [144] = {.lex_state = 40},
  [145] = {.lex_state = 40},
  [146] = {.lex_state = 40},
  [147] = {.lex_state = 40},
  [148] = {.lex_state = 40},
  [149] = {.lex_state = 40},
  [150] = {.lex_state = 40},
  [151] = {.lex_state = 40},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 40},
  [155] = {.lex_state = 40},
  [156] = {.lex_state = 40},
  [157] = {.lex_state = 40},
  [158] = {.lex_state = 40},
  [159] = {.lex_state = 40},
  [160] = {.lex_state = 40},
  [161] = {.lex_state = 40},
  [162] = {.lex_state = 40},
  [163] = {.lex_state = 40},
  [164] = {.lex_state = 40},
  [165] = {.lex_state = 40},
  [166] = {.lex_state = 40},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 40},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 40},
  [188] = {.lex_state = 40},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 40},
  [191] = {.lex_state = 40},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 40},
  [194] = {.lex_state = 40},
  [195] = {.lex_state = 40},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 40},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 40},
  [202] = {.lex_state = 40},
  [203] = {.lex_state = 40},
  [204] = {.lex_state = 40},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 40},
  [207] = {.lex_state = 40},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 40},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 40},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 40},
  [215] = {.lex_state = 40},
  [216] = {.lex_state = 40},
  [217] = {.lex_state = 40},
  [218] = {.lex_state = 40},
  [219] = {.lex_state = 40},
  [220] = {.lex_state = 40},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 40},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 40},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 40},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 40},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 40},
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
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 40},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 40},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 40},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_typeof] = ACTIONS(1),
    [sym_keyword_using_scope] = ACTIONS(1),
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
    [aux_sym_dateFunction_token1] = ACTIONS(1),
    [aux_sym_dateFunction_token2] = ACTIONS(1),
    [aux_sym_dateFunction_token3] = ACTIONS(1),
    [aux_sym_dateFunction_token4] = ACTIONS(1),
    [aux_sym_dateFunction_token5] = ACTIONS(1),
    [aux_sym_dateFunction_token6] = ACTIONS(1),
    [aux_sym_dateFunction_token7] = ACTIONS(1),
    [aux_sym_dateFunction_token8] = ACTIONS(1),
    [aux_sym_dateFunction_token9] = ACTIONS(1),
    [aux_sym_dateFunction_token10] = ACTIONS(1),
    [aux_sym_dateFunction_token11] = ACTIONS(1),
    [aux_sym_dateFunction_token12] = ACTIONS(1),
    [aux_sym_dateFunction_token13] = ACTIONS(1),
    [aux_sym_toLabel_token1] = ACTIONS(1),
    [aux_sym_filterScope_token1] = ACTIONS(1),
    [aux_sym_filterScope_token2] = ACTIONS(1),
    [aux_sym_filterScope_token3] = ACTIONS(1),
    [aux_sym_filterScope_token4] = ACTIONS(1),
    [aux_sym_filterScope_token5] = ACTIONS(1),
    [aux_sym_filterScope_token6] = ACTIONS(1),
    [aux_sym_filterScope_token7] = ACTIONS(1),
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
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_R] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
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
    [sym_source_file] = STATE(243),
    [sym_query] = STATE(154),
    [aux_sym_source_file_repeat1] = STATE(154),
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
    STATE(208), 1,
      sym_value,
    STATE(284), 1,
      sym_query,
    ACTIONS(39), 2,
      sym_null_literal,
      sym_datetime_literal,
    ACTIONS(41), 2,
      sym_number_literal,
      sym_date_literal,
    STATE(64), 2,
      sym_datetime_operator,
      sym_string_literal,
    STATE(55), 14,
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
    STATE(205), 1,
      sym_value,
    STATE(227), 1,
      sym_query,
    ACTIONS(39), 2,
      sym_null_literal,
      sym_datetime_literal,
    ACTIONS(41), 2,
      sym_number_literal,
      sym_date_literal,
    STATE(64), 2,
      sym_datetime_operator,
      sym_string_literal,
    STATE(55), 14,
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
    STATE(192), 1,
      sym_value,
    STATE(245), 1,
      sym_query,
    ACTIONS(39), 2,
      sym_null_literal,
      sym_datetime_literal,
    ACTIONS(41), 2,
      sym_number_literal,
      sym_date_literal,
    STATE(64), 2,
      sym_datetime_operator,
      sym_string_literal,
    STATE(55), 14,
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
    STATE(170), 1,
      sym_value,
    ACTIONS(75), 2,
      sym_null_literal,
      sym_datetime_literal,
    ACTIONS(77), 2,
      sym_number_literal,
      sym_date_literal,
    STATE(168), 2,
      sym_datetime_operator,
      sym_string_literal,
    STATE(167), 14,
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
  [426] = 21,
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
    STATE(213), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_null_literal,
      sym_datetime_literal,
    ACTIONS(41), 2,
      sym_number_literal,
      sym_date_literal,
    STATE(64), 2,
      sym_datetime_operator,
      sym_string_literal,
    STATE(55), 14,
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
    STATE(76), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_null_literal,
      sym_datetime_literal,
    ACTIONS(41), 2,
      sym_number_literal,
      sym_date_literal,
    STATE(64), 2,
      sym_datetime_operator,
      sym_string_literal,
    STATE(55), 14,
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
    STATE(80), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_null_literal,
      sym_datetime_literal,
    ACTIONS(41), 2,
      sym_number_literal,
      sym_date_literal,
    STATE(64), 2,
      sym_datetime_operator,
      sym_string_literal,
    STATE(55), 14,
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
  [732] = 3,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 2,
      sym_number_literal,
      sym_date_literal,
    ACTIONS(81), 40,
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
  [782] = 2,
    ACTIONS(83), 2,
      sym_number_literal,
      sym_date_literal,
    ACTIONS(81), 40,
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
  [829] = 11,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_keyword_typeof,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      aux_sym_toLabel_token1,
    STATE(133), 1,
      sym_typeof,
    STATE(212), 1,
      aux_sym_fieldName_repeat1,
    STATE(268), 1,
      sym_fieldList,
    STATE(283), 1,
      sym_elseFieldList,
    STATE(100), 4,
      sym_fieldName,
      sym_aggregateFunction,
      sym_dateFunction,
      sym_toLabel,
    ACTIONS(91), 6,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
    ACTIONS(93), 13,
      aux_sym_dateFunction_token1,
      aux_sym_dateFunction_token2,
      aux_sym_dateFunction_token3,
      aux_sym_dateFunction_token4,
      aux_sym_dateFunction_token5,
      aux_sym_dateFunction_token6,
      aux_sym_dateFunction_token7,
      aux_sym_dateFunction_token8,
      aux_sym_dateFunction_token9,
      aux_sym_dateFunction_token10,
      aux_sym_dateFunction_token11,
      aux_sym_dateFunction_token12,
      aux_sym_dateFunction_token13,
  [883] = 11,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_keyword_typeof,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      aux_sym_toLabel_token1,
    STATE(133), 1,
      sym_typeof,
    STATE(206), 1,
      sym_whenFieldList,
    STATE(207), 1,
      sym_fieldList,
    STATE(212), 1,
      aux_sym_fieldName_repeat1,
    STATE(100), 4,
      sym_fieldName,
      sym_aggregateFunction,
      sym_dateFunction,
      sym_toLabel,
    ACTIONS(91), 6,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
    ACTIONS(93), 13,
      aux_sym_dateFunction_token1,
      aux_sym_dateFunction_token2,
      aux_sym_dateFunction_token3,
      aux_sym_dateFunction_token4,
      aux_sym_dateFunction_token5,
      aux_sym_dateFunction_token6,
      aux_sym_dateFunction_token7,
      aux_sym_dateFunction_token8,
      aux_sym_dateFunction_token9,
      aux_sym_dateFunction_token10,
      aux_sym_dateFunction_token11,
      aux_sym_dateFunction_token12,
      aux_sym_dateFunction_token13,
  [937] = 10,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_keyword_typeof,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      aux_sym_toLabel_token1,
    STATE(133), 1,
      sym_typeof,
    STATE(212), 1,
      aux_sym_fieldName_repeat1,
    STATE(239), 1,
      sym_fieldList,
    STATE(100), 4,
      sym_fieldName,
      sym_aggregateFunction,
      sym_dateFunction,
      sym_toLabel,
    ACTIONS(91), 6,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
    ACTIONS(93), 13,
      aux_sym_dateFunction_token1,
      aux_sym_dateFunction_token2,
      aux_sym_dateFunction_token3,
      aux_sym_dateFunction_token4,
      aux_sym_dateFunction_token5,
      aux_sym_dateFunction_token6,
      aux_sym_dateFunction_token7,
      aux_sym_dateFunction_token8,
      aux_sym_dateFunction_token9,
      aux_sym_dateFunction_token10,
      aux_sym_dateFunction_token11,
      aux_sym_dateFunction_token12,
      aux_sym_dateFunction_token13,
  [988] = 10,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_keyword_typeof,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      aux_sym_toLabel_token1,
    STATE(133), 1,
      sym_typeof,
    STATE(212), 1,
      aux_sym_fieldName_repeat1,
    STATE(307), 1,
      sym_fieldList,
    STATE(100), 4,
      sym_fieldName,
      sym_aggregateFunction,
      sym_dateFunction,
      sym_toLabel,
    ACTIONS(91), 6,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
    ACTIONS(93), 13,
      aux_sym_dateFunction_token1,
      aux_sym_dateFunction_token2,
      aux_sym_dateFunction_token3,
      aux_sym_dateFunction_token4,
      aux_sym_dateFunction_token5,
      aux_sym_dateFunction_token6,
      aux_sym_dateFunction_token7,
      aux_sym_dateFunction_token8,
      aux_sym_dateFunction_token9,
      aux_sym_dateFunction_token10,
      aux_sym_dateFunction_token11,
      aux_sym_dateFunction_token12,
      aux_sym_dateFunction_token13,
  [1039] = 9,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_keyword_typeof,
    ACTIONS(95), 1,
      aux_sym_toLabel_token1,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym_typeof,
    STATE(212), 1,
      aux_sym_fieldName_repeat1,
    STATE(111), 4,
      sym_fieldName,
      sym_aggregateFunction,
      sym_dateFunction,
      sym_toLabel,
    ACTIONS(91), 6,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
    ACTIONS(93), 13,
      aux_sym_dateFunction_token1,
      aux_sym_dateFunction_token2,
      aux_sym_dateFunction_token3,
      aux_sym_dateFunction_token4,
      aux_sym_dateFunction_token5,
      aux_sym_dateFunction_token6,
      aux_sym_dateFunction_token7,
      aux_sym_dateFunction_token8,
      aux_sym_dateFunction_token9,
      aux_sym_dateFunction_token10,
      aux_sym_dateFunction_token11,
      aux_sym_dateFunction_token12,
      aux_sym_dateFunction_token13,
  [1087] = 3,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 3,
      sym_operator_less_than,
      sym_operator_greater_than,
      sym_operator_in,
    ACTIONS(99), 19,
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
  [1117] = 3,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(107), 3,
      sym_operator_less_than,
      sym_operator_greater_than,
      sym_operator_in,
    ACTIONS(105), 19,
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
  [1147] = 8,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_toLabel_token1,
    STATE(106), 1,
      sym_conditionExpression,
    STATE(219), 1,
      aux_sym_fieldName_repeat1,
    STATE(39), 2,
      sym_fieldExpressionGroup,
      sym_fieldExpression,
    STATE(32), 3,
      sym_fieldName,
      sym_dateFunction,
      sym_toLabel,
    ACTIONS(113), 13,
      aux_sym_dateFunction_token1,
      aux_sym_dateFunction_token2,
      aux_sym_dateFunction_token3,
      aux_sym_dateFunction_token4,
      aux_sym_dateFunction_token5,
      aux_sym_dateFunction_token6,
      aux_sym_dateFunction_token7,
      aux_sym_dateFunction_token8,
      aux_sym_dateFunction_token9,
      aux_sym_dateFunction_token10,
      aux_sym_dateFunction_token11,
      aux_sym_dateFunction_token12,
      aux_sym_dateFunction_token13,
  [1187] = 2,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 21,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
      aux_sym_dateFunction_token1,
      aux_sym_dateFunction_token2,
      aux_sym_dateFunction_token3,
      aux_sym_dateFunction_token4,
      aux_sym_dateFunction_token5,
      aux_sym_dateFunction_token6,
      aux_sym_dateFunction_token7,
      aux_sym_dateFunction_token8,
      aux_sym_dateFunction_token9,
      aux_sym_dateFunction_token10,
      aux_sym_dateFunction_token11,
      aux_sym_dateFunction_token12,
      aux_sym_dateFunction_token13,
      aux_sym_toLabel_token1,
      sym_identifier,
  [1214] = 7,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_toLabel_token1,
    STATE(219), 1,
      aux_sym_fieldName_repeat1,
    STATE(71), 2,
      sym_fieldExpressionGroup,
      sym_fieldExpression,
    STATE(32), 3,
      sym_fieldName,
      sym_dateFunction,
      sym_toLabel,
    ACTIONS(113), 13,
      aux_sym_dateFunction_token1,
      aux_sym_dateFunction_token2,
      aux_sym_dateFunction_token3,
      aux_sym_dateFunction_token4,
      aux_sym_dateFunction_token5,
      aux_sym_dateFunction_token6,
      aux_sym_dateFunction_token7,
      aux_sym_dateFunction_token8,
      aux_sym_dateFunction_token9,
      aux_sym_dateFunction_token10,
      aux_sym_dateFunction_token11,
      aux_sym_dateFunction_token12,
      aux_sym_dateFunction_token13,
  [1251] = 6,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(115), 1,
      aux_sym_toLabel_token1,
    STATE(130), 1,
      sym_fieldExpression,
    STATE(219), 1,
      aux_sym_fieldName_repeat1,
    STATE(34), 3,
      sym_fieldName,
      sym_dateFunction,
      sym_toLabel,
    ACTIONS(113), 13,
      aux_sym_dateFunction_token1,
      aux_sym_dateFunction_token2,
      aux_sym_dateFunction_token3,
      aux_sym_dateFunction_token4,
      aux_sym_dateFunction_token5,
      aux_sym_dateFunction_token6,
      aux_sym_dateFunction_token7,
      aux_sym_dateFunction_token8,
      aux_sym_dateFunction_token9,
      aux_sym_dateFunction_token10,
      aux_sym_dateFunction_token11,
      aux_sym_dateFunction_token12,
      aux_sym_dateFunction_token13,
  [1284] = 6,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(115), 1,
      aux_sym_toLabel_token1,
    STATE(152), 1,
      sym_fieldExpression,
    STATE(219), 1,
      aux_sym_fieldName_repeat1,
    STATE(34), 3,
      sym_fieldName,
      sym_dateFunction,
      sym_toLabel,
    ACTIONS(113), 13,
      aux_sym_dateFunction_token1,
      aux_sym_dateFunction_token2,
      aux_sym_dateFunction_token3,
      aux_sym_dateFunction_token4,
      aux_sym_dateFunction_token5,
      aux_sym_dateFunction_token6,
      aux_sym_dateFunction_token7,
      aux_sym_dateFunction_token8,
      aux_sym_dateFunction_token9,
      aux_sym_dateFunction_token10,
      aux_sym_dateFunction_token11,
      aux_sym_dateFunction_token12,
      aux_sym_dateFunction_token13,
  [1317] = 2,
    ACTIONS(123), 3,
      sym_operator_less_than,
      sym_operator_greater_than,
      sym_operator_in,
    ACTIONS(121), 16,
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
      aux_sym_offset_token1,
  [1341] = 2,
    ACTIONS(127), 3,
      sym_operator_less_than,
      sym_operator_greater_than,
      sym_operator_in,
    ACTIONS(125), 16,
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
      aux_sym_offset_token1,
  [1365] = 5,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(98), 1,
      sym_fieldGroupByList,
    STATE(219), 1,
      aux_sym_fieldName_repeat1,
    STATE(83), 2,
      sym_fieldName,
      sym_dateFunction,
    ACTIONS(113), 13,
      aux_sym_dateFunction_token1,
      aux_sym_dateFunction_token2,
      aux_sym_dateFunction_token3,
      aux_sym_dateFunction_token4,
      aux_sym_dateFunction_token5,
      aux_sym_dateFunction_token6,
      aux_sym_dateFunction_token7,
      aux_sym_dateFunction_token8,
      aux_sym_dateFunction_token9,
      aux_sym_dateFunction_token10,
      aux_sym_dateFunction_token11,
      aux_sym_dateFunction_token12,
      aux_sym_dateFunction_token13,
  [1394] = 4,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(219), 1,
      aux_sym_fieldName_repeat1,
    STATE(94), 2,
      sym_fieldName,
      sym_dateFunction,
    ACTIONS(113), 13,
      aux_sym_dateFunction_token1,
      aux_sym_dateFunction_token2,
      aux_sym_dateFunction_token3,
      aux_sym_dateFunction_token4,
      aux_sym_dateFunction_token5,
      aux_sym_dateFunction_token6,
      aux_sym_dateFunction_token7,
      aux_sym_dateFunction_token8,
      aux_sym_dateFunction_token9,
      aux_sym_dateFunction_token10,
      aux_sym_dateFunction_token11,
      aux_sym_dateFunction_token12,
      aux_sym_dateFunction_token13,
  [1420] = 2,
    STATE(200), 1,
      sym_special_character,
    ACTIONS(129), 15,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
      anon_sym_n,
      anon_sym_N,
      anon_sym_r,
      anon_sym_R,
      anon_sym_t,
      anon_sym_T,
      anon_sym_b,
      anon_sym_B,
      anon_sym_f,
      anon_sym_F,
      anon_sym_DQUOTE,
      anon_sym__,
      anon_sym_PERCENT,
  [1441] = 1,
    ACTIONS(131), 15,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
      anon_sym_n,
      anon_sym_N,
      anon_sym_r,
      anon_sym_R,
      anon_sym_t,
      anon_sym_T,
      anon_sym_b,
      anon_sym_B,
      anon_sym_f,
      anon_sym_F,
      anon_sym_DQUOTE,
      anon_sym__,
      anon_sym_PERCENT,
  [1459] = 7,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_havingConditionExpression,
    STATE(219), 1,
      aux_sym_fieldName_repeat1,
    STATE(31), 2,
      sym_fieldName,
      sym_aggregateFunction,
    STATE(43), 2,
      sym_fieldExpressionGroup,
      sym_fieldHavingExpression,
    ACTIONS(133), 6,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
  [1488] = 13,
    ACTIONS(137), 1,
      sym_keyword_using_scope,
    ACTIONS(139), 1,
      sym_keyword_where,
    ACTIONS(141), 1,
      sym_keyword_group_by,
    ACTIONS(143), 1,
      sym_keyword_orderby,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(38), 1,
      sym_usingScope,
    STATE(74), 1,
      sym_where,
    STATE(93), 1,
      sym_group_by,
    STATE(107), 1,
      sym_order_by,
    STATE(141), 1,
      sym_limit,
    STATE(201), 1,
      sym_offset,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      sym_keyword_select,
  [1529] = 7,
    ACTIONS(153), 1,
      sym_operator_in,
    ACTIONS(155), 1,
      sym_operator_not_in,
    STATE(8), 1,
      sym_comparisonOperator,
    STATE(244), 1,
      sym_comparisonListOperator,
    ACTIONS(151), 2,
      sym_operator_less_than,
      sym_operator_greater_than,
    ACTIONS(157), 2,
      sym_operator_includes,
      sym_operator_excludes,
    ACTIONS(149), 5,
      sym_operator_equals,
      sym_operator_not_equals,
      sym_operator_less_or_equal,
      sym_operator_greater_or_equal,
      sym_operator_like,
  [1557] = 7,
    ACTIONS(153), 1,
      sym_operator_in,
    ACTIONS(155), 1,
      sym_operator_not_in,
    STATE(7), 1,
      sym_comparisonOperator,
    STATE(234), 1,
      sym_comparisonListOperator,
    ACTIONS(151), 2,
      sym_operator_less_than,
      sym_operator_greater_than,
    ACTIONS(157), 2,
      sym_operator_includes,
      sym_operator_excludes,
    ACTIONS(149), 5,
      sym_operator_equals,
      sym_operator_not_equals,
      sym_operator_less_or_equal,
      sym_operator_greater_or_equal,
      sym_operator_like,
  [1585] = 3,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(99), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(103), 10,
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
  [1605] = 7,
    ACTIONS(153), 1,
      sym_operator_in,
    ACTIONS(155), 1,
      sym_operator_not_in,
    STATE(5), 1,
      sym_comparisonOperator,
    STATE(308), 1,
      sym_comparisonListOperator,
    ACTIONS(151), 2,
      sym_operator_less_than,
      sym_operator_greater_than,
    ACTIONS(157), 2,
      sym_operator_includes,
      sym_operator_excludes,
    ACTIONS(149), 5,
      sym_operator_equals,
      sym_operator_not_equals,
      sym_operator_less_or_equal,
      sym_operator_greater_or_equal,
      sym_operator_like,
  [1633] = 6,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(219), 1,
      aux_sym_fieldName_repeat1,
    STATE(31), 2,
      sym_fieldName,
      sym_aggregateFunction,
    STATE(87), 2,
      sym_fieldExpressionGroup,
      sym_fieldHavingExpression,
    ACTIONS(133), 6,
      aux_sym_aggregateFunction_token1,
      aux_sym_aggregateFunction_token2,
      aux_sym_aggregateFunction_token3,
      aux_sym_aggregateFunction_token4,
      aux_sym_aggregateFunction_token5,
      aux_sym_aggregateFunction_token6,
  [1659] = 3,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(107), 10,
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
  [1679] = 13,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      sym_keyword_using_scope,
    ACTIONS(139), 1,
      sym_keyword_where,
    ACTIONS(141), 1,
      sym_keyword_group_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(159), 1,
      sym_keyword_orderby,
    STATE(57), 1,
      sym_usingScope,
    STATE(89), 1,
      sym_where,
    STATE(104), 1,
      sym_group_by,
    STATE(107), 1,
      sym_order_by,
    STATE(141), 1,
      sym_limit,
    STATE(201), 1,
      sym_offset,
  [1719] = 11,
    ACTIONS(139), 1,
      sym_keyword_where,
    ACTIONS(141), 1,
      sym_keyword_group_by,
    ACTIONS(143), 1,
      sym_keyword_orderby,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(70), 1,
      sym_where,
    STATE(95), 1,
      sym_group_by,
    STATE(108), 1,
      sym_order_by,
    STATE(142), 1,
      sym_limit,
    STATE(195), 1,
      sym_offset,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      sym_keyword_select,
  [1754] = 5,
    ACTIONS(167), 1,
      sym_operator_or,
    STATE(20), 1,
      sym_logical_operator,
    STATE(41), 1,
      aux_sym_conditionExpression_repeat1,
    ACTIONS(165), 2,
      sym_operator_and,
      sym_operator_not,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [1777] = 5,
    ACTIONS(174), 1,
      sym_operator_or,
    STATE(20), 1,
      sym_logical_operator,
    STATE(40), 1,
      aux_sym_conditionExpression_repeat1,
    ACTIONS(171), 2,
      sym_operator_and,
      sym_operator_not,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [1800] = 5,
    ACTIONS(167), 1,
      sym_operator_or,
    STATE(20), 1,
      sym_logical_operator,
    STATE(40), 1,
      aux_sym_conditionExpression_repeat1,
    ACTIONS(165), 2,
      sym_operator_and,
      sym_operator_not,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [1823] = 2,
    ACTIONS(181), 1,
      sym_operator_or,
    ACTIONS(179), 10,
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
  [1839] = 5,
    ACTIONS(167), 1,
      sym_operator_or,
    STATE(35), 1,
      sym_logical_operator,
    STATE(54), 1,
      aux_sym_havingConditionExpression_repeat1,
    ACTIONS(165), 2,
      sym_operator_and,
      sym_operator_not,
    ACTIONS(183), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [1861] = 2,
    ACTIONS(187), 1,
      sym_operator_or,
    ACTIONS(185), 10,
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
  [1877] = 2,
    ACTIONS(191), 1,
      sym_operator_or,
    ACTIONS(189), 10,
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
  [1893] = 2,
    ACTIONS(195), 1,
      sym_operator_or,
    ACTIONS(193), 10,
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
  [1909] = 2,
    ACTIONS(199), 1,
      sym_operator_or,
    ACTIONS(197), 10,
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
  [1925] = 2,
    ACTIONS(203), 1,
      sym_operator_or,
    ACTIONS(201), 10,
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
  [1941] = 2,
    ACTIONS(207), 1,
      sym_operator_or,
    ACTIONS(205), 10,
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
  [1957] = 2,
    ACTIONS(211), 1,
      sym_operator_or,
    ACTIONS(209), 10,
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
  [1973] = 2,
    ACTIONS(215), 1,
      sym_operator_or,
    ACTIONS(213), 10,
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
  [1989] = 2,
    ACTIONS(219), 1,
      sym_operator_or,
    ACTIONS(217), 10,
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
  [2005] = 2,
    ACTIONS(223), 1,
      sym_operator_or,
    ACTIONS(221), 10,
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
  [2021] = 5,
    ACTIONS(167), 1,
      sym_operator_or,
    STATE(35), 1,
      sym_logical_operator,
    STATE(68), 1,
      aux_sym_havingConditionExpression_repeat1,
    ACTIONS(165), 2,
      sym_operator_and,
      sym_operator_not,
    ACTIONS(225), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2043] = 2,
    ACTIONS(229), 1,
      sym_operator_or,
    ACTIONS(227), 10,
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
  [2059] = 2,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(231), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_using_scope,
      sym_keyword_then,
      sym_keyword_where,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2075] = 11,
    ACTIONS(139), 1,
      sym_keyword_where,
    ACTIONS(141), 1,
      sym_keyword_group_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(159), 1,
      sym_keyword_orderby,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_where,
    STATE(108), 1,
      sym_order_by,
    STATE(113), 1,
      sym_group_by,
    STATE(142), 1,
      sym_limit,
    STATE(195), 1,
      sym_offset,
  [2109] = 2,
    ACTIONS(235), 1,
      sym_operator_or,
    ACTIONS(233), 10,
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
  [2125] = 2,
    ACTIONS(239), 1,
      sym_operator_or,
    ACTIONS(237), 10,
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
  [2141] = 2,
    ACTIONS(243), 1,
      sym_operator_or,
    ACTIONS(241), 10,
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
  [2157] = 2,
    ACTIONS(247), 3,
      sym_operator_less_than,
      sym_operator_greater_than,
      sym_operator_in,
    ACTIONS(245), 8,
      sym_operator_equals,
      sym_operator_not_equals,
      sym_operator_less_or_equal,
      sym_operator_greater_or_equal,
      sym_operator_like,
      sym_operator_not_in,
      sym_operator_includes,
      sym_operator_excludes,
  [2173] = 2,
    ACTIONS(251), 1,
      sym_operator_or,
    ACTIONS(249), 10,
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
  [2189] = 2,
    ACTIONS(255), 3,
      sym_operator_less_than,
      sym_operator_greater_than,
      sym_operator_in,
    ACTIONS(253), 8,
      sym_operator_equals,
      sym_operator_not_equals,
      sym_operator_less_or_equal,
      sym_operator_greater_or_equal,
      sym_operator_like,
      sym_operator_not_in,
      sym_operator_includes,
      sym_operator_excludes,
  [2205] = 2,
    ACTIONS(259), 1,
      sym_operator_or,
    ACTIONS(257), 10,
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
  [2221] = 2,
    ACTIONS(263), 1,
      sym_operator_or,
    ACTIONS(261), 10,
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
  [2237] = 2,
    ACTIONS(267), 3,
      sym_operator_less_than,
      sym_operator_greater_than,
      sym_operator_in,
    ACTIONS(265), 8,
      sym_operator_equals,
      sym_operator_not_equals,
      sym_operator_less_or_equal,
      sym_operator_greater_or_equal,
      sym_operator_like,
      sym_operator_not_in,
      sym_operator_includes,
      sym_operator_excludes,
  [2253] = 2,
    ACTIONS(271), 3,
      sym_operator_less_than,
      sym_operator_greater_than,
      sym_operator_in,
    ACTIONS(269), 8,
      sym_operator_equals,
      sym_operator_not_equals,
      sym_operator_less_or_equal,
      sym_operator_greater_or_equal,
      sym_operator_like,
      sym_operator_not_in,
      sym_operator_includes,
      sym_operator_excludes,
  [2269] = 5,
    ACTIONS(278), 1,
      sym_operator_or,
    STATE(35), 1,
      sym_logical_operator,
    STATE(68), 1,
      aux_sym_havingConditionExpression_repeat1,
    ACTIONS(275), 2,
      sym_operator_and,
      sym_operator_not,
    ACTIONS(273), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2291] = 2,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(281), 10,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_using_scope,
      sym_keyword_then,
      sym_keyword_where,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2307] = 9,
    ACTIONS(141), 1,
      sym_keyword_group_by,
    ACTIONS(143), 1,
      sym_keyword_orderby,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(99), 1,
      sym_group_by,
    STATE(112), 1,
      sym_order_by,
    STATE(148), 1,
      sym_limit,
    STATE(204), 1,
      sym_offset,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      sym_keyword_select,
  [2336] = 2,
    ACTIONS(285), 1,
      sym_operator_or,
    ACTIONS(169), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [2351] = 2,
    ACTIONS(289), 1,
      sym_operator_or,
    ACTIONS(287), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [2366] = 2,
    ACTIONS(293), 1,
      sym_operator_or,
    ACTIONS(291), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [2381] = 9,
    ACTIONS(141), 1,
      sym_keyword_group_by,
    ACTIONS(143), 1,
      sym_keyword_orderby,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(95), 1,
      sym_group_by,
    STATE(108), 1,
      sym_order_by,
    STATE(142), 1,
      sym_limit,
    STATE(195), 1,
      sym_offset,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      sym_keyword_select,
  [2410] = 2,
    ACTIONS(297), 1,
      sym_operator_or,
    ACTIONS(295), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [2425] = 2,
    ACTIONS(301), 1,
      sym_operator_or,
    ACTIONS(299), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [2440] = 2,
    ACTIONS(305), 1,
      sym_operator_or,
    ACTIONS(303), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [2455] = 5,
    ACTIONS(311), 1,
      aux_sym_nullHandling_token1,
    STATE(105), 1,
      sym_orderDirection,
    STATE(149), 1,
      sym_nullHandling,
    ACTIONS(309), 2,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
    ACTIONS(307), 5,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2476] = 2,
    ACTIONS(315), 1,
      sym_operator_or,
    ACTIONS(313), 8,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [2490] = 2,
    ACTIONS(319), 1,
      sym_operator_or,
    ACTIONS(317), 8,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [2504] = 1,
    ACTIONS(321), 9,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [2516] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_fieldGroupByList_repeat1,
    ACTIONS(323), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_having,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2532] = 3,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_fieldGroupByList_repeat1,
    ACTIONS(328), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_having,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2548] = 9,
    ACTIONS(141), 1,
      sym_keyword_group_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(159), 1,
      sym_keyword_orderby,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_group_by,
    STATE(112), 1,
      sym_order_by,
    STATE(148), 1,
      sym_limit,
    STATE(204), 1,
      sym_offset,
  [2576] = 3,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_fieldOrderByList_repeat1,
    ACTIONS(332), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [2592] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_fieldOrderByList_repeat1,
    ACTIONS(321), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [2608] = 2,
    ACTIONS(339), 1,
      sym_operator_or,
    ACTIONS(273), 8,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [2622] = 3,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_fieldOrderByList_repeat1,
    ACTIONS(341), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [2638] = 9,
    ACTIONS(141), 1,
      sym_keyword_group_by,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(159), 1,
      sym_keyword_orderby,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_order_by,
    STATE(113), 1,
      sym_group_by,
    STATE(142), 1,
      sym_limit,
    STATE(195), 1,
      sym_offset,
  [2666] = 3,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_fieldGroupByList_repeat1,
    ACTIONS(343), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_having,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2682] = 2,
    ACTIONS(347), 1,
      sym_operator_or,
    ACTIONS(345), 8,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_not,
      aux_sym_offset_token1,
  [2696] = 1,
    ACTIONS(349), 8,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_where,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2707] = 7,
    ACTIONS(143), 1,
      sym_keyword_orderby,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(108), 1,
      sym_order_by,
    STATE(142), 1,
      sym_limit,
    STATE(195), 1,
      sym_offset,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      sym_keyword_select,
  [2730] = 1,
    ACTIONS(323), 8,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_having,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_offset_token1,
  [2741] = 7,
    ACTIONS(143), 1,
      sym_keyword_orderby,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(112), 1,
      sym_order_by,
    STATE(148), 1,
      sym_limit,
    STATE(204), 1,
      sym_offset,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      sym_keyword_select,
  [2764] = 3,
    ACTIONS(353), 1,
      aux_sym_filterScope_token3,
    STATE(97), 1,
      sym_filterScope,
    ACTIONS(351), 6,
      aux_sym_filterScope_token1,
      aux_sym_filterScope_token2,
      aux_sym_filterScope_token4,
      aux_sym_filterScope_token5,
      aux_sym_filterScope_token6,
      aux_sym_filterScope_token7,
  [2779] = 1,
    ACTIONS(355), 8,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_where,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2790] = 3,
    ACTIONS(359), 1,
      sym_keyword_having,
    STATE(116), 1,
      sym_having,
    ACTIONS(357), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2805] = 7,
    ACTIONS(143), 1,
      sym_keyword_orderby,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(110), 1,
      sym_order_by,
    STATE(143), 1,
      sym_limit,
    STATE(198), 1,
      sym_offset,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      sym_keyword_select,
  [2828] = 5,
    ACTIONS(363), 1,
      sym_identifier,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      sym_alias,
    STATE(122), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(365), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [2847] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_fieldOrderByList_repeat1,
    ACTIONS(341), 6,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [2862] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_fieldOrderByList_repeat1,
    ACTIONS(332), 6,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [2877] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_fieldOrderByList_repeat1,
    ACTIONS(321), 6,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_orderDirection_token1,
      aux_sym_orderDirection_token2,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [2892] = 7,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(159), 1,
      sym_keyword_orderby,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_order_by,
    STATE(142), 1,
      sym_limit,
    STATE(195), 1,
      sym_offset,
  [2914] = 3,
    ACTIONS(311), 1,
      aux_sym_nullHandling_token1,
    STATE(146), 1,
      sym_nullHandling,
    ACTIONS(374), 5,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2928] = 1,
    ACTIONS(376), 7,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_group_by,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [2938] = 5,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(142), 1,
      sym_limit,
    STATE(195), 1,
      sym_offset,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [2956] = 5,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(148), 1,
      sym_limit,
    STATE(204), 1,
      sym_offset,
    ACTIONS(283), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [2974] = 7,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(159), 1,
      sym_keyword_orderby,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_order_by,
    STATE(143), 1,
      sym_limit,
    STATE(198), 1,
      sym_offset,
  [2996] = 5,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(145), 1,
      sym_limit,
    STATE(194), 1,
      sym_offset,
    ACTIONS(378), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3014] = 4,
    ACTIONS(363), 1,
      sym_identifier,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      sym_alias,
    ACTIONS(380), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [3030] = 5,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(143), 1,
      sym_limit,
    STATE(198), 1,
      sym_offset,
    ACTIONS(361), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3048] = 7,
    ACTIONS(145), 1,
      sym_keyword_limit,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    ACTIONS(159), 1,
      sym_keyword_orderby,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_order_by,
    STATE(148), 1,
      sym_limit,
    STATE(204), 1,
      sym_offset,
  [3070] = 5,
    ACTIONS(384), 1,
      anon_sym_SQUOTE,
    ACTIONS(386), 1,
      aux_sym_string_literal_token1,
    ACTIONS(389), 1,
      anon_sym_BSLASH,
    STATE(27), 1,
      sym_string_escape_character,
    STATE(114), 2,
      sym__string_escape_sequence,
      aux_sym_string_literal_repeat1,
  [3087] = 3,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(382), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [3100] = 1,
    ACTIONS(395), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [3109] = 2,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(255), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      sym_identifier,
  [3120] = 1,
    ACTIONS(397), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_nullHandling_token1,
      aux_sym_offset_token1,
  [3129] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(399), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [3142] = 5,
    ACTIONS(401), 1,
      anon_sym_SQUOTE,
    ACTIONS(403), 1,
      aux_sym_string_literal_token1,
    ACTIONS(405), 1,
      anon_sym_BSLASH,
    STATE(27), 1,
      sym_string_escape_character,
    STATE(114), 2,
      sym__string_escape_sequence,
      aux_sym_string_literal_repeat1,
  [3159] = 1,
    ACTIONS(407), 6,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_orderby,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [3168] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(399), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [3181] = 4,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_logical_operator,
    STATE(135), 1,
      aux_sym_fieldExpressionGroup_repeat1,
    ACTIONS(165), 3,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3196] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(411), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [3209] = 2,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      sym_identifier,
  [3220] = 2,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(123), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      sym_identifier,
  [3231] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(411), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [3244] = 2,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      sym_identifier,
  [3255] = 5,
    ACTIONS(403), 1,
      aux_sym_string_literal_token1,
    ACTIONS(405), 1,
      anon_sym_BSLASH,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym_string_escape_character,
    STATE(114), 2,
      sym__string_escape_sequence,
      aux_sym_string_literal_repeat1,
  [3272] = 4,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_logical_operator,
    STATE(123), 1,
      aux_sym_fieldExpressionGroup_repeat1,
    ACTIONS(165), 3,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3287] = 5,
    ACTIONS(405), 1,
      anon_sym_BSLASH,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      aux_sym_string_literal_token1,
    STATE(27), 1,
      sym_string_escape_character,
    STATE(129), 2,
      sym__string_escape_sequence,
      aux_sym_string_literal_repeat1,
  [3304] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(421), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [3317] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_fieldList_repeat1,
    ACTIONS(423), 4,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
  [3330] = 2,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      sym_identifier,
  [3341] = 4,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_logical_operator,
    STATE(135), 1,
      aux_sym_fieldExpressionGroup_repeat1,
    ACTIONS(427), 3,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3356] = 2,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      sym_identifier,
  [3367] = 5,
    ACTIONS(405), 1,
      anon_sym_BSLASH,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      aux_sym_string_literal_token1,
    STATE(27), 1,
      sym_string_escape_character,
    STATE(120), 2,
      sym__string_escape_sequence,
      aux_sym_string_literal_repeat1,
  [3384] = 1,
    ACTIONS(434), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      anon_sym_COMMA,
  [3392] = 1,
    ACTIONS(382), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      anon_sym_COMMA,
  [3400] = 1,
    ACTIONS(436), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      anon_sym_COMMA,
  [3408] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(195), 1,
      sym_offset,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3420] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(204), 1,
      sym_offset,
    ACTIONS(283), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3432] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(194), 1,
      sym_offset,
    ACTIONS(378), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3444] = 1,
    ACTIONS(438), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      anon_sym_COMMA,
  [3452] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(210), 1,
      sym_offset,
    ACTIONS(440), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3464] = 1,
    ACTIONS(442), 5,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [3472] = 1,
    ACTIONS(444), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      anon_sym_COMMA,
  [3480] = 3,
    ACTIONS(147), 1,
      aux_sym_offset_token1,
    STATE(198), 1,
      sym_offset,
    ACTIONS(361), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3492] = 1,
    ACTIONS(374), 5,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [3500] = 1,
    ACTIONS(446), 5,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
      sym_keyword_from,
      anon_sym_COMMA,
  [3508] = 1,
    ACTIONS(448), 5,
      ts_builtin_sym_end,
      sym_keyword_select,
      sym_keyword_limit,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [3516] = 1,
    ACTIONS(425), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3523] = 1,
    ACTIONS(217), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3530] = 3,
    ACTIONS(3), 1,
      sym_keyword_select,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    STATE(159), 2,
      sym_query,
      aux_sym_source_file_repeat1,
  [3541] = 4,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(212), 1,
      aux_sym_fieldName_repeat1,
    STATE(218), 1,
      sym_typeofField,
    STATE(231), 1,
      sym_fieldName,
  [3554] = 4,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(78), 1,
      sym_fieldOrderByList,
    STATE(102), 1,
      sym_fieldName,
    STATE(212), 1,
      aux_sym_fieldName_repeat1,
  [3567] = 4,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(217), 1,
      aux_sym_fieldName_repeat1,
    STATE(222), 1,
      sym_sObject,
    STATE(241), 1,
      sym_whenObjectType,
  [3580] = 4,
    ACTIONS(456), 1,
      sym_keyword_when,
    ACTIONS(458), 1,
      sym_keyword_else,
    ACTIONS(460), 1,
      sym_keyword_end,
    STATE(188), 1,
      aux_sym_typeof_repeat1,
  [3593] = 3,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(464), 1,
      sym_keyword_select,
    STATE(159), 2,
      sym_query,
      aux_sym_source_file_repeat1,
  [3604] = 4,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_fieldName_repeat1,
    STATE(224), 1,
      sym_fieldName,
  [3617] = 4,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_fieldName_repeat1,
    STATE(233), 1,
      sym_fieldName,
  [3630] = 1,
    ACTIONS(471), 4,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [3637] = 1,
    ACTIONS(473), 4,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
      aux_sym_offset_token1,
  [3644] = 4,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_fieldName_repeat1,
    STATE(238), 1,
      sym_fieldName,
  [3657] = 4,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_fieldName_repeat1,
    STATE(264), 1,
      sym_fieldName,
  [3670] = 4,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_fieldName_repeat1,
    STATE(263), 1,
      sym_fieldName,
  [3683] = 1,
    ACTIONS(227), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3690] = 1,
    ACTIONS(257), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3697] = 4,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_fieldName_repeat1,
    STATE(262), 1,
      sym_fieldName,
  [3710] = 1,
    ACTIONS(299), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3717] = 1,
    ACTIONS(303), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3724] = 1,
    ACTIONS(291), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3731] = 1,
    ACTIONS(241), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3738] = 1,
    ACTIONS(237), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3745] = 1,
    ACTIONS(233), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3752] = 1,
    ACTIONS(261), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3759] = 1,
    ACTIONS(185), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3766] = 1,
    ACTIONS(189), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3773] = 1,
    ACTIONS(193), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3780] = 1,
    ACTIONS(197), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3787] = 1,
    ACTIONS(201), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3794] = 1,
    ACTIONS(205), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3801] = 1,
    ACTIONS(209), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3808] = 1,
    ACTIONS(249), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3815] = 1,
    ACTIONS(213), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3822] = 1,
    ACTIONS(221), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3829] = 4,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(78), 1,
      sym_fieldOrderByList,
    STATE(85), 1,
      sym_fieldName,
    STATE(219), 1,
      aux_sym_fieldName_repeat1,
  [3842] = 3,
    ACTIONS(485), 1,
      sym_keyword_when,
    STATE(188), 1,
      aux_sym_typeof_repeat1,
    ACTIONS(488), 2,
      sym_keyword_else,
      sym_keyword_end,
  [3853] = 1,
    ACTIONS(179), 4,
      anon_sym_RPAREN,
      sym_operator_and,
      sym_operator_or,
      sym_operator_not,
  [3860] = 1,
    ACTIONS(490), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3866] = 3,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(37), 1,
      sym_sObject,
    STATE(217), 1,
      aux_sym_fieldName_repeat1,
  [3876] = 3,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_fieldExpression_repeat1,
  [3886] = 3,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(30), 1,
      sym_sObject,
    STATE(217), 1,
      aux_sym_fieldName_repeat1,
  [3896] = 1,
    ACTIONS(440), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3902] = 1,
    ACTIONS(283), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3908] = 3,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym_fieldExpression_repeat1,
  [3918] = 3,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym_fieldExpression_repeat1,
  [3928] = 1,
    ACTIONS(378), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3934] = 1,
    ACTIONS(500), 3,
      anon_sym_SQUOTE,
      aux_sym_string_literal_token1,
      anon_sym_BSLASH,
  [3940] = 1,
    ACTIONS(502), 3,
      anon_sym_SQUOTE,
      aux_sym_string_literal_token1,
      anon_sym_BSLASH,
  [3946] = 1,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3952] = 3,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(81), 1,
      sym_fieldName,
    STATE(212), 1,
      aux_sym_fieldName_repeat1,
  [3962] = 3,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(81), 1,
      sym_fieldName,
    STATE(219), 1,
      aux_sym_fieldName_repeat1,
  [3972] = 1,
    ACTIONS(361), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3978] = 3,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      aux_sym_fieldExpression_repeat1,
  [3988] = 1,
    ACTIONS(506), 3,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
  [3994] = 1,
    ACTIONS(508), 3,
      sym_keyword_when,
      sym_keyword_else,
      sym_keyword_end,
  [4000] = 3,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_fieldExpression_repeat1,
  [4010] = 3,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym_fieldExpression_repeat1,
  [4020] = 1,
    ACTIONS(514), 3,
      ts_builtin_sym_end,
      sym_keyword_select,
      anon_sym_RPAREN,
  [4026] = 3,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_fieldExpression_repeat1,
  [4036] = 2,
    ACTIONS(521), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_fieldName_repeat1,
  [4043] = 1,
    ACTIONS(516), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4048] = 2,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(230), 1,
      sym_query,
  [4055] = 2,
    ACTIONS(5), 1,
      sym_keyword_select,
    STATE(261), 1,
      sym_query,
  [4062] = 2,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_fieldName_repeat1,
  [4069] = 2,
    ACTIONS(526), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_fieldName_repeat1,
  [4076] = 2,
    ACTIONS(456), 1,
      sym_keyword_when,
    STATE(158), 1,
      aux_sym_typeof_repeat1,
  [4083] = 2,
    ACTIONS(528), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_fieldName_repeat1,
  [4090] = 1,
    ACTIONS(530), 2,
      aux_sym_nullHandling_token2,
      aux_sym_nullHandling_token3,
  [4095] = 2,
    ACTIONS(532), 1,
      sym_number_literal,
    STATE(162), 1,
      sym_numberOfRowsToReturn,
  [4102] = 1,
    ACTIONS(534), 1,
      sym_keyword_then,
  [4106] = 1,
    ACTIONS(536), 1,
      anon_sym_LPAREN,
  [4110] = 1,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
  [4114] = 1,
    ACTIONS(540), 1,
      anon_sym_COLON,
  [4118] = 1,
    ACTIONS(542), 1,
      anon_sym_COLON,
  [4122] = 1,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
  [4126] = 1,
    ACTIONS(544), 1,
      anon_sym_COLON,
  [4130] = 1,
    ACTIONS(546), 1,
      sym_identifier,
  [4134] = 1,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
  [4138] = 1,
    ACTIONS(550), 1,
      sym_keyword_when,
  [4142] = 1,
    ACTIONS(552), 1,
      anon_sym_COLON,
  [4146] = 1,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [4150] = 1,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
  [4154] = 1,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
  [4158] = 1,
    ACTIONS(558), 1,
      anon_sym_COLON,
  [4162] = 1,
    ACTIONS(560), 1,
      anon_sym_COLON,
  [4166] = 1,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
  [4170] = 1,
    ACTIONS(564), 1,
      sym_keyword_from,
  [4174] = 1,
    ACTIONS(101), 1,
      anon_sym_DOT,
  [4178] = 1,
    ACTIONS(566), 1,
      sym_keyword_then,
  [4182] = 1,
    ACTIONS(568), 1,
      anon_sym_COLON,
  [4186] = 1,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
  [4190] = 1,
    ACTIONS(572), 1,
      anon_sym_LPAREN,
  [4194] = 1,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
  [4198] = 1,
    ACTIONS(574), 1,
      sym_number_literal,
  [4202] = 1,
    ACTIONS(576), 1,
      sym_number_literal,
  [4206] = 1,
    ACTIONS(578), 1,
      sym_number_literal,
  [4210] = 1,
    ACTIONS(580), 1,
      sym_number_literal,
  [4214] = 1,
    ACTIONS(582), 1,
      sym_number_literal,
  [4218] = 1,
    ACTIONS(584), 1,
      sym_number_literal,
  [4222] = 1,
    ACTIONS(586), 1,
      sym_number_literal,
  [4226] = 1,
    ACTIONS(588), 1,
      sym_number_literal,
  [4230] = 1,
    ACTIONS(590), 1,
      sym_number_literal,
  [4234] = 1,
    ACTIONS(592), 1,
      sym_number_literal,
  [4238] = 1,
    ACTIONS(594), 1,
      sym_number_literal,
  [4242] = 1,
    ACTIONS(596), 1,
      sym_number_literal,
  [4246] = 1,
    ACTIONS(598), 1,
      sym_number_literal,
  [4250] = 1,
    ACTIONS(600), 1,
      sym_number_literal,
  [4254] = 1,
    ACTIONS(602), 1,
      sym_number_literal,
  [4258] = 1,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
  [4262] = 1,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
  [4266] = 1,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
  [4270] = 1,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
  [4274] = 1,
    ACTIONS(612), 1,
      anon_sym_COLON,
  [4278] = 1,
    ACTIONS(614), 1,
      anon_sym_LPAREN,
  [4282] = 1,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
  [4286] = 1,
    ACTIONS(618), 1,
      sym_keyword_end,
  [4290] = 1,
    ACTIONS(620), 1,
      sym_number_literal,
  [4294] = 1,
    ACTIONS(622), 1,
      sym_number_literal,
  [4298] = 1,
    ACTIONS(624), 1,
      sym_number_literal,
  [4302] = 1,
    ACTIONS(626), 1,
      sym_number_literal,
  [4306] = 1,
    ACTIONS(628), 1,
      sym_number_literal,
  [4310] = 1,
    ACTIONS(630), 1,
      sym_number_literal,
  [4314] = 1,
    ACTIONS(632), 1,
      sym_number_literal,
  [4318] = 1,
    ACTIONS(634), 1,
      sym_number_literal,
  [4322] = 1,
    ACTIONS(636), 1,
      sym_number_literal,
  [4326] = 1,
    ACTIONS(638), 1,
      sym_number_literal,
  [4330] = 1,
    ACTIONS(640), 1,
      sym_number_literal,
  [4334] = 1,
    ACTIONS(642), 1,
      sym_number_literal,
  [4338] = 1,
    ACTIONS(644), 1,
      sym_number_literal,
  [4342] = 1,
    ACTIONS(646), 1,
      sym_number_literal,
  [4346] = 1,
    ACTIONS(648), 1,
      sym_keyword_end,
  [4350] = 1,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
  [4354] = 1,
    ACTIONS(650), 1,
      anon_sym_COLON,
  [4358] = 1,
    ACTIONS(652), 1,
      anon_sym_COLON,
  [4362] = 1,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
  [4366] = 1,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
  [4370] = 1,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
  [4374] = 1,
    ACTIONS(660), 1,
      anon_sym_COLON,
  [4378] = 1,
    ACTIONS(662), 1,
      anon_sym_COLON,
  [4382] = 1,
    ACTIONS(664), 1,
      anon_sym_COLON,
  [4386] = 1,
    ACTIONS(666), 1,
      anon_sym_COLON,
  [4390] = 1,
    ACTIONS(668), 1,
      anon_sym_COLON,
  [4394] = 1,
    ACTIONS(670), 1,
      anon_sym_COLON,
  [4398] = 1,
    ACTIONS(672), 1,
      anon_sym_COLON,
  [4402] = 1,
    ACTIONS(674), 1,
      anon_sym_COLON,
  [4406] = 1,
    ACTIONS(676), 1,
      anon_sym_COLON,
  [4410] = 1,
    ACTIONS(678), 1,
      anon_sym_COLON,
  [4414] = 1,
    ACTIONS(680), 1,
      anon_sym_COLON,
  [4418] = 1,
    ACTIONS(682), 1,
      anon_sym_COLON,
  [4422] = 1,
    ACTIONS(684), 1,
      anon_sym_COLON,
  [4426] = 1,
    ACTIONS(686), 1,
      anon_sym_COLON,
  [4430] = 1,
    ACTIONS(688), 1,
      anon_sym_COLON,
  [4434] = 1,
    ACTIONS(690), 1,
      anon_sym_COLON,
  [4438] = 1,
    ACTIONS(692), 1,
      anon_sym_COLON,
  [4442] = 1,
    ACTIONS(694), 1,
      sym_keyword_from,
  [4446] = 1,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
  [4450] = 1,
    ACTIONS(698), 1,
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
  [SMALL_STATE(10)] = 782,
  [SMALL_STATE(11)] = 829,
  [SMALL_STATE(12)] = 883,
  [SMALL_STATE(13)] = 937,
  [SMALL_STATE(14)] = 988,
  [SMALL_STATE(15)] = 1039,
  [SMALL_STATE(16)] = 1087,
  [SMALL_STATE(17)] = 1117,
  [SMALL_STATE(18)] = 1147,
  [SMALL_STATE(19)] = 1187,
  [SMALL_STATE(20)] = 1214,
  [SMALL_STATE(21)] = 1251,
  [SMALL_STATE(22)] = 1284,
  [SMALL_STATE(23)] = 1317,
  [SMALL_STATE(24)] = 1341,
  [SMALL_STATE(25)] = 1365,
  [SMALL_STATE(26)] = 1394,
  [SMALL_STATE(27)] = 1420,
  [SMALL_STATE(28)] = 1441,
  [SMALL_STATE(29)] = 1459,
  [SMALL_STATE(30)] = 1488,
  [SMALL_STATE(31)] = 1529,
  [SMALL_STATE(32)] = 1557,
  [SMALL_STATE(33)] = 1585,
  [SMALL_STATE(34)] = 1605,
  [SMALL_STATE(35)] = 1633,
  [SMALL_STATE(36)] = 1659,
  [SMALL_STATE(37)] = 1679,
  [SMALL_STATE(38)] = 1719,
  [SMALL_STATE(39)] = 1754,
  [SMALL_STATE(40)] = 1777,
  [SMALL_STATE(41)] = 1800,
  [SMALL_STATE(42)] = 1823,
  [SMALL_STATE(43)] = 1839,
  [SMALL_STATE(44)] = 1861,
  [SMALL_STATE(45)] = 1877,
  [SMALL_STATE(46)] = 1893,
  [SMALL_STATE(47)] = 1909,
  [SMALL_STATE(48)] = 1925,
  [SMALL_STATE(49)] = 1941,
  [SMALL_STATE(50)] = 1957,
  [SMALL_STATE(51)] = 1973,
  [SMALL_STATE(52)] = 1989,
  [SMALL_STATE(53)] = 2005,
  [SMALL_STATE(54)] = 2021,
  [SMALL_STATE(55)] = 2043,
  [SMALL_STATE(56)] = 2059,
  [SMALL_STATE(57)] = 2075,
  [SMALL_STATE(58)] = 2109,
  [SMALL_STATE(59)] = 2125,
  [SMALL_STATE(60)] = 2141,
  [SMALL_STATE(61)] = 2157,
  [SMALL_STATE(62)] = 2173,
  [SMALL_STATE(63)] = 2189,
  [SMALL_STATE(64)] = 2205,
  [SMALL_STATE(65)] = 2221,
  [SMALL_STATE(66)] = 2237,
  [SMALL_STATE(67)] = 2253,
  [SMALL_STATE(68)] = 2269,
  [SMALL_STATE(69)] = 2291,
  [SMALL_STATE(70)] = 2307,
  [SMALL_STATE(71)] = 2336,
  [SMALL_STATE(72)] = 2351,
  [SMALL_STATE(73)] = 2366,
  [SMALL_STATE(74)] = 2381,
  [SMALL_STATE(75)] = 2410,
  [SMALL_STATE(76)] = 2425,
  [SMALL_STATE(77)] = 2440,
  [SMALL_STATE(78)] = 2455,
  [SMALL_STATE(79)] = 2476,
  [SMALL_STATE(80)] = 2490,
  [SMALL_STATE(81)] = 2504,
  [SMALL_STATE(82)] = 2516,
  [SMALL_STATE(83)] = 2532,
  [SMALL_STATE(84)] = 2548,
  [SMALL_STATE(85)] = 2576,
  [SMALL_STATE(86)] = 2592,
  [SMALL_STATE(87)] = 2608,
  [SMALL_STATE(88)] = 2622,
  [SMALL_STATE(89)] = 2638,
  [SMALL_STATE(90)] = 2666,
  [SMALL_STATE(91)] = 2682,
  [SMALL_STATE(92)] = 2696,
  [SMALL_STATE(93)] = 2707,
  [SMALL_STATE(94)] = 2730,
  [SMALL_STATE(95)] = 2741,
  [SMALL_STATE(96)] = 2764,
  [SMALL_STATE(97)] = 2779,
  [SMALL_STATE(98)] = 2790,
  [SMALL_STATE(99)] = 2805,
  [SMALL_STATE(100)] = 2828,
  [SMALL_STATE(101)] = 2847,
  [SMALL_STATE(102)] = 2862,
  [SMALL_STATE(103)] = 2877,
  [SMALL_STATE(104)] = 2892,
  [SMALL_STATE(105)] = 2914,
  [SMALL_STATE(106)] = 2928,
  [SMALL_STATE(107)] = 2938,
  [SMALL_STATE(108)] = 2956,
  [SMALL_STATE(109)] = 2974,
  [SMALL_STATE(110)] = 2996,
  [SMALL_STATE(111)] = 3014,
  [SMALL_STATE(112)] = 3030,
  [SMALL_STATE(113)] = 3048,
  [SMALL_STATE(114)] = 3070,
  [SMALL_STATE(115)] = 3087,
  [SMALL_STATE(116)] = 3100,
  [SMALL_STATE(117)] = 3109,
  [SMALL_STATE(118)] = 3120,
  [SMALL_STATE(119)] = 3129,
  [SMALL_STATE(120)] = 3142,
  [SMALL_STATE(121)] = 3159,
  [SMALL_STATE(122)] = 3168,
  [SMALL_STATE(123)] = 3181,
  [SMALL_STATE(124)] = 3196,
  [SMALL_STATE(125)] = 3209,
  [SMALL_STATE(126)] = 3220,
  [SMALL_STATE(127)] = 3231,
  [SMALL_STATE(128)] = 3244,
  [SMALL_STATE(129)] = 3255,
  [SMALL_STATE(130)] = 3272,
  [SMALL_STATE(131)] = 3287,
  [SMALL_STATE(132)] = 3304,
  [SMALL_STATE(133)] = 3317,
  [SMALL_STATE(134)] = 3330,
  [SMALL_STATE(135)] = 3341,
  [SMALL_STATE(136)] = 3356,
  [SMALL_STATE(137)] = 3367,
  [SMALL_STATE(138)] = 3384,
  [SMALL_STATE(139)] = 3392,
  [SMALL_STATE(140)] = 3400,
  [SMALL_STATE(141)] = 3408,
  [SMALL_STATE(142)] = 3420,
  [SMALL_STATE(143)] = 3432,
  [SMALL_STATE(144)] = 3444,
  [SMALL_STATE(145)] = 3452,
  [SMALL_STATE(146)] = 3464,
  [SMALL_STATE(147)] = 3472,
  [SMALL_STATE(148)] = 3480,
  [SMALL_STATE(149)] = 3492,
  [SMALL_STATE(150)] = 3500,
  [SMALL_STATE(151)] = 3508,
  [SMALL_STATE(152)] = 3516,
  [SMALL_STATE(153)] = 3523,
  [SMALL_STATE(154)] = 3530,
  [SMALL_STATE(155)] = 3541,
  [SMALL_STATE(156)] = 3554,
  [SMALL_STATE(157)] = 3567,
  [SMALL_STATE(158)] = 3580,
  [SMALL_STATE(159)] = 3593,
  [SMALL_STATE(160)] = 3604,
  [SMALL_STATE(161)] = 3617,
  [SMALL_STATE(162)] = 3630,
  [SMALL_STATE(163)] = 3637,
  [SMALL_STATE(164)] = 3644,
  [SMALL_STATE(165)] = 3657,
  [SMALL_STATE(166)] = 3670,
  [SMALL_STATE(167)] = 3683,
  [SMALL_STATE(168)] = 3690,
  [SMALL_STATE(169)] = 3697,
  [SMALL_STATE(170)] = 3710,
  [SMALL_STATE(171)] = 3717,
  [SMALL_STATE(172)] = 3724,
  [SMALL_STATE(173)] = 3731,
  [SMALL_STATE(174)] = 3738,
  [SMALL_STATE(175)] = 3745,
  [SMALL_STATE(176)] = 3752,
  [SMALL_STATE(177)] = 3759,
  [SMALL_STATE(178)] = 3766,
  [SMALL_STATE(179)] = 3773,
  [SMALL_STATE(180)] = 3780,
  [SMALL_STATE(181)] = 3787,
  [SMALL_STATE(182)] = 3794,
  [SMALL_STATE(183)] = 3801,
  [SMALL_STATE(184)] = 3808,
  [SMALL_STATE(185)] = 3815,
  [SMALL_STATE(186)] = 3822,
  [SMALL_STATE(187)] = 3829,
  [SMALL_STATE(188)] = 3842,
  [SMALL_STATE(189)] = 3853,
  [SMALL_STATE(190)] = 3860,
  [SMALL_STATE(191)] = 3866,
  [SMALL_STATE(192)] = 3876,
  [SMALL_STATE(193)] = 3886,
  [SMALL_STATE(194)] = 3896,
  [SMALL_STATE(195)] = 3902,
  [SMALL_STATE(196)] = 3908,
  [SMALL_STATE(197)] = 3918,
  [SMALL_STATE(198)] = 3928,
  [SMALL_STATE(199)] = 3934,
  [SMALL_STATE(200)] = 3940,
  [SMALL_STATE(201)] = 3946,
  [SMALL_STATE(202)] = 3952,
  [SMALL_STATE(203)] = 3962,
  [SMALL_STATE(204)] = 3972,
  [SMALL_STATE(205)] = 3978,
  [SMALL_STATE(206)] = 3988,
  [SMALL_STATE(207)] = 3994,
  [SMALL_STATE(208)] = 4000,
  [SMALL_STATE(209)] = 4010,
  [SMALL_STATE(210)] = 4020,
  [SMALL_STATE(211)] = 4026,
  [SMALL_STATE(212)] = 4036,
  [SMALL_STATE(213)] = 4043,
  [SMALL_STATE(214)] = 4048,
  [SMALL_STATE(215)] = 4055,
  [SMALL_STATE(216)] = 4062,
  [SMALL_STATE(217)] = 4069,
  [SMALL_STATE(218)] = 4076,
  [SMALL_STATE(219)] = 4083,
  [SMALL_STATE(220)] = 4090,
  [SMALL_STATE(221)] = 4095,
  [SMALL_STATE(222)] = 4102,
  [SMALL_STATE(223)] = 4106,
  [SMALL_STATE(224)] = 4110,
  [SMALL_STATE(225)] = 4114,
  [SMALL_STATE(226)] = 4118,
  [SMALL_STATE(227)] = 4122,
  [SMALL_STATE(228)] = 4126,
  [SMALL_STATE(229)] = 4130,
  [SMALL_STATE(230)] = 4134,
  [SMALL_STATE(231)] = 4138,
  [SMALL_STATE(232)] = 4142,
  [SMALL_STATE(233)] = 4146,
  [SMALL_STATE(234)] = 4150,
  [SMALL_STATE(235)] = 4154,
  [SMALL_STATE(236)] = 4158,
  [SMALL_STATE(237)] = 4162,
  [SMALL_STATE(238)] = 4166,
  [SMALL_STATE(239)] = 4170,
  [SMALL_STATE(240)] = 4174,
  [SMALL_STATE(241)] = 4178,
  [SMALL_STATE(242)] = 4182,
  [SMALL_STATE(243)] = 4186,
  [SMALL_STATE(244)] = 4190,
  [SMALL_STATE(245)] = 4194,
  [SMALL_STATE(246)] = 4198,
  [SMALL_STATE(247)] = 4202,
  [SMALL_STATE(248)] = 4206,
  [SMALL_STATE(249)] = 4210,
  [SMALL_STATE(250)] = 4214,
  [SMALL_STATE(251)] = 4218,
  [SMALL_STATE(252)] = 4222,
  [SMALL_STATE(253)] = 4226,
  [SMALL_STATE(254)] = 4230,
  [SMALL_STATE(255)] = 4234,
  [SMALL_STATE(256)] = 4238,
  [SMALL_STATE(257)] = 4242,
  [SMALL_STATE(258)] = 4246,
  [SMALL_STATE(259)] = 4250,
  [SMALL_STATE(260)] = 4254,
  [SMALL_STATE(261)] = 4258,
  [SMALL_STATE(262)] = 4262,
  [SMALL_STATE(263)] = 4266,
  [SMALL_STATE(264)] = 4270,
  [SMALL_STATE(265)] = 4274,
  [SMALL_STATE(266)] = 4278,
  [SMALL_STATE(267)] = 4282,
  [SMALL_STATE(268)] = 4286,
  [SMALL_STATE(269)] = 4290,
  [SMALL_STATE(270)] = 4294,
  [SMALL_STATE(271)] = 4298,
  [SMALL_STATE(272)] = 4302,
  [SMALL_STATE(273)] = 4306,
  [SMALL_STATE(274)] = 4310,
  [SMALL_STATE(275)] = 4314,
  [SMALL_STATE(276)] = 4318,
  [SMALL_STATE(277)] = 4322,
  [SMALL_STATE(278)] = 4326,
  [SMALL_STATE(279)] = 4330,
  [SMALL_STATE(280)] = 4334,
  [SMALL_STATE(281)] = 4338,
  [SMALL_STATE(282)] = 4342,
  [SMALL_STATE(283)] = 4346,
  [SMALL_STATE(284)] = 4350,
  [SMALL_STATE(285)] = 4354,
  [SMALL_STATE(286)] = 4358,
  [SMALL_STATE(287)] = 4362,
  [SMALL_STATE(288)] = 4366,
  [SMALL_STATE(289)] = 4370,
  [SMALL_STATE(290)] = 4374,
  [SMALL_STATE(291)] = 4378,
  [SMALL_STATE(292)] = 4382,
  [SMALL_STATE(293)] = 4386,
  [SMALL_STATE(294)] = 4390,
  [SMALL_STATE(295)] = 4394,
  [SMALL_STATE(296)] = 4398,
  [SMALL_STATE(297)] = 4402,
  [SMALL_STATE(298)] = 4406,
  [SMALL_STATE(299)] = 4410,
  [SMALL_STATE(300)] = 4414,
  [SMALL_STATE(301)] = 4418,
  [SMALL_STATE(302)] = 4422,
  [SMALL_STATE(303)] = 4426,
  [SMALL_STATE(304)] = 4430,
  [SMALL_STATE(305)] = 4434,
  [SMALL_STATE(306)] = 4438,
  [SMALL_STATE(307)] = 4442,
  [SMALL_STATE(308)] = 4446,
  [SMALL_STATE(309)] = 4450,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparisonListOperator, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparisonOperator, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparisonOperator, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 2, .production_id = 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldName, 2, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldName, 1, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_operator, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_operator, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateFunction, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateFunction, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateFunction, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateFunction, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_escape_character, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionExpression, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditionExpression_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditionExpression_repeat1, 2), SHIFT_REPEAT(19),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditionExpression_repeat1, 2), SHIFT_REPEAT(19),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionExpression, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_next_n_days, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_next_n_days, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_havingConditionExpression, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_next_n_fiscal_quarters, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_next_n_fiscal_quarters, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_last_n_years, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_last_n_years, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_next_n_years, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_next_n_years, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_last_n_quarters, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_last_n_quarters, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_next_n_quarters, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_next_n_quarters, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_last_n_months, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_last_n_months, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_next_n_months, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_next_n_months, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_last_n_weeks, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_last_n_weeks, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_next_n_weeks, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_next_n_weeks, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_last_n_days, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_last_n_days, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_havingConditionExpression, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime_operator, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime_operator, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sObject, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_next_n_fiscal_years, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_next_n_fiscal_years, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_last_n_fiscal_years, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_last_n_fiscal_years, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toLabel, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_toLabel, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregateFunction, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregateFunction, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_last_n_fiscal_quarters, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_last_n_fiscal_quarters, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toLabel, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_toLabel, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregateFunction, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregateFunction, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_havingConditionExpression_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_havingConditionExpression_repeat1, 2), SHIFT_REPEAT(19),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_havingConditionExpression_repeat1, 2), SHIFT_REPEAT(19),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sObject, 2, .production_id = 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditionExpression_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldExpressionGroup, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldExpressionGroup, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldExpression, 5),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldExpression, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldExpressionGroup, 4),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldExpressionGroup, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldExpression, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldExpression, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldExpression, 6),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldExpression, 6),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldHavingExpression, 6),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldHavingExpression, 6),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldHavingExpression, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldHavingExpression, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldOrderByList_repeat1, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldGroupByList_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldGroupByList_repeat1, 2), SHIFT_REPEAT(26),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldGroupByList, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldOrderByList, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldOrderByList_repeat1, 2), SHIFT_REPEAT(203),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_havingConditionExpression_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldOrderByList, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldGroupByList, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldHavingExpression, 5),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldHavingExpression, 5),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filterScope, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usingScope, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 7),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldList, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldOrderByList_repeat1, 2), SHIFT_REPEAT(202),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 8),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fieldList_repeat1, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldList_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(114),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(28),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldList_repeat1, 2), SHIFT_REPEAT(15),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_orderDirection, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldList, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldList, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldList, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldList, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldExpressionGroup_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldExpressionGroup_repeat1, 2), SHIFT_REPEAT(19),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeof, 4),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeof, 6),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldList_repeat1, 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 9),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldList_repeat1, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1, .production_id = 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nullHandling, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberOfRowsToReturn, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typeof_repeat1, 2), SHIFT_REPEAT(157),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typeof_repeat1, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_character, 1),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_escape_sequence, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typeof_repeat1, 4),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whenFieldList, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 10),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldExpression_repeat1, 2),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldExpression_repeat1, 2), SHIFT_REPEAT(6),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldName_repeat1, 2, .production_id = 4), SHIFT_REPEAT(240),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whenObjectType, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldName_repeat1, 2, .production_id = 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeofField, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [570] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elseFieldList, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_soql(void) {
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
