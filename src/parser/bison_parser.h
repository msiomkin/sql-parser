/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 39 "bison_parser.y" /* yacc.c:1909  */

// %code requires block

#include "../SQLParserResult.h"
#include "../sql/statements.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION                        \
  yylloc->first_line = yylloc->last_line;     \
  yylloc->first_column = yylloc->last_column; \
  for (int i = 0; yytext[i] != '\0'; i++) {   \
    yylloc->total_column++;                   \
    yylloc->string_length++;                  \
    if (yytext[i] == '\n') {                  \
      yylloc->last_line++;                    \
      yylloc->last_column = 0;                \
    } else {                                  \
      yylloc->last_column++;                  \
    }                                         \
  }

#line 75 "bison_parser.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_IDENTIFIER = 258,
    SQL_STRING = 259,
    SQL_FLOATVAL = 260,
    SQL_INTVAL = 261,
    SQL_DEALLOCATE = 262,
    SQL_PARAMETERS = 263,
    SQL_INTERSECT = 264,
    SQL_TEMPORARY = 265,
    SQL_TIMESTAMP = 266,
    SQL_TIMESTAMPTZ = 267,
    SQL_TIMEZONE = 268,
    SQL_DISTINCT = 269,
    SQL_NVARCHAR = 270,
    SQL_RESTRICT = 271,
    SQL_TRUNCATE = 272,
    SQL_ANALYZE = 273,
    SQL_BETWEEN = 274,
    SQL_CASCADE = 275,
    SQL_COLUMNS = 276,
    SQL_CONTROL = 277,
    SQL_DEFAULT = 278,
    SQL_EXECUTE = 279,
    SQL_EXPLAIN = 280,
    SQL_ENCODING = 281,
    SQL_INTEGER = 282,
    SQL_NATURAL = 283,
    SQL_PREPARE = 284,
    SQL_SCHEMAS = 285,
    SQL_CHARACTER_VARYING = 286,
    SQL_REAL = 287,
    SQL_DECIMAL = 288,
    SQL_SMALLINT = 289,
    SQL_BIGINT = 290,
    SQL_SPATIAL = 291,
    SQL_VARCHAR = 292,
    SQL_VIRTUAL = 293,
    SQL_DESCRIBE = 294,
    SQL_BEFORE = 295,
    SQL_COLUMN = 296,
    SQL_CREATE = 297,
    SQL_DELETE = 298,
    SQL_DIRECT = 299,
    SQL_DOUBLE = 300,
    SQL_ESCAPE = 301,
    SQL_EXCEPT = 302,
    SQL_EXISTS = 303,
    SQL_EXTRACT = 304,
    SQL_CAST = 305,
    SQL_FORMAT = 306,
    SQL_GLOBAL = 307,
    SQL_HAVING = 308,
    SQL_IMPORT = 309,
    SQL_INSERT = 310,
    SQL_ISNULL = 311,
    SQL_OFFSET = 312,
    SQL_RENAME = 313,
    SQL_SCHEMA = 314,
    SQL_SELECT = 315,
    SQL_SORTED = 316,
    SQL_TABLES = 317,
    SQL_UNLOAD = 318,
    SQL_UPDATE = 319,
    SQL_VALUES = 320,
    SQL_AFTER = 321,
    SQL_ALTER = 322,
    SQL_CROSS = 323,
    SQL_DELTA = 324,
    SQL_FLOAT = 325,
    SQL_GROUP = 326,
    SQL_INDEX = 327,
    SQL_INNER = 328,
    SQL_LIMIT = 329,
    SQL_LOCAL = 330,
    SQL_MERGE = 331,
    SQL_MINUS = 332,
    SQL_ORDER = 333,
    SQL_OVER = 334,
    SQL_OUTER = 335,
    SQL_RIGHT = 336,
    SQL_TABLE = 337,
    SQL_UNION = 338,
    SQL_USING = 339,
    SQL_WHERE = 340,
    SQL_CALL = 341,
    SQL_CASE = 342,
    SQL_CHAR = 343,
    SQL_COPY = 344,
    SQL_DATE = 345,
    SQL_DATETIME = 346,
    SQL_DESC = 347,
    SQL_DROP = 348,
    SQL_ELSE = 349,
    SQL_FILE = 350,
    SQL_FROM = 351,
    SQL_FULL = 352,
    SQL_HASH = 353,
    SQL_HINT = 354,
    SQL_INTO = 355,
    SQL_JOIN = 356,
    SQL_LEFT = 357,
    SQL_LIKE = 358,
    SQL_LOAD = 359,
    SQL_LONG = 360,
    SQL_NULL = 361,
    SQL_PARTITION = 362,
    SQL_PLAN = 363,
    SQL_SHOW = 364,
    SQL_TEXT = 365,
    SQL_THEN = 366,
    SQL_TIME = 367,
    SQL_TIMETZ = 368,
    SQL_VIEW = 369,
    SQL_WHEN = 370,
    SQL_WITH = 371,
    SQL_ADD = 372,
    SQL_ALL = 373,
    SQL_AND = 374,
    SQL_ASC = 375,
    SQL_END = 376,
    SQL_FOR = 377,
    SQL_INT = 378,
    SQL_NOT = 379,
    SQL_OFF = 380,
    SQL_SET = 381,
    SQL_TOP = 382,
    SQL_AS = 383,
    SQL_BY = 384,
    SQL_IF = 385,
    SQL_IN = 386,
    SQL_IS = 387,
    SQL_OF = 388,
    SQL_ON = 389,
    SQL_OR = 390,
    SQL_TO = 391,
    SQL_NO = 392,
    SQL_ARRAY = 393,
    SQL_CONCAT = 394,
    SQL_ILIKE = 395,
    SQL_SECOND = 396,
    SQL_MINUTE = 397,
    SQL_HOUR = 398,
    SQL_DAY = 399,
    SQL_MONTH = 400,
    SQL_YEAR = 401,
    SQL_SECONDS = 402,
    SQL_MINUTES = 403,
    SQL_HOURS = 404,
    SQL_DAYS = 405,
    SQL_MONTHS = 406,
    SQL_YEARS = 407,
    SQL_INTERVAL = 408,
    SQL_TRUE = 409,
    SQL_FALSE = 410,
    SQL_BOOLEAN = 411,
    SQL_TRANSACTION = 412,
    SQL_BEGIN = 413,
    SQL_COMMIT = 414,
    SQL_ROLLBACK = 415,
    SQL_NOWAIT = 416,
    SQL_SKIP = 417,
    SQL_LOCKED = 418,
    SQL_SHARE = 419,
    SQL_RANGE = 420,
    SQL_ROWS = 421,
    SQL_GROUPS = 422,
    SQL_UNBOUNDED = 423,
    SQL_FOLLOWING = 424,
    SQL_PRECEDING = 425,
    SQL_CURRENT_ROW = 426,
    SQL_UNIQUE = 427,
    SQL_PRIMARY = 428,
    SQL_FOREIGN = 429,
    SQL_KEY = 430,
    SQL_REFERENCES = 431,
    SQL_EQUALS = 432,
    SQL_NOTEQUALS = 433,
    SQL_LESS = 434,
    SQL_GREATER = 435,
    SQL_LESSEQ = 436,
    SQL_GREATEREQ = 437,
    SQL_NOTNULL = 438,
    SQL_UMINUS = 439
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED

