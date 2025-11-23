/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs


/* Copy the first part of user declarations.  */
#line 2 "bison_parser.y" /* yacc.c:339  */


/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

// clang-format on
#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

  using namespace hsql;

  int yyerror(YYLTYPE * llocp, SQLParserResult * result, yyscan_t scanner, const char* msg) {
    result->setIsValid(false);
    result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
    return 0;
  }
  // clang-format off

#line 105 "bison_parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison_parser.h".  */
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
#line 39 "bison_parser.y" /* yacc.c:355  */

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

#line 166 "bison_parser.cpp" /* yacc.c:355  */

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
#line 102 "bison_parser.y" /* yacc.c:355  */

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

#line 438 "bison_parser.cpp" /* yacc.c:355  */
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

/* Copy the second part of user declarations.  */

#line 468 "bison_parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1088

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  202
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  386
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  712

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   439

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   191,     2,     2,
     196,   197,   189,   187,   200,   188,   198,   190,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   199,
     180,   177,   181,   201,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   194,     2,   195,   192,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   178,   179,   182,   183,   184,   185,   186,   193
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   343,   343,   362,   368,   375,   379,   383,   384,   385,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     402,   403,   405,   409,   414,   418,   428,   429,   430,   432,
     432,   438,   444,   446,   450,   462,   468,   485,   500,   502,
     503,   504,   506,   520,   524,   534,   538,   562,   570,   583,
     590,   605,   625,   626,   631,   642,   655,   667,   674,   681,
     690,   691,   693,   697,   702,   703,   705,   713,   714,   715,
     716,   717,   718,   719,   723,   724,   725,   726,   727,   728,
     729,   730,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,   750,   752,   753,   755,   756,   757,   759,   760,   762,
     766,   770,   775,   783,   784,   785,   786,   788,   789,   790,
     792,   800,   806,   812,   818,   824,   825,   832,   838,   840,
     850,   857,   868,   875,   883,   884,   891,   898,   902,   907,
     917,   921,   925,   937,   937,   939,   940,   949,   950,   952,
     966,   978,   983,   987,   991,   996,   997,   999,  1009,  1010,
    1012,  1014,  1015,  1017,  1019,  1020,  1022,  1027,  1029,  1030,
    1032,  1033,  1035,  1039,  1044,  1046,  1047,  1048,  1050,  1051,
    1073,  1074,  1076,  1077,  1078,  1079,  1080,  1081,  1086,  1090,
    1096,  1097,  1099,  1103,  1108,  1108,  1112,  1120,  1121,  1123,
    1132,  1132,  1132,  1132,  1132,  1134,  1135,  1135,  1135,  1135,
    1135,  1135,  1135,  1135,  1136,  1136,  1140,  1140,  1142,  1143,
    1144,  1145,  1146,  1148,  1148,  1149,  1150,  1151,  1152,  1153,
    1154,  1155,  1156,  1157,  1159,  1160,  1162,  1163,  1164,  1165,
    1169,  1170,  1171,  1172,  1174,  1175,  1177,  1178,  1180,  1181,
    1182,  1183,  1184,  1185,  1186,  1190,  1191,  1192,  1193,  1197,
    1198,  1200,  1201,  1206,  1207,  1208,  1212,  1213,  1214,  1216,
    1217,  1218,  1219,  1220,  1222,  1224,  1226,  1227,  1228,  1229,
    1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,  1238,  1240,
    1241,  1242,  1243,  1244,  1245,  1247,  1247,  1249,  1251,  1253,
    1254,  1256,  1257,  1258,  1259,  1261,  1261,  1261,  1261,  1261,
    1261,  1261,  1263,  1265,  1266,  1268,  1269,  1271,  1273,  1275,
    1286,  1287,  1298,  1330,  1339,  1339,  1346,  1346,  1348,  1348,
    1354,  1361,  1368,  1376,  1385,  1389,  1394,  1402,  1408,  1412,
    1417,  1418,  1420,  1420,  1422,  1422,  1424,  1425,  1427,  1427,
    1433,  1434,  1436,  1440,  1445,  1451,  1458,  1459,  1460,  1461,
    1463,  1464,  1465,  1471,  1471,  1473,  1475,  1479,  1484,  1494,
    1501,  1509,  1518,  1519,  1520,  1521,  1522,  1523,  1524,  1525,
    1526,  1527,  1529,  1535,  1535,  1538,  1542
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT", "TEMPORARY",
  "TIMESTAMP", "TIMESTAMPTZ", "TIMEZONE", "DISTINCT", "NVARCHAR",
  "RESTRICT", "TRUNCATE", "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS",
  "CONTROL", "DEFAULT", "EXECUTE", "EXPLAIN", "ENCODING", "INTEGER",
  "NATURAL", "PREPARE", "SCHEMAS", "CHARACTER_VARYING", "REAL", "DECIMAL",
  "SMALLINT", "BIGINT", "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE",
  "BEFORE", "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE",
  "EXCEPT", "EXISTS", "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING",
  "IMPORT", "INSERT", "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT",
  "SORTED", "TABLES", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER",
  "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL",
  "MERGE", "MINUS", "ORDER", "OVER", "OUTER", "RIGHT", "TABLE", "UNION",
  "USING", "WHERE", "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME",
  "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO",
  "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PARTITION", "PLAN",
  "SHOW", "TEXT", "THEN", "TIME", "TIMETZ", "VIEW", "WHEN", "WITH", "ADD",
  "ALL", "AND", "ASC", "END", "FOR", "INT", "NOT", "OFF", "SET", "TOP",
  "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "NO", "ARRAY",
  "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR",
  "SECONDS", "MINUTES", "HOURS", "DAYS", "MONTHS", "YEARS", "INTERVAL",
  "TRUE", "FALSE", "BOOLEAN", "TRANSACTION", "BEGIN", "COMMIT", "ROLLBACK",
  "NOWAIT", "SKIP", "LOCKED", "SHARE", "RANGE", "ROWS", "GROUPS",
  "UNBOUNDED", "FOLLOWING", "PRECEDING", "CURRENT_ROW", "UNIQUE",
  "PRIMARY", "FOREIGN", "KEY", "REFERENCES", "'='", "EQUALS", "NOTEQUALS",
  "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'",
  "'.'", "';'", "','", "'?'", "$accept", "input", "statement_list",
  "statement", "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_import_export_options",
  "import_export_options", "csv_option", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "table_elem_commalist", "table_elem", "column_def", "column_type",
  "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraints", "column_constraint",
  "table_constraint", "references_spec", "drop_statement", "opt_exists",
  "alter_statement", "alter_action", "drop_action", "delete_statement",
  "truncate_statement", "insert_statement", "opt_column_list",
  "update_statement", "update_clause_commalist", "update_clause",
  "select_statement", "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_null_ordering",
  "opt_top", "opt_limit", "expr_list", "opt_extended_literal_list",
  "extended_literal_list", "casted_extended_literal", "extended_literal",
  "expr_alias", "expr", "operand", "scalar_expr", "unary_expr",
  "binary_expr", "logic_expr", "in_expr", "case_expr", "case_list",
  "exists_expr", "comp_expr", "function_expr", "opt_window",
  "opt_partition", "opt_frame_clause", "frame_type", "frame_bound",
  "extract_expr", "cast_expr", "datetime_field", "datetime_field_plural",
  "duration_field", "array_expr", "array_index", "between_expr",
  "column_name", "literal", "string_literal", "bool_literal",
  "num_literal", "int_literal", "null_literal", "date_literal",
  "interval_literal", "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "opt_index_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "opt_locking_clause",
  "opt_locking_clause_list", "locking_clause", "row_lock_mode",
  "opt_row_lock_policy", "opt_with_clause", "with_clause",
  "with_description_list", "with_description", "join_clause",
  "opt_join_type", "join_condition", "opt_semicolon", "ident_commalist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,    61,   432,   433,
      60,    62,   434,   435,   436,   437,   438,    43,    45,    42,
      47,    37,    94,   439,    91,    93,    40,    41,    46,    59,
      44,    63
};
# endif

#define YYPACT_NINF -516

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-516)))

#define YYTABLE_NINF -384

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-384)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     802,    43,   104,   141,   171,   104,   -19,    84,    91,   123,
     104,   152,    21,   217,    35,   258,   136,   136,   136,   274,
     110,  -516,   250,  -516,   250,  -516,  -516,  -516,  -516,  -516,
    -516,  -516,  -516,  -516,  -516,  -516,  -516,   -20,  -516,   313,
     135,  -516,   199,   325,  -516,   295,   295,   295,   104,   431,
     104,   314,  -516,   319,   -20,   321,   -42,   319,   319,   319,
     104,  -516,   346,   281,  -516,  -516,  -516,  -516,  -516,  -516,
     727,  -516,   394,  -516,  -516,   377,    56,  -516,   239,  -516,
     497,    82,   518,   402,   524,   104,   104,   449,  -516,   440,
     341,   535,   494,   104,   342,   347,   539,   539,   539,   542,
     104,   104,  -516,   350,   258,  -516,   353,   545,   538,  -516,
    -516,  -516,   -20,   436,   426,   -20,   172,  -516,  -516,  -516,
     574,   360,   558,  -516,   559,  -516,  -516,    38,  -516,   367,
     368,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,
    -516,  -516,  -516,  -516,   521,  -516,   437,   -45,   341,   483,
    -516,   539,   569,    44,   397,   -40,  -516,  -516,   482,  -516,
    -516,  -516,   -58,   -58,   -58,  -516,  -516,  -516,  -516,  -516,
     580,  -516,  -516,  -516,   483,   506,  -516,  -516,    56,  -516,
    -516,   483,   506,   483,   153,   463,  -516,   450,   451,   452,
    -516,   454,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,
    -516,    72,  -516,   302,  -516,  -516,  -516,    82,  -516,   104,
     588,   476,    24,   465,   142,   398,   399,   400,   208,   554,
     403,   576,  -516,   352,   -44,   608,  -516,  -516,  -516,  -516,
    -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,
    -516,  -516,   498,  -516,   150,   409,  -516,   483,   535,  -516,
     573,  -516,  -516,   414,   213,  -516,   449,  -516,   419,   170,
    -516,   520,   417,  -516,    47,   172,   -20,   418,  -516,   253,
     172,   -44,   565,    58,    17,  -516,   463,  -516,   487,   272,
     210,   484,   495,  -516,  -516,   434,   536,  -516,   843,   438,
     457,   458,   174,  -516,  -516,  -516,   476,     8,    30,   575,
     302,   483,   483,   -55,   284,   443,   576,   894,   483,   200,
     445,   -62,   483,   483,   576,  -516,   576,    52,   444,   100,
     576,   576,   576,   576,   576,   576,   576,   576,   576,   576,
     576,   576,   576,   576,   576,   545,   104,  -516,   640,    82,
     -44,  -516,   319,   213,   641,   642,   431,   645,   182,  -516,
    -516,    82,  -516,   580,    22,   449,  -516,   483,  -516,   647,
    -516,  -516,  -516,  -516,   483,  -516,  -516,   650,   463,   483,
     483,  -516,   490,  -516,   503,   117,  -516,  -516,  -516,  -516,
    -516,  -516,  -516,  -516,   843,   569,   539,   546,  -516,  -516,
     472,  -516,   473,  -516,  -516,   474,  -516,  -516,   477,  -516,
    -516,  -516,  -516,   -54,   479,  -516,   310,  -516,   139,   569,
     480,   481,  -516,    24,  -516,   595,   483,   485,  -516,   486,
     584,   103,   183,   316,   483,   483,  -516,   575,   582,   -11,
    -516,  -516,  -516,   567,   790,   851,   576,   576,   492,   352,
    -516,   581,   496,   851,   851,   851,   851,   467,   467,   467,
     467,   200,   200,    61,    61,    61,   -49,   499,  -516,  -516,
     184,   686,   206,  -516,  -516,  -516,  -516,  -516,   259,   211,
    -516,   305,   476,  -516,    68,  -516,   493,  -516,    45,  -516,
     620,  -516,  -516,  -516,   692,  -516,  -516,   -44,   -44,   632,
    -516,   569,  -516,   534,  -516,   501,   222,  -516,   688,   693,
     696,  -516,   697,   698,   699,   700,  -516,  -516,  -516,   577,
     592,   597,  -516,   599,  -516,   604,  -516,   530,   104,  -516,
     139,  -516,  -516,   223,   569,   569,  -516,   540,  -516,   235,
      12,  -516,   483,   843,   483,   483,  -516,   146,   209,   541,
    -516,   576,   825,   851,   352,   544,   236,  -516,  -516,  -516,
    -516,  -516,   733,   431,  -516,  -516,   412,   742,   549,   648,
    -516,  -516,  -516,   672,   673,   674,   656,    22,   755,  -516,
    -516,  -516,   630,  -516,  -516,  -516,   -94,  -516,  -516,  -516,
    -516,   563,   241,   564,   566,   479,   570,   621,   328,   373,
     623,  -516,  -516,   341,  -516,  -516,  -516,   266,   267,   664,
     595,   595,   483,   -30,   578,   -44,   161,  -516,   483,  -516,
     894,   576,   579,   268,  -516,  -516,  -516,  -516,    45,   278,
     583,    45,    22,  -516,  -516,  -516,    22,   224,   587,   483,
    -516,  -516,  -516,   767,  -516,  -516,  -516,  -516,  -516,  -516,
    -516,  -516,  -516,  -516,  -516,  -516,  -516,   598,   649,   506,
    -516,  -516,   282,  -516,  -516,  -516,   -44,   894,  -516,  -516,
    -516,    45,   423,  -516,  -516,   296,   569,   -15,   593,  -516,
     483,   354,   595,  -516,    45,   283,   605,   483,   294,   483,
    -516,  -516,   417,  -516,  -516,  -516,   606,    36,  -516,  -516,
      45,   569,   -44,  -516,  -516,   -44,  -516,   315,    73,   327,
    -516,  -516,  -516,   298,  -516,  -516,   661,  -516,  -516,  -516,
      73,  -516
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     364,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     384,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   363,     0,
     338,   131,    33,     0,    54,    61,    61,    61,     0,     0,
       0,     0,   337,   126,     0,     0,     0,   126,   126,   126,
       0,    52,     0,   365,   366,    29,    26,    28,    27,     1,
     364,     2,     0,     6,     5,   181,   140,   141,   171,   123,
       0,   191,     0,     0,   341,     0,     0,   165,    37,     0,
     135,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,     4,     0,     0,   159,   153,
     154,   152,     0,   156,     0,     0,   187,   339,   312,   315,
     317,     0,     0,   318,     0,   313,   314,     0,   323,     0,
     190,   192,   194,   196,   305,   306,   307,   316,   308,   309,
     310,   311,    32,    31,     0,   340,     0,     0,   135,     0,
     130,     0,     0,     0,     0,   165,   137,   125,     0,   148,
     147,    38,    41,    41,    41,   124,   121,   122,   368,   367,
       0,   317,   180,   158,     0,   171,   144,   143,   145,   155,
     151,     0,   171,     0,     0,   351,   276,   277,   278,   279,
     280,   281,   289,   290,   291,   292,   293,   294,   295,   296,
     320,     0,   319,   322,   197,   198,    34,     0,    60,     0,
       0,   364,     0,     0,   301,     0,     0,     0,     0,     0,
       0,     0,   303,     0,   164,   200,   207,   208,   209,   202,
     204,   210,   203,   223,   211,   212,   213,   214,   206,   201,
     216,   217,     0,   385,     0,     0,   133,     0,     0,   136,
       0,   127,   128,     0,     0,    51,   165,    50,    24,     0,
      22,   162,   160,   188,   349,   187,     0,   170,   172,   177,
     187,   183,   185,   182,     0,   149,   350,   352,     0,     0,
       0,     0,     0,   321,   193,     0,     0,    57,     0,     0,
       0,     0,     0,    62,    64,    65,   364,   159,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,   218,
       0,     0,     0,     0,     0,   220,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   134,     0,     0,
     139,   138,   126,     0,     0,     0,     0,     0,     0,    47,
      36,     0,    20,     0,     0,   165,   161,     0,   347,     0,
     348,   199,   142,   146,     0,   176,   175,   178,   351,     0,
       0,   356,     0,   358,     0,   362,   353,   288,   287,   286,
     285,   284,   283,   282,     0,     0,     0,    85,    86,    77,
       0,    79,   106,    80,    67,     0,    74,    75,     0,    71,
      72,    78,    81,   103,   103,    76,     0,    68,   108,     0,
       0,     0,    56,     0,    59,   260,     0,   302,   304,     0,
       0,     0,     0,     0,     0,     0,   242,     0,     0,     0,
     215,   205,   234,   235,     0,   230,     0,     0,     0,     0,
     221,     0,   233,   232,   248,   249,   250,   251,   252,   253,
     254,   225,   224,   227,   226,   228,   229,     0,    35,   386,
       0,     0,     0,    48,    45,    43,    49,    40,     0,     0,
      23,   338,   364,   163,   324,   326,     0,   328,   345,   327,
     167,   189,   346,   173,     0,   174,   150,   186,   184,     0,
     359,     0,   361,     0,   354,     0,     0,    55,     0,     0,
       0,    73,     0,     0,     0,     0,    82,    83,    94,    93,
      92,    91,    90,    89,   115,     0,   114,     0,     0,    66,
     107,   109,   111,     0,     0,     0,    63,     0,   255,     0,
     159,   246,     0,     0,     0,     0,   240,     0,     0,     0,
     297,     0,     0,   231,     0,     0,     0,   222,   298,   132,
     129,    39,     0,     0,    46,    25,     0,     0,     0,     0,
     380,   372,   378,   376,   379,   374,     0,     0,     0,   344,
     336,   342,     0,   157,   179,   357,   362,   360,   195,    58,
      87,     0,     0,     0,     0,   103,     0,     0,     0,     0,
       0,   116,   113,   135,   110,   112,   118,     0,     0,   262,
     260,   260,     0,     0,     0,   244,     0,   243,     0,   247,
     299,     0,     0,     0,   238,   236,    44,    42,   345,     0,
     339,   345,     0,   375,   377,   373,     0,   325,   346,     0,
     355,    70,   105,     0,    88,    69,    84,   102,   101,   100,
      99,    98,    97,    96,    95,   120,   117,     0,     0,   171,
     256,   257,     0,   274,   275,   241,   245,   300,   239,   237,
     330,   345,     0,   329,   369,   381,     0,   169,     0,   119,
       0,   265,   260,   331,   345,     0,     0,     0,     0,     0,
     166,   104,   261,   266,   267,   268,     0,     0,   258,   332,
     345,     0,   382,   370,   343,   168,   259,     0,     0,     0,
     273,   263,   333,     0,   272,   270,     0,   271,   269,   371,
       0,   264
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -516,  -516,  -516,   714,  -516,   780,  -516,   453,  -516,   491,
    -516,  -516,  -516,  -516,  -325,   -85,   348,   462,   339,  -516,
    -516,  -516,   478,  -516,   395,  -516,  -347,  -375,  -516,  -516,
    -516,   290,  -516,  -479,  -516,   -39,  -516,  -516,  -516,  -516,
    -516,  -516,  -143,  -516,  -516,   585,  -203,   -87,  -516,    96,
     -52,   -17,  -516,  -516,   -76,  -281,  -516,  -516,  -516,  -125,
    -516,  -516,  -172,  -516,   447,  -516,  -516,  -516,    64,  -302,
    -516,  -269,   607,   611,   456,  -149,  -204,  -516,  -516,  -516,
    -516,  -516,  -516,   512,  -516,  -516,  -516,  -406,  -516,  -516,
    -516,  -362,  -516,  -516,  -157,  -516,  -516,  -516,  -516,  -516,
    -516,   -67,  -516,  -516,   690,   -84,  -516,  -516,   691,  -516,
    -516,  -515,   201,  -516,  -516,  -516,    -1,  -516,  -516,  -331,
     557,  -516,   459,  -516,   548,  -516,   246,  -516,  -516,  -516,
     721,  -516,  -516,  -516,  -516,  -378
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    73,   259,   260,    23,    66,
      24,   143,    25,    26,    89,   162,   255,   348,   349,    27,
      28,    29,    84,   292,   293,   294,   408,   506,   501,   519,
     520,   521,   295,   522,    30,    93,    31,   251,   252,    32,
      33,    34,   153,    35,   155,   156,    36,   175,   176,   177,
      77,   112,   113,   180,    78,   174,   261,   355,   356,   150,
     573,   680,   116,   267,   268,   367,   485,   108,   185,   262,
     129,   130,   131,   132,   263,   264,   225,   226,   227,   228,
     229,   230,   231,   304,   232,   233,   234,   528,   649,   686,
     687,   701,   235,   236,   198,   199,   200,   237,   238,   239,
     240,   241,   134,   135,   136,   137,   138,   139,   140,   141,
     473,   474,   475,   476,   477,    51,   478,   146,   569,   570,
     571,   361,   275,   276,   277,   375,   494,    37,    38,    63,
      64,   479,   566,   693,    71,   244
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     224,    41,    95,   265,    44,   213,   429,   496,   287,    52,
     270,    56,   163,   164,   133,   307,   416,   309,    99,   100,
     101,   465,   173,   172,    40,   471,   173,   288,   182,   507,
     249,   523,   269,   417,   271,   273,   178,   495,   679,   178,
      75,   595,   697,   119,   120,   149,   283,    87,   358,    90,
     358,   210,   627,    45,    97,   698,    60,   312,   253,   102,
     302,   115,   504,    46,   312,   109,   242,   492,   493,   303,
     460,   436,    39,   313,   311,   312,   118,   119,   120,   697,
     313,   371,   469,   211,   147,   148,   118,   119,   120,   312,
     320,   313,   158,   414,    98,    47,   559,    61,   340,   166,
     167,   246,   307,   110,    75,   313,   338,    40,    55,   245,
     434,   665,   435,   576,   529,   370,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   350,   121,    76,   133,   431,   560,   546,   254,   111,
     133,   561,   505,   420,    42,   335,   597,   598,   562,   563,
      94,   212,   421,   422,   372,   437,   214,   118,   119,   120,
     248,   266,   122,   432,   433,   564,   312,   653,   669,  -381,
     565,   310,   122,   568,    43,   359,    54,   312,   123,   363,
      48,   373,   313,   438,   540,   357,   604,    49,   123,   357,
     178,   124,   374,   313,   650,   651,   289,   290,   291,   168,
     320,   215,   216,   217,   699,   415,   440,   700,   285,   601,
     636,   214,   118,   119,   120,   269,   344,    54,   472,   418,
     487,   488,   312,    50,   441,   124,   125,   126,   617,   183,
     480,   533,   542,   543,    53,   124,   125,   126,   313,   345,
     218,   699,   613,   122,   700,   514,   184,   419,   109,   602,
     491,   457,   559,   334,   619,   335,   215,   216,   217,   123,
     127,    62,   344,   515,   346,   312,   688,   607,  -334,   558,
     127,   272,   133,   128,    69,   537,   538,   219,   492,   493,
     312,   313,   655,   128,   133,   552,   110,   660,   678,    57,
     663,   220,   560,    65,   534,   218,   313,   561,   122,    58,
     652,   497,   312,   461,   562,   563,   124,   125,   126,    70,
     553,   516,   517,   703,   123,   518,    79,   114,   313,   347,
     608,   564,   111,   302,   559,  -381,   565,   667,   312,   362,
     673,    59,   219,    80,   368,   458,   706,   610,   297,   320,
     298,   221,   222,   689,   313,   365,   220,   337,   711,   223,
     338,   380,   381,   382,   128,   214,   118,   119,   120,   702,
     675,   124,   125,   126,   560,   347,    72,   352,   682,   561,
     353,   412,   312,   366,   413,   539,   562,   563,   424,   467,
     676,   549,   468,   603,   207,   605,   606,   545,   313,   331,
     332,   333,   334,   564,   335,    81,   221,   222,   565,   425,
     215,   216,   217,   551,   223,   426,   468,   657,   555,   128,
     535,   207,    75,   378,   379,   214,   118,   119,   120,   579,
     596,    82,   338,   338,  -335,    83,   214,   118,   119,   120,
     677,   425,   600,   615,    88,   357,   357,   536,   632,   218,
      91,   633,   122,   186,   187,   188,   189,   190,   191,    92,
     645,   508,   509,   510,   511,   512,   513,    96,   123,   656,
     215,   216,   217,   646,   647,   659,   338,   338,   357,   639,
     640,   215,   216,   217,   103,   661,   219,   671,   357,   672,
     690,   104,   357,   357,   704,   705,   214,   118,   119,   120,
     220,   694,   612,   106,   338,   709,   707,   708,   338,   218,
     117,   556,   122,   557,   107,   124,   125,   126,    67,    68,
     218,   256,   257,   122,   641,   642,   643,   593,   123,   683,
     684,   685,   142,   315,    85,    86,   144,   145,   692,   123,
     695,   215,   216,   217,   149,   151,   219,   152,   154,   159,
     221,   222,   157,   161,   160,   165,    54,   219,   223,   170,
     220,   171,   173,   128,   179,   181,   201,   214,   118,   119,
     120,   220,   202,   203,   206,   124,   125,   126,   207,   208,
     218,   209,   243,   122,   247,   250,   124,   125,   126,   214,
     118,   119,   120,   258,   114,   274,   278,   279,   280,   123,
     281,   286,    15,   296,   299,   300,   301,   308,   336,   319,
     221,   222,   305,   216,   217,   339,   320,   219,   223,   618,
     343,   221,   222,   128,   342,   351,   354,   357,   364,   223,
     674,   220,   369,   384,   128,   216,   217,   314,   377,   383,
     385,   386,   410,   411,   409,    75,   124,   125,   126,   427,
     439,   218,   430,   459,   122,   463,   464,  -384,  -384,   466,
     482,  -384,  -384,   484,   329,   330,   331,   332,   333,   334,
     123,   335,   498,   218,   315,   489,   122,   490,   499,   500,
     502,   221,   222,   503,   527,   505,   524,   525,   306,   223,
     532,   530,   123,   531,   128,   437,   312,   547,   544,   550,
     335,   572,   220,   567,   548,   574,   575,   577,   578,   581,
     306,   580,   582,   583,   584,   592,   586,   124,   125,   126,
     591,   316,   585,   587,   220,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,  -383,   588,   124,
     125,   126,   317,   589,     1,   590,   599,   616,   609,   318,
     319,   614,   221,   222,     2,   620,   621,   320,   321,   622,
     223,     3,   623,   624,   625,   128,     4,   626,   628,   629,
     631,   634,   638,   635,   221,   222,     5,   637,   644,     6,
       7,   648,   223,   668,   518,   654,   658,   128,   670,   662,
     710,     8,     9,   666,   105,   322,   323,   324,   325,   326,
     681,    10,   327,   328,    11,   329,   330,   331,   332,   333,
     334,   691,   335,   696,    74,   462,   470,   554,   526,     1,
     594,   483,   282,   481,   284,   423,    12,   204,   205,     2,
      13,   360,   630,   664,   376,   169,     3,   486,     0,     0,
       0,     4,     0,   341,     0,     0,    14,     0,     0,     0,
       0,     5,     0,    15,     6,     7,   315,     0,     0,     0,
       0,     0,     0,     0,   387,   388,     8,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,    11,
     389,     0,     0,     0,   390,   391,   392,   393,   394,     0,
     395,   315,     0,     0,     0,    16,    17,    18,   396,     0,
       0,    12,     0,   316,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   315,     0,   541,
       0,    14,     0,   397,   428,     0,     0,     0,    15,     0,
       0,     0,   319,     0,     0,     0,     0,     0,   316,   320,
     321,   398,     0,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   611,     0,     0,     0,   401,   428,
     315,     0,     0,   402,  -384,   403,   404,   319,     0,     0,
      16,    17,    18,     0,   320,   321,   405,   322,   323,   324,
     325,   326,     0,     0,   327,   328,     0,   329,   330,   331,
     332,   333,   334,   319,   335,     0,     0,     0,     0,     0,
     320,  -384,     0,     0,     0,     0,   406,   316,     0,   407,
       0,     0,   322,   323,   324,   325,   326,     0,     0,   327,
     328,     0,   329,   330,   331,   332,   333,   334,   428,   335,
       0,     0,     0,     0,     0,     0,   319,     0,  -384,  -384,
    -384,   325,   326,   320,   321,   327,   328,     0,   329,   330,
     331,   332,   333,   334,     0,   335,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   322,   323,   324,   325,   326,     0,     0,   327,   328,
       0,   329,   330,   331,   332,   333,   334,     0,   335
};

static const yytype_int16 yycheck[] =
{
     149,     2,    54,   175,     5,   148,   308,   385,   211,    10,
     182,    12,    97,    98,    81,   219,   297,   221,    57,    58,
      59,   346,    14,   107,     3,     3,    14,     3,   115,   404,
     155,   409,   181,     3,   183,   184,   112,   384,    53,   115,
      60,   520,     6,     5,     6,    85,   203,    48,     3,    50,
       3,    96,   567,    72,    96,    19,    21,   119,   116,    60,
     115,    78,   116,    82,   119,     9,   151,   161,   162,   218,
     339,    19,    29,   135,   223,   119,     4,     5,     6,     6,
     135,    64,   351,   128,    85,    86,     4,     5,     6,   119,
     139,   135,    93,   296,   136,   114,    28,    62,   247,   100,
     101,   153,   306,    47,    60,   135,   200,     3,    12,    65,
     314,   626,   316,   491,   416,    57,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   256,    50,    37,   201,   197,    68,   439,   196,    83,
     207,    73,   196,   300,     3,   194,   524,   525,    80,    81,
      54,   196,   301,   302,   137,   103,     3,     4,     5,     6,
     200,   178,    90,   312,   313,    97,   119,   197,   647,   101,
     102,   223,    90,   128,     3,   128,   196,   119,   106,   266,
      96,   164,   135,   131,   195,   200,   533,    96,   106,   200,
     266,   153,   175,   135,   600,   601,   172,   173,   174,   103,
     139,    48,    49,    50,   168,   197,   106,   171,   209,   197,
     585,     3,     4,     5,     6,   364,     3,   196,   196,   189,
     369,   370,   119,   100,   124,   153,   154,   155,   553,    57,
     355,   128,   436,   437,    82,   153,   154,   155,   135,    26,
      87,   168,   544,    90,   171,   106,    74,   299,     9,   530,
     133,   335,    28,   192,   556,   194,    48,    49,    50,   106,
     188,     3,     3,   124,    51,   119,   672,   121,   200,   472,
     188,   118,   339,   201,     0,   424,   425,   124,   161,   162,
     119,   135,   121,   201,   351,    26,    47,   618,   666,    72,
     621,   138,    68,   157,   111,    87,   135,    73,    90,    82,
     602,   386,   119,   342,    80,    81,   153,   154,   155,   199,
      51,   172,   173,   691,   106,   176,     3,    78,   135,   106,
     111,    97,    83,   115,    28,   101,   102,   629,   119,   265,
     661,   114,   124,   198,   270,   336,   698,   541,   196,   139,
     198,   188,   189,   674,   135,    92,   138,   197,   710,   196,
     200,   141,   142,   143,   201,     3,     4,     5,     6,   690,
     662,   153,   154,   155,    68,   106,   116,   197,   670,    73,
     200,   197,   119,   120,   200,   427,    80,    81,    94,   197,
      84,   197,   200,   532,   200,   534,   535,   439,   135,   189,
     190,   191,   192,    97,   194,   196,   188,   189,   102,   115,
      48,    49,    50,   197,   196,   121,   200,   611,   197,   201,
      94,   200,    60,   141,   142,     3,     4,     5,     6,   197,
     197,    96,   200,   200,   200,   130,     3,     4,     5,     6,
     134,   115,   197,   197,     3,   200,   200,   121,   197,    87,
     126,   200,    90,   141,   142,   143,   144,   145,   146,   130,
     593,   141,   142,   143,   144,   145,   146,   136,   106,   608,
      48,    49,    50,   197,   197,   197,   200,   200,   200,   141,
     142,    48,    49,    50,   128,   197,   124,   649,   200,   197,
     197,   200,   200,   200,   169,   170,     3,     4,     5,     6,
     138,   197,   544,    99,   200,   197,   169,   170,   200,    87,
       3,   196,    90,   198,   127,   153,   154,   155,    17,    18,
      87,   163,   164,    90,   141,   142,   143,   518,   106,   165,
     166,   167,     4,    56,    46,    47,   124,     3,   677,   106,
     679,    48,    49,    50,    85,    95,   124,   196,     3,   197,
     188,   189,    48,     4,   197,     3,   196,   124,   196,   196,
     138,     6,    14,   201,   118,   129,   196,     3,     4,     5,
       6,   138,     4,     4,   197,   153,   154,   155,   200,    48,
      87,   134,     3,    90,   177,    93,   153,   154,   155,     3,
       4,     5,     6,     3,    78,   122,   136,   136,   136,   106,
     136,     3,   116,   128,   196,   196,   196,   194,   100,   132,
     188,   189,    48,    49,    50,   196,   139,   124,   196,   197,
     196,   188,   189,   201,    41,   196,    96,   200,   200,   196,
     197,   138,    57,   128,   201,    49,    50,    19,   141,   145,
     196,    95,   175,   175,   196,    60,   153,   154,   155,   196,
     196,    87,   197,     3,    90,     4,     4,   180,   181,     4,
       3,   184,   185,     3,   187,   188,   189,   190,   191,   192,
     106,   194,   116,    87,    56,   175,    90,   164,   196,   196,
     196,   188,   189,   196,    79,   196,   196,   196,   124,   196,
      96,   196,   106,   197,   201,   103,   119,   106,   196,     3,
     194,    71,   138,   200,   195,     3,    64,   163,   197,     6,
     124,    13,     6,     6,     6,   175,     6,   153,   154,   155,
     106,   103,    13,   136,   138,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     0,   136,   153,
     154,   155,   124,   136,     7,   136,   196,     4,   197,   131,
     132,   197,   188,   189,    17,     3,   197,   139,   140,   101,
     196,    24,    80,    80,    80,   201,    29,   101,     3,   129,
     197,   197,   141,   197,   188,   189,    39,   197,   145,    42,
      43,   107,   196,     6,   176,   197,   197,   201,   129,   196,
     119,    54,    55,   196,    70,   177,   178,   179,   180,   181,
     197,    64,   184,   185,    67,   187,   188,   189,   190,   191,
     192,   196,   194,   197,    24,   343,   353,   468,   413,     7,
     520,   364,   201,   357,   207,   303,    89,   127,   127,    17,
      93,   264,   576,   622,   276,   104,    24,   368,    -1,    -1,
      -1,    29,    -1,   248,    -1,    -1,   109,    -1,    -1,    -1,
      -1,    39,    -1,   116,    42,    43,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,
      27,    -1,    -1,    -1,    31,    32,    33,    34,    35,    -1,
      37,    56,    -1,    -1,    -1,   158,   159,   160,    45,    -1,
      -1,    89,    -1,   103,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,   119,
      -1,   109,    -1,    70,   124,    -1,    -1,    -1,   116,    -1,
      -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,   103,   139,
     140,    88,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,   105,   124,
      56,    -1,    -1,   110,   103,   112,   113,   132,    -1,    -1,
     158,   159,   160,    -1,   139,   140,   123,   177,   178,   179,
     180,   181,    -1,    -1,   184,   185,    -1,   187,   188,   189,
     190,   191,   192,   132,   194,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,    -1,    -1,    -1,   153,   103,    -1,   156,
      -1,    -1,   177,   178,   179,   180,   181,    -1,    -1,   184,
     185,    -1,   187,   188,   189,   190,   191,   192,   124,   194,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,   177,   178,
     179,   180,   181,   139,   140,   184,   185,    -1,   187,   188,
     189,   190,   191,   192,    -1,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   177,   178,   179,   180,   181,    -1,    -1,   184,   185,
      -1,   187,   188,   189,   190,   191,   192,    -1,   194
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    17,    24,    29,    39,    42,    43,    54,    55,
      64,    67,    89,    93,   109,   116,   158,   159,   160,   203,
     204,   205,   206,   210,   212,   214,   215,   221,   222,   223,
     236,   238,   241,   242,   243,   245,   248,   329,   330,    29,
       3,   318,     3,     3,   318,    72,    82,   114,    96,    96,
     100,   317,   318,    82,   196,   251,   318,    72,    82,   114,
      21,    62,     3,   331,   332,   157,   211,   211,   211,     0,
     199,   336,   116,   207,   207,    60,   251,   252,   256,     3,
     198,   196,    96,   130,   224,   224,   224,   318,     3,   216,
     318,   126,   130,   237,   251,   252,   136,    96,   136,   237,
     237,   237,   318,   128,   200,   205,    99,   127,   269,     9,
      47,    83,   253,   254,    78,   253,   264,     3,     4,     5,
       6,    50,    90,   106,   153,   154,   155,   188,   201,   272,
     273,   274,   275,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     4,   213,   124,     3,   319,   318,   318,    85,
     261,    95,   196,   244,     3,   246,   247,    48,   318,   197,
     197,     4,   217,   217,   217,     3,   318,   318,   251,   332,
     196,     6,   307,    14,   257,   249,   250,   251,   256,   118,
     255,   129,   249,    57,    74,   270,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   296,   297,
     298,   196,     4,     4,   306,   310,   197,   200,    48,   134,
      96,   128,   196,   244,     3,    48,    49,    50,    87,   124,
     138,   188,   189,   196,   277,   278,   279,   280,   281,   282,
     283,   284,   286,   287,   288,   294,   295,   299,   300,   301,
     302,   303,   217,     3,   337,    65,   252,   177,   200,   261,
      93,   239,   240,   116,   196,   218,   218,   218,     3,   208,
     209,   258,   271,   276,   277,   264,   253,   265,   266,   277,
     264,   277,   118,   277,   122,   324,   325,   326,   136,   136,
     136,   136,   275,   296,   274,   318,     3,   248,     3,   172,
     173,   174,   225,   226,   227,   234,   128,   196,   198,   196,
     196,   196,   115,   277,   285,    48,   124,   278,   194,   278,
     252,   277,   119,   135,    19,    56,   103,   124,   131,   132,
     139,   140,   177,   178,   179,   180,   181,   184,   185,   187,
     188,   189,   190,   191,   192,   194,   100,   197,   200,   196,
     277,   247,    41,   196,     3,    26,    51,   106,   219,   220,
     261,   196,   197,   200,    96,   259,   260,   200,     3,   128,
     322,   323,   270,   249,   200,    92,   120,   267,   270,    57,
      57,    64,   137,   164,   175,   327,   326,   141,   141,   142,
     141,   142,   143,   145,   128,   196,    95,    11,    12,    27,
      31,    32,    33,    34,    35,    37,    45,    70,    88,    90,
      91,   105,   110,   112,   113,   123,   153,   156,   228,   196,
     175,   175,   197,   200,   248,   197,   257,     3,   189,   252,
     296,   277,   277,   285,    94,   115,   121,   196,   124,   271,
     197,   197,   277,   277,   278,   278,    19,   103,   131,   196,
     106,   124,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   307,   318,     3,
     273,   237,   219,     4,     4,   216,     4,   197,   200,   273,
     209,     3,   196,   312,   313,   314,   315,   316,   318,   333,
     261,   276,     3,   266,     3,   268,   324,   277,   277,   175,
     164,   133,   161,   162,   328,   228,   337,   217,   116,   196,
     196,   230,   196,   196,   116,   196,   229,   229,   141,   142,
     143,   144,   145,   146,   106,   124,   172,   173,   176,   231,
     232,   233,   235,   337,   196,   196,   226,    79,   289,   271,
     196,   197,    96,   128,   111,    94,   121,   277,   277,   252,
     195,   119,   278,   278,   196,   252,   271,   106,   195,   197,
       3,   197,    26,    51,   220,   197,   196,   198,   248,    28,
      68,    73,    80,    81,    97,   102,   334,   200,   128,   320,
     321,   322,    71,   262,     3,    64,   337,   163,   197,   197,
      13,     6,     6,     6,     6,    13,     6,   136,   136,   136,
     136,   106,   175,   318,   233,   235,   197,   337,   337,   196,
     197,   197,   257,   277,   228,   277,   277,   121,   111,   197,
     278,   119,   252,   271,   197,   197,     4,   216,   197,   271,
       3,   197,   101,    80,    80,    80,   101,   313,     3,   129,
     328,   197,   197,   200,   197,   197,   229,   197,   141,   141,
     142,   141,   142,   143,   145,   244,   197,   197,   107,   290,
     289,   289,   271,   197,   197,   121,   277,   278,   197,   197,
     321,   197,   196,   321,   314,   313,   196,   271,     6,   235,
     129,   264,   197,   321,   197,   271,    84,   134,   337,    53,
     263,   197,   271,   165,   166,   167,   291,   292,   289,   321,
     197,   196,   277,   335,   197,   277,   197,     6,    19,   168,
     171,   293,   321,   337,   169,   170,   293,   169,   170,   197,
     119,   293
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   202,   203,   204,   204,   205,   205,   205,   205,   205,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     207,   207,   208,   208,   209,   209,   210,   210,   210,   211,
     211,   212,   213,   214,   214,   215,   215,   216,   217,   218,
     218,   218,   219,   219,   219,   219,   219,   219,   220,   220,
     221,   221,   222,   222,   222,   223,   223,   223,   223,   223,
     224,   224,   225,   225,   226,   226,   227,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   229,   229,   230,   230,   230,   231,   231,   232,
     232,   232,   232,   233,   233,   233,   233,   234,   234,   234,
     235,   236,   236,   236,   236,   237,   237,   238,   239,   240,
     241,   242,   243,   243,   244,   244,   245,   246,   246,   247,
     248,   248,   248,   249,   249,   250,   250,   251,   251,   252,
     252,   253,   254,   254,   254,   255,   255,   256,   257,   257,
     258,   259,   259,   260,   261,   261,   262,   262,   263,   263,
     264,   264,   265,   265,   266,   267,   267,   267,   268,   268,
     269,   269,   270,   270,   270,   270,   270,   270,   271,   271,
     272,   272,   273,   273,   274,   274,   275,   275,   275,   276,
     277,   277,   277,   277,   277,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   279,   279,   280,   280,
     280,   280,   280,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   282,   282,   283,   283,   283,   283,
     284,   284,   284,   284,   285,   285,   286,   286,   287,   287,
     287,   287,   287,   287,   287,   288,   288,   288,   288,   289,
     289,   290,   290,   291,   291,   291,   292,   292,   292,   293,
     293,   293,   293,   293,   294,   295,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   297,
     297,   297,   297,   297,   297,   298,   298,   299,   300,   301,
     301,   302,   302,   302,   302,   303,   303,   303,   303,   303,
     303,   303,   304,   305,   305,   306,   306,   307,   308,   309,
     310,   310,   310,   311,   312,   312,   313,   313,   314,   314,
     314,   314,   314,   314,   315,   315,   316,   317,   318,   318,
     319,   319,   320,   320,   321,   321,   322,   322,   323,   323,
     324,   324,   325,   325,   326,   326,   327,   327,   327,   327,
     328,   328,   328,   329,   329,   330,   331,   331,   332,   333,
     333,   333,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   335,   336,   336,   337,   337
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     6,     1,     1,     4,
       3,     0,     4,     2,     4,     2,     3,     1,     2,     2,
       5,     5,     2,     3,     2,     8,     7,     6,     9,     7,
       3,     0,     1,     3,     1,     1,     3,     1,     1,     4,
       4,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     4,     1,     1,     3,     4,     2,
       2,     2,     2,     2,     2,     4,     4,     4,     4,     4,
       4,     4,     3,     0,     5,     3,     0,     1,     0,     1,
       2,     1,     2,     2,     1,     1,     2,     5,     4,     6,
       3,     4,     4,     3,     4,     2,     0,     5,     1,     4,
       4,     2,     8,     5,     3,     0,     5,     1,     3,     3,
       2,     2,     6,     1,     1,     1,     3,     3,     3,     4,
       6,     2,     1,     1,     1,     1,     0,     7,     1,     0,
       1,     1,     0,     2,     2,     0,     4,     0,     2,     0,
       3,     0,     1,     3,     3,     1,     1,     0,     0,     2,
       2,     0,     2,     2,     4,     2,     4,     0,     1,     3,
       1,     0,     1,     3,     1,     6,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     2,     2,
       2,     3,     4,     1,     3,     3,     3,     3,     3,     3,
       3,     4,     3,     3,     3,     3,     5,     6,     5,     6,
       4,     6,     3,     5,     4,     5,     4,     5,     3,     3,
       3,     3,     3,     3,     3,     4,     6,     6,     8,     6,
       0,     3,     0,     2,     5,     0,     1,     1,     1,     2,
       2,     2,     2,     1,     6,     6,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     5,
       6,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     3,     2,     1,     1,     3,     1,     1,     1,     4,
       4,     5,     6,     7,     1,     3,     2,     1,     1,     3,
       1,     0,     1,     5,     1,     0,     2,     1,     1,     0,
       1,     0,     1,     2,     3,     5,     1,     3,     1,     2,
       2,     1,     0,     1,     0,     2,     1,     3,     3,     4,
       6,     8,     1,     2,     1,     2,     1,     2,     1,     1,
       1,     0,     1,     1,     0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* IDENTIFIER  */
#line 194 "bison_parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).sval)); }
#line 2025 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 194 "bison_parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).sval)); }
#line 2031 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2037 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2043 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* statement_list  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).stmt_vec)) {
    for (auto ptr : *(((*yyvaluep).stmt_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).stmt_vec));
}
#line 2056 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 2062 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* preparable_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 2068 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_hints  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2081 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* hint_list  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2094 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* hint  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2100 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* transaction_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).transaction_stmt)); }
#line 2106 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* prepare_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 2112 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* prepare_target_query  */
#line 194 "bison_parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).sval)); }
#line 2118 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* execute_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 2124 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* import_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 2130 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* file_type  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2136 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* file_path  */
#line 194 "bison_parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).sval)); }
#line 2142 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* opt_import_export_options  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_export_option_t)); }
#line 2148 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* import_export_options  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_export_option_t)); }
#line 2154 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* csv_option  */
#line 203 "bison_parser.y" /* yacc.c:1257  */
      {
  free(((*yyvaluep).csv_option_t)->second);
  delete (((*yyvaluep).csv_option_t));
}
#line 2163 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* export_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).export_stmt)); }
#line 2169 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* show_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 2175 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* create_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 2181 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* opt_not_exists  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2187 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* table_elem_commalist  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_element_vec)) {
    for (auto ptr : *(((*yyvaluep).table_element_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_element_vec));
}
#line 2200 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* table_elem  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table_element_t)); }
#line 2206 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* column_def  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 2212 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* column_type  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2218 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* opt_time_precision  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2224 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* opt_decimal_specification  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).ival_pair)); }
#line 2230 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* opt_column_constraints  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_constraints_t)); }
#line 2236 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* column_constraints  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_constraints_t)); }
#line 2242 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* column_constraint  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2248 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* table_constraint  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table_constraint_t)); }
#line 2254 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* references_spec  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).references_spec_t)); }
#line 2260 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* drop_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 2266 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* opt_exists  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2272 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* alter_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alter_stmt)); }
#line 2278 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* alter_action  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alter_action_t)); }
#line 2284 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* drop_action  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_action_t)); }
#line 2290 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* delete_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 2296 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* truncate_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 2302 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* insert_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 2308 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* opt_column_list  */
#line 186 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 2321 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* update_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 2327 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* update_clause_commalist  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).update_vec)) {
    for (auto ptr : *(((*yyvaluep).update_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).update_vec));
}
#line 2340 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* update_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 2346 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* select_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2352 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* select_within_set_operation  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2358 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* select_within_set_operation_no_parentheses  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2364 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* select_with_paren  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2370 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* select_no_paren  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2376 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* set_operator  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).set_operator_t)); }
#line 2382 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* set_type  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).set_operator_t)); }
#line 2388 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* opt_all  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2394 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* select_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2400 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* opt_distinct  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2406 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* select_list  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2419 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* opt_from_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2425 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* from_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2431 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* opt_where  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2437 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* opt_group  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2443 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* opt_having  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2449 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* opt_order  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2462 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* order_list  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2475 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* order_desc  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2481 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 267: /* opt_order_type  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2487 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 268: /* opt_null_ordering  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2493 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 269: /* opt_top  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2499 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 270: /* opt_limit  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2505 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 271: /* expr_list  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2518 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 272: /* opt_extended_literal_list  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2531 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 273: /* extended_literal_list  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2544 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 274: /* casted_extended_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2550 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 275: /* extended_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2556 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 276: /* expr_alias  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2562 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 277: /* expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2568 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 278: /* operand  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2574 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 279: /* scalar_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2580 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 280: /* unary_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2586 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 281: /* binary_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2592 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 282: /* logic_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2598 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 283: /* in_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2604 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 284: /* case_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2610 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 285: /* case_list  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2616 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 286: /* exists_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2622 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 287: /* comp_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2628 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 288: /* function_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2634 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 289: /* opt_window  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).window_description)); }
#line 2640 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 290: /* opt_partition  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2653 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 291: /* opt_frame_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).frame_description)); }
#line 2659 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 292: /* frame_type  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2665 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 293: /* frame_bound  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).frame_bound)); }
#line 2671 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 294: /* extract_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2677 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 295: /* cast_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2683 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 296: /* datetime_field  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2689 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 297: /* datetime_field_plural  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2695 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 298: /* duration_field  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2701 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 299: /* array_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2707 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 300: /* array_index  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2713 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 301: /* between_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2719 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 302: /* column_name  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2725 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 303: /* literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2731 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 304: /* string_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2737 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 305: /* bool_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2743 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 306: /* num_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2749 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 307: /* int_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2755 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 308: /* null_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2761 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 309: /* date_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2767 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 310: /* interval_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2773 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 311: /* param_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2779 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 312: /* table_ref  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2785 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 313: /* table_ref_atomic  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2791 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 314: /* nonjoin_table_ref_atomic  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2797 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 315: /* table_ref_commalist  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_vec)) {
    for (auto ptr : *(((*yyvaluep).table_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_vec));
}
#line 2810 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 316: /* table_ref_name  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2816 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 317: /* table_ref_name_no_alias  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2822 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 318: /* table_name  */
#line 182 "bison_parser.y" /* yacc.c:1257  */
      {
  free(((*yyvaluep).table_name).name);
  free(((*yyvaluep).table_name).schema);
}
#line 2831 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 319: /* opt_index_name  */
#line 194 "bison_parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).sval)); }
#line 2837 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 320: /* table_alias  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2843 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 321: /* opt_table_alias  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2849 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 322: /* alias  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2855 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 323: /* opt_alias  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2861 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 324: /* opt_locking_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).locking_clause_vec)); }
#line 2867 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 325: /* opt_locking_clause_list  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).locking_clause_vec)); }
#line 2873 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 326: /* locking_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).locking_t)); }
#line 2879 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 327: /* row_lock_mode  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2885 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 328: /* opt_row_lock_policy  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2891 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 329: /* opt_with_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2897 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 330: /* with_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2903 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 331: /* with_description_list  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2909 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 332: /* with_description  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_t)); }
#line 2915 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 333: /* join_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2921 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 334: /* opt_join_type  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2927 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 335: /* join_condition  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2933 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 337: /* ident_commalist  */
#line 186 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 2946 "bison_parser.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 81 "bison_parser.y" /* yacc.c:1429  */
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 3065 "bison_parser.cpp" /* yacc.c:1429  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 343 "bison_parser.y" /* yacc.c:1646  */
    {
  for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
    // Transfers ownership of the statement.
    result->addStatement(stmt);
  }

  unsigned param_id = 0;
  for (void* param : yyloc.param_list) {
    if (param) {
      Expr* expr = (Expr*)param;
      expr->ival = param_id;
      result->addParameter(expr);
      ++param_id;
    }
  }
    delete (yyvsp[-1].stmt_vec);
  }
#line 3270 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 362 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3281 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 368 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3292 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 375 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3301 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 379 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3310 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 383 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3316 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 384 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3322 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 385 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3328 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 387 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3334 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 388 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3340 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 389 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3346 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 390 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3352 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 391 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3358 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 392 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3364 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 393 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3370 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 394 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3376 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 395 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3382 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 396 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3388 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 402 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3394 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 403 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 3400 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 405 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3409 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 409 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3418 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 414 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3427 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 418 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3437 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 428 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3443 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 429 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3449 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 430 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3455 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 438 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3465 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 446 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3474 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 450 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3484 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 462 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3495 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 468 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-1].import_export_option_t)->format);
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-4].table_name).name;
  (yyval.import_stmt)->whereClause = (yyvsp[0].expr);
  if ((yyvsp[-1].import_export_option_t)->encoding) {
    (yyval.import_stmt)->encoding = (yyvsp[-1].import_export_option_t)->encoding;
    (yyvsp[-1].import_export_option_t)->encoding = nullptr;
  }
  if ((yyvsp[-1].import_export_option_t)->csv_options) {
    (yyval.import_stmt)->csv_options = (yyvsp[-1].import_export_option_t)->csv_options;
    (yyvsp[-1].import_export_option_t)->csv_options = nullptr;
  }
  delete (yyvsp[-1].import_export_option_t);
}
#line 3516 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 485 "bison_parser.y" /* yacc.c:1646  */
    {
  if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
    (yyval.import_type_t) = kImportCSV;
  } else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
    (yyval.import_type_t) = kImportTbl;
  } else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
    (yyval.import_type_t) = kImportBinary;
  } else {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[0].sval));
}
#line 3535 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 500 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 3541 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 502 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3547 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 503 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3553 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 504 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.import_export_option_t) = new ImportExportOptions{}; }
#line 3559 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 506 "bison_parser.y" /* yacc.c:1646  */
    {
  if ((yyvsp[-3].import_export_option_t)->format != kImportAuto) {
    delete (yyvsp[-3].import_export_option_t);
    yyerror(&yyloc, result, scanner, "File type must only be provided once.");
    YYERROR;
  }
  if ((yyvsp[-3].import_export_option_t)->csv_options && (yyvsp[0].import_type_t) != kImportCSV && (yyvsp[0].import_type_t) != kImportAuto) {
    delete (yyvsp[-3].import_export_option_t);
    yyerror(&yyloc, result, scanner, "CSV options (DELIMITER, NULL, QUOTE) are only allowed for CSV files.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->format = (yyvsp[0].import_type_t);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3578 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 520 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->format = (yyvsp[0].import_type_t);
}
#line 3587 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 524 "bison_parser.y" /* yacc.c:1646  */
    {
  if ((yyvsp[-3].import_export_option_t)->encoding) {
    delete (yyvsp[-3].import_export_option_t);
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Encoding type must only be provided once.");
    YYERROR;
  }
  (yyvsp[-3].import_export_option_t)->encoding = (yyvsp[0].sval);
  (yyval.import_export_option_t) = (yyvsp[-3].import_export_option_t);
}
#line 3602 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 534 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->encoding = (yyvsp[0].sval);
}
#line 3611 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 538 "bison_parser.y" /* yacc.c:1646  */
    {
  if ((yyvsp[-2].import_export_option_t)->format != kImportAuto && (yyvsp[-2].import_export_option_t)->format != kImportCSV) {
    delete (yyvsp[-2].import_export_option_t);
    free((yyvsp[0].csv_option_t)->second);
    delete (yyvsp[0].csv_option_t);
    yyerror(&yyloc, result, scanner, "CSV options (DELIMITER, NULL, QUOTE) are only allowed for CSV files.");
    YYERROR;
  }

  if ((yyvsp[-2].import_export_option_t)->csv_options == nullptr) {
    (yyvsp[-2].import_export_option_t)->csv_options = new CsvOptions{};
  }

  if (!(yyvsp[-2].import_export_option_t)->csv_options->accept_csv_option((yyvsp[0].csv_option_t))) {
    free((yyvsp[0].csv_option_t)->second);
    delete (yyvsp[0].csv_option_t);
    delete (yyvsp[-2].import_export_option_t);
    yyerror(&yyloc, result, scanner, "CSV options (DELIMITER, NULL, QUOTE) cannot be provided more than once.");
    YYERROR;
  }

  delete (yyvsp[0].csv_option_t);
  (yyval.import_export_option_t) = (yyvsp[-2].import_export_option_t);
}
#line 3640 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 562 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->csv_options = new CsvOptions{};
  (yyval.import_export_option_t)->csv_options->accept_csv_option((yyvsp[0].csv_option_t));

  delete (yyvsp[0].csv_option_t);
}
#line 3652 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 570 "bison_parser.y" /* yacc.c:1646  */
    {
  if (strcasecmp((yyvsp[-1].sval), "DELIMITER") == 0) {
    (yyval.csv_option_t) = new std::pair<CsvOptionType, char*>(CsvOptionType::Delimiter, (yyvsp[0].sval));
  } else if (strcasecmp((yyvsp[-1].sval), "QUOTE") == 0) {
    (yyval.csv_option_t) = new std::pair<CsvOptionType, char*>(CsvOptionType::Quote, (yyvsp[0].sval));
  } else {
    free((yyvsp[-1].sval));
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Unknown CSV option.");
    YYERROR;
  }
  free((yyvsp[-1].sval));
}
#line 3670 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 583 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.csv_option_t) = new std::pair<CsvOptionType, char*>(CsvOptionType::Null, (yyvsp[0].sval)); }
#line 3676 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 590 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_export_option_t)->format);
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
  if ((yyvsp[0].import_export_option_t)->encoding) {
    (yyval.export_stmt)->encoding = (yyvsp[0].import_export_option_t)->encoding;
    (yyvsp[0].import_export_option_t)->encoding = nullptr;
  }
  if ((yyvsp[0].import_export_option_t)->csv_options) {
    (yyval.export_stmt)->csv_options = (yyvsp[0].import_export_option_t)->csv_options;
    (yyvsp[0].import_export_option_t)->csv_options = nullptr;
  }
  delete (yyvsp[0].import_export_option_t);
}
#line 3696 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 605 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_export_option_t)->format);
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->select = (yyvsp[-3].select_stmt);
  if ((yyvsp[0].import_export_option_t)->encoding) {
    (yyval.export_stmt)->encoding = (yyvsp[0].import_export_option_t)->encoding;
    (yyvsp[0].import_export_option_t)->encoding = nullptr;
  }
  if ((yyvsp[0].import_export_option_t)->csv_options) {
    (yyval.export_stmt)->csv_options = (yyvsp[0].import_export_option_t)->csv_options;
    (yyvsp[0].import_export_option_t)->csv_options = nullptr;
  }
  delete (yyvsp[0].import_export_option_t);
}
#line 3715 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 625 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3721 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 626 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3731 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 631 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3741 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 642 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
  (yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
  if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
    free((yyvsp[-2].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[-2].sval));
  (yyval.create_stmt)->filePath = (yyvsp[0].sval);
}
#line 3759 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 655 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
  delete (yyvsp[-1].table_element_vec);
  if (result->errorMsg()) {
    delete (yyval.create_stmt);
    YYERROR;
  }
}
#line 3776 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 667 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3788 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 674 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3800 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 681 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3813 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 690 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3819 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 691 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3825 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 693 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3834 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 697 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3843 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 702 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3849 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 703 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3855 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 705 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraints_t)->constraints, (yyvsp[0].column_constraints_t)->references);
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
  delete (yyvsp[0].column_constraints_t);
}
#line 3867 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 713 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3873 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 714 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3879 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 715 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3885 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 716 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3891 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 717 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3897 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 718 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3903 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 719 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3912 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 723 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3918 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 724 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3924 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 725 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3930 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 726 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3936 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 727 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3942 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 728 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3948 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 729 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3954 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 730 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3960 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 731 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3966 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 732 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TIMETZ, 0, (yyvsp[0].ival)}; }
#line 3972 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 733 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TIMETZ, 0, (yyvsp[0].ival)}; }
#line 3978 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 734 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3984 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 735 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATETIMETZ}; }
#line 3990 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 736 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATETIMETZ}; }
#line 3996 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 737 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 4002 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 738 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_YEAR}; }
#line 4008 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 739 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_MONTH}; }
#line 4014 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 740 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_DAY}; }
#line 4020 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 741 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_HOUR}; }
#line 4026 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 742 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_MINUTE}; }
#line 4032 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 743 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_SECOND}; }
#line 4038 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 744 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_YEAR_TO_MONTH}; }
#line 4044 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 745 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_DAY_TO_HOUR}; }
#line 4050 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 746 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_DAY_TO_MINUTE}; }
#line 4056 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 747 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_DAY_TO_SECOND}; }
#line 4062 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 748 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_HOUR_TO_MINUTE}; }
#line 4068 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 749 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_HOUR_TO_SECOND}; }
#line 4074 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 750 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_MINUTE_TO_SECOND}; }
#line 4080 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 752 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[-1].ival); }
#line 4086 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 753 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 4092 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 755 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 4098 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 756 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 4104 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 757 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 4110 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 759 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraints_t) = (yyvsp[0].column_constraints_t); }
#line 4116 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 760 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraints_t) = new ColumnConstraints(); }
#line 4122 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 762 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
}
#line 4131 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 766 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-1].column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4140 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 770 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyval.column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
}
#line 4150 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 775 "bison_parser.y" /* yacc.c:1646  */
    {
  // Multiple foreign keys for the same column could be possible, so we do not raise an error in that case.
  // Think of foreign keys referenced on multiple levels (returned item references sold item references items).
  (yyvsp[-1].column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyvsp[-1].column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4162 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 783 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 4168 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 784 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 4174 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 785 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 4180 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 786 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 4186 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 788 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 4192 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 789 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 4198 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 790 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_constraint_t) = new ForeignKeyConstraint((yyvsp[-2].str_vec), (yyvsp[0].references_spec_t)); }
#line 4204 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 792 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.references_spec_t) = new ReferencesSpecification((yyvsp[-1].table_name).schema, (yyvsp[-1].table_name).name, (yyvsp[0].str_vec)); }
#line 4210 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 800 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4221 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 806 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4232 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 812 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 4242 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 818 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 4252 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 824 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 4258 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 825 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 4264 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 832 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4274 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 838 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4280 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 840 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4289 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 850 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4300 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 857 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4310 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 868 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4322 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 875 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4334 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 883 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4340 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 884 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = nullptr; }
#line 4346 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 891 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4357 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 898 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4366 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 902 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4375 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 907 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4385 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 917 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4394 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 921 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4403 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 925 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-4].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
}
#line 4419 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 939 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4425 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 940 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4438 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 949 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4444 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 950 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4450 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 952 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->order = (yyvsp[-2].order_vec);

  // Limit could have been set by TOP.
  if ((yyvsp[-1].limit)) {
    delete (yyval.select_stmt)->limit;
    (yyval.select_stmt)->limit = (yyvsp[-1].limit);
  }

  if ((yyvsp[0].locking_clause_vec)) {
    (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
  }
}
#line 4469 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 966 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-5].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-4].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-2].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[-1].limit);
  (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
}
#line 4485 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 978 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4494 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 983 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4503 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 987 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4512 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 991 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4521 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 996 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 4527 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 997 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 4533 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 999 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4547 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1009 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 4553 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1010 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 4559 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1014 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 4565 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1015 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = nullptr; }
#line 4571 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1017 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 4577 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1019 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 4583 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1020 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 4589 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1022 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4599 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1027 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.group_t) = nullptr; }
#line 4605 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1029 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 4611 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1030 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 4617 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1032 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4623 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1033 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = nullptr; }
#line 4629 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1035 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4638 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1039 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4647 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1044 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order) = new OrderDescription((yyvsp[-1].order_type), (yyvsp[-2].expr), (yyvsp[0].null_ordering_t)); }
#line 4653 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1046 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 4659 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1047 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderDesc; }
#line 4665 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1048 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 4671 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1050 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.null_ordering_t) = NullOrdering::Undefined; }
#line 4677 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1051 "bison_parser.y" /* yacc.c:1646  */
    {
  auto null_ordering = NullOrdering::Undefined;
  if (strcasecmp((yyvsp[-1].sval), "nulls") == 0) {
    if (strcasecmp((yyvsp[0].sval), "first") == 0) {
      null_ordering = NullOrdering::First;
    } else if (strcasecmp((yyvsp[0].sval), "last") == 0) {
      null_ordering = NullOrdering::Last;
    }
  }
  free((yyvsp[-1].sval));
  free((yyvsp[0].sval));

  if (null_ordering == NullOrdering::Undefined) {
    yyerror(&yyloc, result, scanner, "Expected NULLS FIRST or NULLS LAST ordering.");
    YYERROR;
  }

  (yyval.null_ordering_t) = null_ordering;
}
#line 4701 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1073 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4707 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1074 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 4713 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1076 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4719 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1077 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4725 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1078 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4731 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1079 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4737 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1080 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4743 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1081 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 4749 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1086 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4758 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1090 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4767 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1096 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4773 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1097 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 4779 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1099 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4788 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1103 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4797 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1108 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t));
}
#line 4805 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1112 "bison_parser.y" /* yacc.c:1646  */
    {
  if ((yyvsp[0].expr)->type == ExprType::kExprParameter) {
    delete (yyvsp[0].expr);
    yyerror(&yyloc, result, scanner, "Parameter ? is not a valid literal.");
    YYERROR;
  }
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4818 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1120 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4824 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1121 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4830 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1123 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = (yyvsp[0].alias_t)->name;
    (yyvsp[0].alias_t)->name = nullptr;
    delete (yyvsp[0].alias_t);
  }
}
#line 4843 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1134 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 4849 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1136 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4857 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1142 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4863 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1143 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4869 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1144 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4875 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1145 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4881 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1146 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4887 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1148 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4893 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1149 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4899 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1150 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4905 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1151 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4911 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1152 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4917 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1153 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4923 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1154 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4929 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1155 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4935 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1156 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4941 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1157 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4947 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1159 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4953 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1160 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4959 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1162 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4965 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1163 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4971 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1164 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4977 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1165 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4983 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1169 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4989 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1170 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4995 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1171 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 5001 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1172 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 5007 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1174 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 5013 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1175 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 5019 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1177 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 5025 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1178 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 5031 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1180 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 5037 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1181 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 5043 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1182 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 5049 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1183 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 5055 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1184 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 5061 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1185 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 5067 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1186 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 5073 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1190 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 5079 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1191 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 5085 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1192 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), (yyvsp[-5].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 5091 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1193 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-7].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 5097 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1197 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.window_description) = new WindowDescription((yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 5103 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1198 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.window_description) = nullptr; }
#line 5109 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1200 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 5115 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1201 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 5121 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1206 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), new FrameBound{0, kCurrentRow, false}}; }
#line 5127 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1207 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 5133 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1208 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.frame_description) = new FrameDescription{kRange, new FrameBound{0, kPreceding, true}, new FrameBound{0, kCurrentRow, false}};
}
#line 5141 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1212 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_type) = kRange; }
#line 5147 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1213 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_type) = kRows; }
#line 5153 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1214 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_type) = kGroups; }
#line 5159 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1216 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 5165 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1217 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 5171 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1218 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 5177 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1219 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 5183 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1220 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 5189 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1222 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 5195 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1224 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 5201 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1226 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 5207 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1227 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 5213 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1228 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 5219 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1229 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 5225 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1230 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 5231 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1231 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 5237 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1232 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kIntervalYearToMonth; }
#line 5243 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1233 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kIntervalDayToHour; }
#line 5249 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1234 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kIntervalDayToMinute; }
#line 5255 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1235 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kIntervalDayToSecond; }
#line 5261 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1236 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kIntervalHourToMinute; }
#line 5267 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1237 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kIntervalHourToSecond; }
#line 5273 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1238 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kIntervalMinuteToSecond; }
#line 5279 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1240 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 5285 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1241 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 5291 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1242 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 5297 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1243 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 5303 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1244 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 5309 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1245 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 5315 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1249 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 5321 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1251 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 5327 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1253 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 5333 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1254 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeBetween((yyvsp[-5].expr), (yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 5339 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1256 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 5345 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1257 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 5351 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1258 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar(); }
#line 5357 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1259 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 5363 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1263 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 5369 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1265 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 5375 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1266 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 5381 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1268 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 5387 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1271 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5393 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1273 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5399 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1275 "bison_parser.y" /* yacc.c:1646  */
    {
  int day{0}, month{0}, year{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%4d-%2d-%2d%n", &day, &month, &year, &chars_parsed) != 3 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect date format. Expected format: YYYY-MM-DD");
    YYERROR;
  }
  (yyval.expr) = Expr::makeDateLiteral((yyvsp[0].sval));
}
#line 5414 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1286 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].ival), (yyvsp[0].datetime_field)); }
#line 5420 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1287 "bison_parser.y" /* yacc.c:1646  */
    {
  int duration{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[-1].sval), "%d%n", &duration, &chars_parsed) == 1 && (yyvsp[-1].sval)[chars_parsed] == 0) {
    free((yyvsp[-1].sval));
    (yyval.expr) = Expr::makeIntervalLiteral(duration, (yyvsp[0].datetime_field));
  }
  else {
    (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].sval), (yyvsp[0].datetime_field));
  }
}
#line 5436 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1298 "bison_parser.y" /* yacc.c:1646  */
    {
  int duration{0}, chars_parsed{0};
  // 'seconds' and 'minutes' are the longest accepted interval qualifiers (7 chars) + null byte
  char unit_string[8];
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%d %7s%n", &duration, unit_string, &chars_parsed) != 2 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER INTERVAL_QUALIIFIER");
    YYERROR;
  }
  free((yyvsp[0].sval));

  DatetimeField unit;
  if (strcasecmp(unit_string, "second") == 0 || strcasecmp(unit_string, "seconds") == 0) {
    unit = kDatetimeSecond;
  } else if (strcasecmp(unit_string, "minute") == 0 || strcasecmp(unit_string, "minutes") == 0) {
    unit = kDatetimeMinute;
  } else if (strcasecmp(unit_string, "hour") == 0 || strcasecmp(unit_string, "hours") == 0) {
    unit = kDatetimeHour;
  } else if (strcasecmp(unit_string, "day") == 0 || strcasecmp(unit_string, "days") == 0) {
    unit = kDatetimeDay;
  } else if (strcasecmp(unit_string, "month") == 0 || strcasecmp(unit_string, "months") == 0) {
    unit = kDatetimeMonth;
  } else if (strcasecmp(unit_string, "year") == 0 || strcasecmp(unit_string, "years") == 0) {
    unit = kDatetimeYear;
  } else {
    yyerror(&yyloc, result, scanner, "Interval qualifier is unknown.");
    YYERROR;
  }
  (yyval.expr) = Expr::makeIntervalLiteral(duration, unit);
}
#line 5472 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1330 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5482 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1339 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5493 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1348 "bison_parser.y" /* yacc.c:1646  */
    {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5504 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1354 "bison_parser.y" /* yacc.c:1646  */
    {
  auto tbl = new TableRef(kTableFunction);
  tbl->name = (yyvsp[-3].sval);
  tbl->exprList = new std::vector<Expr*>();
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5516 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1361 "bison_parser.y" /* yacc.c:1646  */
    {
  auto tbl = new TableRef(kTableFunction);
  tbl->name = (yyvsp[-4].sval);
  tbl->exprList = (yyvsp[-2].expr_vec);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5528 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1368 "bison_parser.y" /* yacc.c:1646  */
    {
  auto tbl = new TableRef(kTableFunction);
  tbl->schema = (yyvsp[-5].sval);
  tbl->name = (yyvsp[-3].sval);
  tbl->exprList = new std::vector<Expr*>();
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5541 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1376 "bison_parser.y" /* yacc.c:1646  */
    {
  auto tbl = new TableRef(kTableFunction);
  tbl->schema = (yyvsp[-6].sval);
  tbl->name = (yyvsp[-4].sval);
  tbl->exprList = (yyvsp[-2].expr_vec);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5554 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1385 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5563 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1389 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5572 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1394 "bison_parser.y" /* yacc.c:1646  */
    {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5584 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1402 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5594 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1408 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5603 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1412 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5612 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1417 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 5618 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1418 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = nullptr; }
#line 5624 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1420 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5630 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1422 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 5636 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1424 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5642 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1425 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5648 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1427 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 5654 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1433 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5660 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1434 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.locking_clause_vec) = nullptr; }
#line 5666 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1436 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5675 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1440 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5684 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1445 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5695 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1451 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5706 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1458 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5712 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1459 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5718 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1460 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5724 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1461 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5730 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1463 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5736 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1464 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5742 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1465 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5748 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1471 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.with_description_vec) = nullptr; }
#line 5754 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 1473 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5760 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 1475 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5769 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 1479 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5778 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 1484 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5788 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 1494 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5800 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 1501 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5813 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 1509 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  (yyval.table)->join->namedColumns = (yyvsp[-1].str_vec);
}
#line 5826 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 1518 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinInner; }
#line 5832 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 1519 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinLeft; }
#line 5838 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 1520 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinLeft; }
#line 5844 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 1521 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinRight; }
#line 5850 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 1522 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinRight; }
#line 5856 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 1523 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 5862 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 1524 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 5868 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 1525 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 5874 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 1526 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinCross; }
#line 5880 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 1527 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinInner; }
#line 5886 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 1538 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5895 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 1542 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5904 "bison_parser.cpp" /* yacc.c:1646  */
    break;


#line 5908 "bison_parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1548 "bison_parser.y" /* yacc.c:1906  */


/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

    // clang-format on