union HSQL_STYPE
{
#line 102 "bison_parser.y" /* yacc.c:1909  */

  // clang-format on
  bool bval;
  char* sval;
  double fval;
  int64_t ival;
  uintmax_t uval;

  // statements
  hsql::AlterStatement* alter_stmt;
  hsql::CreateStatement* create_stmt;
  hsql::DeleteStatement* delete_stmt;
  hsql::DropStatement* drop_stmt;
  hsql::ExecuteStatement* exec_stmt;
  hsql::ExportStatement* export_stmt;
  hsql::ImportStatement* import_stmt;
  hsql::InsertStatement* insert_stmt;
  hsql::PrepareStatement* prep_stmt;
  hsql::SelectStatement* select_stmt;
  hsql::ShowStatement* show_stmt;
  hsql::SQLStatement* statement;
  hsql::TransactionStatement* transaction_stmt;
  hsql::UpdateStatement* update_stmt;

  hsql::Alias* alias_t;
  hsql::AlterAction* alter_action_t;
  hsql::ColumnConstraints* column_constraints_t;
  hsql::ColumnDefinition* column_t;
  hsql::ColumnType column_type_t;
  hsql::ConstraintType column_constraint_t;
  hsql::DatetimeField datetime_field;
  hsql::DropColumnAction* drop_action_t;
  hsql::Expr* expr;
  hsql::FrameBound* frame_bound;
  hsql::FrameDescription* frame_description;
  hsql::FrameType frame_type;
  hsql::GroupByDescription* group_t;
  hsql::ImportType import_type_t;
  hsql::JoinType join_type;
  hsql::LimitDescription* limit;
  hsql::LockingClause* locking_t;
  hsql::OrderDescription* order;
  hsql::OrderType order_type;
  hsql::NullOrdering null_ordering_t;
  hsql::ReferencesSpecification* references_spec_t;
  hsql::SetOperation* set_operator_t;
  hsql::TableConstraint* table_constraint_t;
  hsql::TableElement* table_element_t;
  hsql::TableName table_name;
  hsql::TableRef* table;
  hsql::UpdateClause* update_t;
  hsql::WindowDescription* window_description;
  hsql::WithDescription* with_description_t;

  std::vector<char*>* str_vec;
  std::vector<hsql::Expr*>* expr_vec;
  std::vector<hsql::OrderDescription*>* order_vec;
  std::vector<hsql::SQLStatement*>* stmt_vec;
  std::vector<hsql::TableElement*>* table_element_vec;
  std::vector<hsql::TableRef*>* table_vec;
  std::vector<hsql::UpdateClause*>* update_vec;
  std::vector<hsql::WithDescription*>* with_description_vec;
  std::vector<hsql::LockingClause*>* locking_clause_vec;

  std::pair<int64_t, int64_t>* ival_pair;

  hsql::RowLockMode lock_mode_t;
  hsql::RowLockWaitPolicy lock_wait_policy_t;

  hsql::ImportExportOptions* import_export_option_t;
  std::pair<hsql::CsvOptionType, char*>* csv_option_t;

  // clang-format off

#line 347 "bison_parser.h" /* yacc.c:1909  */
};

typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */
