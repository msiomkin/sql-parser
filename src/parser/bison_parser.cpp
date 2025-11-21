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
    SQL_DISTINCT = 267,
    SQL_NVARCHAR = 268,
    SQL_RESTRICT = 269,
    SQL_TRUNCATE = 270,
    SQL_ANALYZE = 271,
    SQL_BETWEEN = 272,
    SQL_CASCADE = 273,
    SQL_COLUMNS = 274,
    SQL_CONTROL = 275,
    SQL_DEFAULT = 276,
    SQL_EXECUTE = 277,
    SQL_EXPLAIN = 278,
    SQL_ENCODING = 279,
    SQL_INTEGER = 280,
    SQL_NATURAL = 281,
    SQL_PREPARE = 282,
    SQL_SCHEMAS = 283,
    SQL_CHARACTER_VARYING = 284,
    SQL_REAL = 285,
    SQL_DECIMAL = 286,
    SQL_SMALLINT = 287,
    SQL_BIGINT = 288,
    SQL_SPATIAL = 289,
    SQL_VARCHAR = 290,
    SQL_VIRTUAL = 291,
    SQL_DESCRIBE = 292,
    SQL_BEFORE = 293,
    SQL_COLUMN = 294,
    SQL_CREATE = 295,
    SQL_DELETE = 296,
    SQL_DIRECT = 297,
    SQL_DOUBLE = 298,
    SQL_ESCAPE = 299,
    SQL_EXCEPT = 300,
    SQL_EXISTS = 301,
    SQL_EXTRACT = 302,
    SQL_CAST = 303,
    SQL_FORMAT = 304,
    SQL_GLOBAL = 305,
    SQL_HAVING = 306,
    SQL_IMPORT = 307,
    SQL_INSERT = 308,
    SQL_ISNULL = 309,
    SQL_OFFSET = 310,
    SQL_RENAME = 311,
    SQL_SCHEMA = 312,
    SQL_SELECT = 313,
    SQL_SORTED = 314,
    SQL_TABLES = 315,
    SQL_UNLOAD = 316,
    SQL_UPDATE = 317,
    SQL_VALUES = 318,
    SQL_AFTER = 319,
    SQL_ALTER = 320,
    SQL_CROSS = 321,
    SQL_DELTA = 322,
    SQL_FLOAT = 323,
    SQL_GROUP = 324,
    SQL_INDEX = 325,
    SQL_INNER = 326,
    SQL_LIMIT = 327,
    SQL_LOCAL = 328,
    SQL_MERGE = 329,
    SQL_MINUS = 330,
    SQL_ORDER = 331,
    SQL_OVER = 332,
    SQL_OUTER = 333,
    SQL_RIGHT = 334,
    SQL_TABLE = 335,
    SQL_UNION = 336,
    SQL_USING = 337,
    SQL_WHERE = 338,
    SQL_CALL = 339,
    SQL_CASE = 340,
    SQL_CHAR = 341,
    SQL_COPY = 342,
    SQL_DATE = 343,
    SQL_DATETIME = 344,
    SQL_DESC = 345,
    SQL_DROP = 346,
    SQL_ELSE = 347,
    SQL_FILE = 348,
    SQL_FROM = 349,
    SQL_FULL = 350,
    SQL_HASH = 351,
    SQL_HINT = 352,
    SQL_INTO = 353,
    SQL_JOIN = 354,
    SQL_LEFT = 355,
    SQL_LIKE = 356,
    SQL_LOAD = 357,
    SQL_LONG = 358,
    SQL_NULL = 359,
    SQL_PARTITION = 360,
    SQL_PLAN = 361,
    SQL_SHOW = 362,
    SQL_TEXT = 363,
    SQL_THEN = 364,
    SQL_TIME = 365,
    SQL_VIEW = 366,
    SQL_WHEN = 367,
    SQL_WITH = 368,
    SQL_ADD = 369,
    SQL_ALL = 370,
    SQL_AND = 371,
    SQL_ASC = 372,
    SQL_END = 373,
    SQL_FOR = 374,
    SQL_INT = 375,
    SQL_NOT = 376,
    SQL_OFF = 377,
    SQL_SET = 378,
    SQL_TOP = 379,
    SQL_AS = 380,
    SQL_BY = 381,
    SQL_IF = 382,
    SQL_IN = 383,
    SQL_IS = 384,
    SQL_OF = 385,
    SQL_ON = 386,
    SQL_OR = 387,
    SQL_TO = 388,
    SQL_NO = 389,
    SQL_ARRAY = 390,
    SQL_CONCAT = 391,
    SQL_ILIKE = 392,
    SQL_SECOND = 393,
    SQL_MINUTE = 394,
    SQL_HOUR = 395,
    SQL_DAY = 396,
    SQL_MONTH = 397,
    SQL_YEAR = 398,
    SQL_SECONDS = 399,
    SQL_MINUTES = 400,
    SQL_HOURS = 401,
    SQL_DAYS = 402,
    SQL_MONTHS = 403,
    SQL_YEARS = 404,
    SQL_INTERVAL = 405,
    SQL_TRUE = 406,
    SQL_FALSE = 407,
    SQL_BOOLEAN = 408,
    SQL_TRANSACTION = 409,
    SQL_BEGIN = 410,
    SQL_COMMIT = 411,
    SQL_ROLLBACK = 412,
    SQL_NOWAIT = 413,
    SQL_SKIP = 414,
    SQL_LOCKED = 415,
    SQL_SHARE = 416,
    SQL_RANGE = 417,
    SQL_ROWS = 418,
    SQL_GROUPS = 419,
    SQL_UNBOUNDED = 420,
    SQL_FOLLOWING = 421,
    SQL_PRECEDING = 422,
    SQL_CURRENT_ROW = 423,
    SQL_UNIQUE = 424,
    SQL_PRIMARY = 425,
    SQL_FOREIGN = 426,
    SQL_KEY = 427,
    SQL_REFERENCES = 428,
    SQL_EQUALS = 429,
    SQL_NOTEQUALS = 430,
    SQL_LESS = 431,
    SQL_GREATER = 432,
    SQL_LESSEQ = 433,
    SQL_GREATEREQ = 434,
    SQL_NOTNULL = 435,
    SQL_UMINUS = 436
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

#line 435 "bison_parser.cpp" /* yacc.c:355  */
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

#line 465 "bison_parser.cpp" /* yacc.c:358  */

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
#define YYLAST   985

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  199
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  378
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  689

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   436

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   188,     2,     2,
     193,   194,   186,   184,   197,   185,   195,   187,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   196,
     177,   174,   178,   198,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   191,     2,   192,   189,     2,     2,     2,     2,     2,
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
     165,   166,   167,   168,   169,   170,   171,   172,   173,   175,
     176,   179,   180,   181,   182,   183,   190
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
     739,   740,   741,   742,   743,   744,   745,   746,   748,   749,
     751,   752,   753,   755,   756,   758,   762,   766,   771,   779,
     780,   781,   782,   784,   785,   786,   788,   796,   802,   808,
     814,   820,   821,   828,   834,   836,   846,   853,   864,   871,
     879,   880,   887,   894,   898,   903,   913,   917,   921,   933,
     933,   935,   936,   945,   946,   948,   962,   974,   979,   983,
     987,   992,   993,   995,  1005,  1006,  1008,  1010,  1011,  1013,
    1015,  1016,  1018,  1023,  1025,  1026,  1028,  1029,  1031,  1035,
    1040,  1042,  1043,  1044,  1046,  1047,  1069,  1070,  1072,  1073,
    1074,  1075,  1076,  1077,  1082,  1086,  1092,  1093,  1095,  1099,
    1104,  1104,  1108,  1116,  1117,  1119,  1128,  1128,  1128,  1128,
    1128,  1130,  1131,  1131,  1131,  1131,  1131,  1131,  1131,  1131,
    1132,  1132,  1136,  1136,  1138,  1139,  1140,  1141,  1142,  1144,
    1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,
    1155,  1156,  1158,  1159,  1160,  1161,  1165,  1166,  1167,  1168,
    1170,  1171,  1173,  1174,  1176,  1177,  1178,  1179,  1180,  1181,
    1182,  1186,  1187,  1188,  1189,  1193,  1194,  1196,  1197,  1202,
    1203,  1204,  1208,  1209,  1210,  1212,  1213,  1214,  1215,  1216,
    1218,  1220,  1222,  1223,  1224,  1225,  1226,  1227,  1228,  1229,
    1230,  1231,  1232,  1233,  1234,  1236,  1237,  1238,  1239,  1240,
    1241,  1243,  1243,  1245,  1247,  1249,  1250,  1252,  1253,  1254,
    1255,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1259,  1261,
    1262,  1264,  1265,  1267,  1269,  1271,  1282,  1283,  1294,  1326,
    1335,  1335,  1342,  1342,  1344,  1344,  1351,  1355,  1360,  1368,
    1374,  1378,  1383,  1384,  1386,  1386,  1388,  1388,  1390,  1391,
    1393,  1393,  1399,  1400,  1402,  1406,  1411,  1417,  1424,  1425,
    1426,  1427,  1429,  1430,  1431,  1437,  1437,  1439,  1441,  1445,
    1450,  1460,  1467,  1475,  1484,  1485,  1486,  1487,  1488,  1489,
    1490,  1491,  1492,  1493,  1495,  1501,  1501,  1504,  1508
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT", "TEMPORARY",
  "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE", "ANALYZE",
  "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE",
  "EXPLAIN", "ENCODING", "INTEGER", "NATURAL", "PREPARE", "SCHEMAS",
  "CHARACTER_VARYING", "REAL", "DECIMAL", "SMALLINT", "BIGINT", "SPATIAL",
  "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN", "CREATE", "DELETE",
  "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT", "CAST",
  "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET",
  "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES", "UNLOAD", "UPDATE",
  "VALUES", "AFTER", "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX",
  "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER", "OVER", "OUTER",
  "RIGHT", "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR",
  "COPY", "DATE", "DATETIME", "DESC", "DROP", "ELSE", "FILE", "FROM",
  "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG",
  "NULL", "PARTITION", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW",
  "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT", "NOT",
  "OFF", "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR",
  "TO", "NO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR",
  "DAY", "MONTH", "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS", "MONTHS",
  "YEARS", "INTERVAL", "TRUE", "FALSE", "BOOLEAN", "TRANSACTION", "BEGIN",
  "COMMIT", "ROLLBACK", "NOWAIT", "SKIP", "LOCKED", "SHARE", "RANGE",
  "ROWS", "GROUPS", "UNBOUNDED", "FOLLOWING", "PRECEDING", "CURRENT_ROW",
  "UNIQUE", "PRIMARY", "FOREIGN", "KEY", "REFERENCES", "'='", "EQUALS",
  "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ",
  "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['",
  "']'", "'('", "')'", "'.'", "';'", "','", "'?'", "$accept", "input",
  "statement_list", "statement", "preparable_statement", "opt_hints",
  "hint_list", "hint", "transaction_statement", "opt_transaction_keyword",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "file_type", "file_path",
  "opt_import_export_options", "import_export_options", "csv_option",
  "export_statement", "show_statement", "create_statement",
  "opt_not_exists", "table_elem_commalist", "table_elem", "column_def",
  "column_type", "opt_time_precision", "opt_decimal_specification",
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
     425,   426,   427,   428,    61,   429,   430,    60,    62,   431,
     432,   433,   434,   435,    43,    45,    42,    47,    37,    94,
     436,    91,    93,    40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF -615

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-615)))

#define YYTABLE_NINF -376

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-376)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     663,    37,    83,   104,   108,    83,   -15,    53,    98,    39,
      83,    80,    20,    35,   124,   164,    44,    44,    44,   210,
      10,  -615,   106,  -615,   106,  -615,  -615,  -615,  -615,  -615,
    -615,  -615,  -615,  -615,  -615,  -615,  -615,   -14,  -615,   247,
      64,  -615,    55,   169,  -615,   182,   182,   182,    83,   315,
      83,   199,  -615,   220,   -14,   224,   178,   220,   220,   220,
      83,  -615,   228,   162,  -615,  -615,  -615,  -615,  -615,  -615,
     646,  -615,   267,  -615,  -615,   248,    52,  -615,   240,  -615,
     379,    66,   402,   317,   418,    83,    83,   360,  -615,   353,
     290,   457,   435,    83,   313,   318,   505,   505,   505,   512,
      83,    83,  -615,   330,   164,  -615,   337,   526,   522,  -615,
    -615,  -615,   -14,   424,   420,   -14,    22,  -615,  -615,  -615,
     429,   354,   544,  -615,   545,  -615,  -615,    36,  -615,   356,
     357,  -615,  -615,  -615,  -615,  -615,  -615,  -615,  -615,  -615,
    -615,  -615,  -615,  -615,   509,  -615,   425,   -38,   290,   340,
    -615,   505,   548,   236,   383,   -31,  -615,  -615,   468,  -615,
    -615,  -615,   -55,   -55,   -55,  -615,  -615,  -615,  -615,  -615,
     560,  -615,  -615,  -615,   340,   489,  -615,  -615,    52,  -615,
    -615,   340,   489,   340,   198,   460,  -615,   447,   452,   453,
    -615,   454,  -615,  -615,  -615,  -615,  -615,  -615,  -615,  -615,
    -615,    84,  -615,   326,  -615,  -615,  -615,    66,  -615,    83,
     585,   477,    24,   469,  -113,   400,   404,   405,   177,   410,
     411,   431,  -615,   320,   -41,   463,  -615,  -615,  -615,  -615,
    -615,  -615,  -615,  -615,  -615,  -615,  -615,  -615,  -615,  -615,
    -615,  -615,   503,  -615,    99,   412,  -615,   340,   457,  -615,
     565,  -615,  -615,   413,    54,  -615,   360,  -615,   414,   103,
    -615,   515,   415,  -615,    43,    22,   -14,   416,  -615,   136,
      22,   -41,   555,    96,   123,  -615,   460,  -615,   473,   273,
     293,   472,   490,  -615,  -615,   426,   525,  -615,   736,   427,
     449,   450,   206,  -615,  -615,  -615,   477,    13,    23,   567,
     326,   340,   340,   239,   196,   430,   431,   706,   340,   151,
     432,   -53,   340,   340,   431,  -615,   431,    34,   434,   134,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   526,    83,  -615,   625,    66,
     -41,  -615,   220,    54,   626,   627,   315,   628,   213,  -615,
    -615,    66,  -615,   560,    21,   360,  -615,   340,  -615,   630,
    -615,  -615,  -615,  -615,   340,  -615,  -615,   631,   460,   340,
     340,  -615,   464,  -615,   474,   146,  -615,  -615,  -615,  -615,
    -615,  -615,  -615,  -615,   736,   548,   505,  -615,  -615,   462,
    -615,   465,  -615,  -615,   466,  -615,  -615,   470,  -615,  -615,
    -615,  -615,   471,  -615,   361,  -615,   137,   548,   476,   478,
    -615,    24,  -615,   566,   340,   479,  -615,   448,   562,   249,
     260,   242,   340,   340,  -615,   567,   556,   144,  -615,  -615,
    -615,   546,   606,   774,   431,   431,   481,   320,  -615,   561,
     475,   774,   774,   774,   774,   794,   794,   794,   794,   151,
     151,   141,   141,   141,   -60,   483,  -615,  -615,   225,   664,
     226,  -615,  -615,  -615,  -615,  -615,    57,   232,  -615,   477,
    -615,    78,  -615,   480,  -615,    40,  -615,   607,  -615,  -615,
    -615,   676,  -615,  -615,   -41,   -41,   618,  -615,   548,  -615,
     521,  -615,   488,   233,  -615,   678,   682,  -615,   683,   685,
     686,  -615,  -615,   563,   564,   568,  -615,   569,  -615,   589,
    -615,   523,    83,  -615,   137,  -615,  -615,   245,   548,   548,
    -615,   501,  -615,   251,    17,  -615,   340,   736,   340,   340,
    -615,   277,   285,   511,  -615,   431,   731,   774,   320,   516,
     253,  -615,  -615,  -615,  -615,  -615,   702,   315,  -615,  -615,
     518,   610,  -615,  -615,  -615,   635,   636,   639,   619,    21,
     716,  -615,  -615,  -615,   594,  -615,  -615,  -615,   120,  -615,
    -615,  -615,   527,   257,   529,   530,   532,   591,   314,   349,
     588,  -615,  -615,   290,  -615,  -615,  -615,   265,   279,   629,
     566,   566,   340,    73,   537,   -41,   286,  -615,   340,  -615,
     706,   431,   538,   280,  -615,  -615,  -615,  -615,    40,    21,
    -615,  -615,  -615,    21,   161,   543,   340,  -615,  -615,  -615,
     732,  -615,  -615,  -615,  -615,  -615,  -615,  -615,  -615,  -615,
    -615,  -615,  -615,   571,   613,   489,  -615,  -615,   288,  -615,
    -615,  -615,   -41,   706,  -615,  -615,  -615,  -615,   458,   548,
     -21,   547,  -615,   340,   358,   566,   552,   340,   299,   340,
    -615,  -615,   415,  -615,  -615,  -615,   554,    31,  -615,   548,
     -41,  -615,  -615,   -41,  -615,   223,    32,   375,  -615,  -615,
     300,  -615,  -615,   624,  -615,  -615,  -615,    32,  -615
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     356,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     376,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   355,     0,
     330,   127,    33,     0,    54,    61,    61,    61,     0,     0,
       0,     0,   329,   122,     0,     0,     0,   122,   122,   122,
       0,    52,     0,   357,   358,    29,    26,    28,    27,     1,
     356,     2,     0,     6,     5,   177,   136,   137,   167,   119,
       0,   187,     0,     0,   333,     0,     0,   161,    37,     0,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,     4,     0,     0,   155,   149,
     150,   148,     0,   152,     0,     0,   183,   331,   308,   311,
     313,     0,     0,   314,     0,   309,   310,     0,   319,     0,
     186,   188,   190,   192,   301,   302,   303,   312,   304,   305,
     306,   307,    32,    31,     0,   332,     0,     0,   131,     0,
     126,     0,     0,     0,     0,   161,   133,   121,     0,   144,
     143,    38,    41,    41,    41,   120,   117,   118,   360,   359,
       0,   313,   176,   154,     0,   167,   140,   139,   141,   151,
     147,     0,   167,     0,     0,   343,   272,   273,   274,   275,
     276,   277,   285,   286,   287,   288,   289,   290,   291,   292,
     316,     0,   315,   318,   193,   194,    34,     0,    60,     0,
       0,   356,     0,     0,   297,     0,     0,     0,     0,     0,
       0,     0,   299,     0,   160,   196,   203,   204,   205,   198,
     200,   206,   199,   219,   207,   208,   209,   210,   202,   197,
     212,   213,     0,   377,     0,     0,   129,     0,     0,   132,
       0,   123,   124,     0,     0,    51,   161,    50,    24,     0,
      22,   158,   156,   184,   341,   183,     0,   166,   168,   173,
     183,   179,   181,   178,     0,   145,   342,   344,     0,     0,
       0,     0,     0,   317,   189,     0,     0,    57,     0,     0,
       0,     0,     0,    62,    64,    65,   356,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   215,     0,   214,
       0,     0,     0,     0,     0,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,     0,     0,
     135,   134,   122,     0,     0,     0,     0,     0,     0,    47,
      36,     0,    20,     0,     0,   161,   157,     0,   339,     0,
     340,   195,   138,   142,     0,   172,   171,   174,   343,     0,
       0,   348,     0,   350,     0,   354,   345,   284,   283,   282,
     281,   280,   279,   278,     0,     0,     0,    83,    77,     0,
      79,   102,    80,    67,     0,    74,    75,     0,    71,    72,
      78,    81,    99,    76,     0,    68,   104,     0,     0,     0,
      56,     0,    59,   256,     0,   298,   300,     0,     0,     0,
       0,     0,     0,     0,   238,     0,     0,     0,   211,   201,
     230,   231,     0,   226,     0,     0,     0,     0,   217,     0,
     229,   228,   244,   245,   246,   247,   248,   249,   250,   221,
     220,   223,   222,   224,   225,     0,    35,   378,     0,     0,
       0,    48,    45,    43,    49,    40,     0,     0,    23,   356,
     159,   320,   322,     0,   324,   337,   323,   163,   185,   338,
     169,     0,   170,   146,   182,   180,     0,   351,     0,   353,
       0,   346,     0,     0,    55,     0,     0,    73,     0,     0,
       0,    82,    90,    89,    88,    87,    86,    85,   111,     0,
     110,     0,     0,    66,   103,   105,   107,     0,     0,     0,
      63,     0,   251,     0,   155,   242,     0,     0,     0,     0,
     236,     0,     0,     0,   293,     0,     0,   227,     0,     0,
       0,   218,   294,   128,   125,    39,     0,     0,    46,    25,
       0,     0,   372,   364,   370,   368,   371,   366,     0,     0,
       0,   336,   328,   334,     0,   153,   175,   349,   354,   352,
     191,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,   109,   131,   106,   108,   114,     0,     0,   258,
     256,   256,     0,     0,     0,   240,     0,   239,     0,   243,
     295,     0,     0,     0,   234,   232,    44,    42,   337,     0,
     367,   369,   365,     0,   321,   338,     0,   347,    70,   101,
       0,    84,    69,    98,    97,    96,    95,    94,    93,    92,
      91,   116,   113,     0,     0,   167,   252,   253,     0,   270,
     271,   237,   241,   296,   235,   233,   325,   361,   373,     0,
     165,     0,   115,     0,   261,   256,     0,     0,     0,     0,
     162,   100,   257,   262,   263,   264,     0,     0,   254,     0,
     374,   362,   335,   164,   255,     0,     0,     0,   269,   259,
       0,   268,   266,     0,   267,   265,   363,     0,   260
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -615,  -615,  -615,   679,  -615,   722,  -615,   398,  -615,   381,
    -615,  -615,  -615,  -615,  -325,   -85,   364,   409,   289,  -615,
    -615,  -615,   497,  -615,   345,  -615,  -353,  -615,  -615,  -615,
    -615,   243,  -615,  -464,  -615,   -39,  -615,  -615,  -615,  -615,
    -615,  -615,  -143,  -615,  -615,   510,  -203,   -75,  -615,   217,
     -52,   -33,  -615,  -615,   -76,  -281,  -615,  -615,  -615,  -122,
    -615,  -615,  -172,  -615,   399,  -615,  -615,  -615,    91,  -301,
    -615,  -256,   557,   572,   417,  -149,  -204,  -615,  -615,  -615,
    -615,  -615,  -615,   459,  -615,  -615,  -615,  -523,  -615,  -615,
    -615,  -614,  -615,  -615,  -150,  -615,  -615,  -615,  -615,  -615,
    -615,   -59,  -615,  -615,   645,   -93,  -615,  -615,   648,  -615,
    -615,  -505,   168,  -615,  -615,  -615,    -1,  -615,  -615,   170,
     534,  -615,   421,  -615,   520,  -615,   218,  -615,  -615,  -615,
     695,  -615,  -615,  -615,  -615,  -379
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    73,   259,   260,    23,    66,
      24,   143,    25,    26,    89,   162,   255,   348,   349,    27,
      28,    29,    84,   292,   293,   294,   406,   501,   497,   513,
     514,   515,   295,   516,    30,    93,    31,   251,   252,    32,
      33,    34,   153,    35,   155,   156,    36,   175,   176,   177,
      77,   112,   113,   180,    78,   174,   261,   355,   356,   150,
     565,   660,   116,   267,   268,   367,   482,   108,   185,   262,
     129,   130,   131,   132,   263,   264,   225,   226,   227,   228,
     229,   230,   231,   304,   232,   233,   234,   522,   635,   666,
     667,   679,   235,   236,   198,   199,   200,   237,   238,   239,
     240,   241,   134,   135,   136,   137,   138,   139,   140,   141,
     470,   471,   472,   473,   474,    51,   475,   146,   561,   562,
     563,   361,   275,   276,   277,   375,   491,    37,    38,    63,
      64,   476,   558,   671,    71,   244
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     224,    41,    95,   265,    44,   213,   493,   427,   287,    52,
     270,    56,   163,   164,   172,   307,   414,   309,    99,   100,
     101,   463,   133,    40,    40,   173,   415,   288,   517,   173,
     659,   492,   269,   249,   271,   273,   178,   675,   675,   178,
     182,   119,   120,   358,    75,   115,   358,    87,   676,    90,
     585,   434,   149,   283,   614,    45,   210,   344,   253,   102,
     344,   109,   683,   312,    39,    46,   242,   636,   637,   303,
     118,   119,   120,   688,   311,   312,   320,   183,   345,   313,
     297,   546,   298,   458,   147,   148,    40,   211,   118,   119,
     120,   313,   158,   412,   184,   467,    47,   110,   340,   166,
     167,   246,   307,   346,   551,    57,   547,    42,   648,   568,
     432,    43,   433,   523,   121,    58,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   335,   668,   111,   350,   435,   540,    50,   254,   587,
     588,   429,   133,    60,   552,   266,    59,    48,   133,   553,
     418,   370,   419,   420,   122,   212,   554,   555,   347,   312,
      53,   347,   436,   430,   431,   560,   248,    62,   359,   652,
     123,   310,   122,   556,   594,   313,   357,  -373,   557,    54,
     214,   118,   119,   120,    61,   371,   124,   551,   123,   312,
     178,   363,    49,   289,   290,   291,   677,   677,    65,   678,
     678,   214,   118,   119,   120,   313,    70,   413,   285,   416,
      69,   591,   312,    54,   469,   269,   124,   125,   126,    72,
     484,   485,   607,   215,   216,   217,   365,   552,   313,    55,
     536,   537,   553,   477,   124,   125,   126,   603,   438,   554,
     555,   508,   455,   592,   215,   216,   217,   417,    81,   109,
      79,   127,   312,   366,    76,   439,   556,   372,   509,    80,
    -373,   557,   218,    82,   128,   122,   550,   639,   313,   127,
     658,    94,    97,   531,   532,  -326,   488,   320,   489,   490,
     133,   123,   128,   218,   373,   110,   122,   320,   422,   302,
     680,   638,   133,   337,    75,   374,   338,   352,   219,   245,
     353,   494,   123,   459,   489,   490,   510,   511,   423,    83,
     512,    98,   220,   272,   424,   650,   114,   338,    88,   219,
     168,   111,    91,   214,   118,   119,   120,   124,   125,   126,
     334,   600,   335,   220,   529,   456,   534,   331,   332,   333,
     334,   357,   335,   214,   118,   119,   120,    92,   124,   125,
     126,   302,   662,   103,   423,   312,   362,    96,  -327,   104,
     530,   368,   221,   222,   106,   312,   215,   216,   217,   528,
     223,   313,   107,   533,   527,   128,   312,   593,    75,   595,
     596,   313,   117,   221,   222,   539,   215,   216,   217,   681,
     682,   223,   313,   312,   598,   597,   128,   643,    67,    68,
     410,   312,   312,   411,   641,   218,   142,   465,   122,   313,
     466,   378,   379,   214,   118,   119,   120,   313,   313,   543,
     545,   145,   207,   466,   123,   218,   549,   571,   122,   207,
     338,   380,   381,   382,   214,   118,   119,   120,   144,   586,
     631,   219,   338,   149,   123,   590,   151,   605,   357,   642,
     357,   619,   625,   626,   620,   220,   305,   216,   217,   632,
     154,   219,   338,   654,   186,   187,   188,   189,   190,   191,
     124,   125,   126,   633,   645,   220,   338,   357,   216,   217,
     314,   157,   655,   152,   551,   357,   602,   627,   628,   629,
     124,   125,   126,   672,   686,   218,   338,   338,   122,   502,
     503,   504,   505,   506,   507,   221,   222,   159,   670,   161,
     673,   583,   160,   223,   123,   165,   218,   315,   128,   122,
     663,   664,   665,    54,   552,   221,   222,   256,   257,   553,
     170,   306,   171,   223,   173,   123,   554,   555,   128,   179,
     656,   684,   685,    85,    86,   220,   181,   201,   202,   203,
     206,   243,   306,   556,   207,   208,   209,   247,   557,   250,
     124,   125,   126,   258,   316,   114,   220,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   274,
     278,   124,   125,   126,   317,   279,   280,   281,   286,   657,
      15,   318,   319,   299,   296,   221,   222,   300,   301,   320,
     321,   336,   308,   223,   342,   339,   343,   351,   128,   354,
     369,   377,   357,   364,   383,   384,   221,   222,   386,   385,
     407,   408,   409,   425,   223,    75,   428,   437,   457,   128,
     461,   462,   464,   479,   481,   487,   486,   322,   323,   324,
     325,   326,   525,   521,   327,   328,  -375,   329,   330,   331,
     332,   333,   334,     1,   335,   495,   526,   435,   496,   498,
     315,     2,   312,   499,   500,   541,   335,   544,     3,   518,
       1,   519,   524,     4,   538,   542,   564,   559,     2,   566,
     567,   569,   570,     5,   572,     3,     6,     7,   573,   574,
       4,   575,   576,   581,   589,   582,   577,   578,     8,     9,
       5,   579,   580,     6,     7,   599,   606,   316,    10,   609,
     604,    11,   608,   610,   611,     8,     9,   612,   613,   615,
     616,   618,   535,   621,   622,    10,   623,   426,    11,   624,
     630,   640,   644,    12,   634,   319,   649,    13,   651,   653,
     687,   661,   320,   321,   512,   669,    74,   387,   674,   105,
      12,   468,   460,    14,    13,   548,   520,   584,   341,    15,
     315,   388,   421,   480,   284,   389,   390,   391,   392,   393,
      14,   394,   204,   282,   478,   205,    15,   647,   646,   395,
     322,   323,   324,   325,   326,   315,   617,   327,   328,   483,
     329,   330,   331,   332,   333,   334,   376,   335,   360,   169,
       0,    16,    17,    18,   396,     0,     0,   316,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
      18,     0,   397,     0,   398,   399,     0,   426,   315,     0,
       0,     0,   316,     0,     0,   319,     0,     0,     0,   400,
       0,     0,   320,   321,   401,     0,   402,   601,   315,     0,
       0,     0,   426,     0,     0,     0,   403,     0,     0,     0,
     319,     0,     0,     0,     0,     0,     0,   320,   321,     0,
       0,     0,     0,     0,     0,  -376,     0,     0,     0,     0,
     322,   323,   324,   325,   326,     0,   404,   327,   328,   405,
     329,   330,   331,   332,   333,   334,     0,   335,     0,     0,
       0,     0,     0,   319,     0,   322,   323,   324,   325,   326,
     320,  -376,   327,   328,     0,   329,   330,   331,   332,   333,
     334,     0,   335,   319,     0,     0,     0,     0,     0,     0,
     320,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -376,  -376,
    -376,   325,   326,     0,     0,   327,   328,     0,   329,   330,
     331,   332,   333,   334,     0,   335,     0,     0,     0,     0,
       0,  -376,  -376,     0,     0,  -376,  -376,     0,   329,   330,
     331,   332,   333,   334,     0,   335
};

static const yytype_int16 yycheck[] =
{
     149,     2,    54,   175,     5,   148,   385,   308,   211,    10,
     182,    12,    97,    98,   107,   219,   297,   221,    57,    58,
      59,   346,    81,     3,     3,    12,     3,     3,   407,    12,
      51,   384,   181,   155,   183,   184,   112,     6,     6,   115,
     115,     5,     6,     3,    58,    78,     3,    48,    17,    50,
     514,    17,    83,   203,   559,    70,    94,     3,   113,    60,
       3,     9,   676,   116,    27,    80,   151,   590,   591,   218,
       4,     5,     6,   687,   223,   116,   136,    55,    24,   132,
     193,    24,   195,   339,    85,    86,     3,   125,     4,     5,
       6,   132,    93,   296,    72,   351,   111,    45,   247,   100,
     101,   153,   306,    49,    26,    70,    49,     3,   613,   488,
     314,     3,   316,   414,    48,    80,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   191,   655,    81,   256,   101,   437,    98,   193,   518,
     519,   194,   201,    19,    66,   178,   111,    94,   207,    71,
     300,    55,   301,   302,    88,   193,    78,    79,   104,   116,
      80,   104,   128,   312,   313,   125,   197,     3,   125,   633,
     104,   223,    88,    95,   527,   132,   197,    99,   100,   193,
       3,     4,     5,     6,    60,    62,   150,    26,   104,   116,
     266,   266,    94,   169,   170,   171,   165,   165,   154,   168,
     168,     3,     4,     5,     6,   132,   196,   194,   209,   186,
       0,   194,   116,   193,   193,   364,   150,   151,   152,   113,
     369,   370,   547,    46,    47,    48,    90,    66,   132,    12,
     434,   435,    71,   355,   150,   151,   152,   538,   104,    78,
      79,   104,   335,   524,    46,    47,    48,   299,   193,     9,
       3,   185,   116,   117,    37,   121,    95,   134,   121,   195,
      99,   100,    85,    94,   198,    88,   469,   194,   132,   185,
     649,    54,    94,   422,   423,   197,   130,   136,   158,   159,
     339,   104,   198,    85,   161,    45,    88,   136,    92,   112,
     669,   592,   351,   194,    58,   172,   197,   194,   121,    63,
     197,   386,   104,   342,   158,   159,   169,   170,   112,   127,
     173,   133,   135,   115,   118,   616,    76,   197,     3,   121,
     103,    81,   123,     3,     4,     5,     6,   150,   151,   152,
     189,   535,   191,   135,    92,   336,   192,   186,   187,   188,
     189,   197,   191,     3,     4,     5,     6,   127,   150,   151,
     152,   112,   653,   125,   112,   116,   265,   133,   197,   197,
     118,   270,   185,   186,    97,   116,    46,    47,    48,   109,
     193,   132,   124,   425,   125,   198,   116,   526,    58,   528,
     529,   132,     3,   185,   186,   437,    46,    47,    48,   166,
     167,   193,   132,   116,   109,   118,   198,   601,    17,    18,
     194,   116,   116,   197,   118,    85,     4,   194,    88,   132,
     197,   138,   139,     3,     4,     5,     6,   132,   132,   194,
     194,     3,   197,   197,   104,    85,   194,   194,    88,   197,
     197,   138,   139,   140,     3,     4,     5,     6,   121,   194,
     583,   121,   197,    83,   104,   194,    93,   194,   197,   598,
     197,   194,   138,   139,   197,   135,    46,    47,    48,   194,
       3,   121,   197,   635,   138,   139,   140,   141,   142,   143,
     150,   151,   152,   194,   194,   135,   197,   197,    47,    48,
      17,    46,   194,   193,    26,   197,   538,   138,   139,   140,
     150,   151,   152,   194,   194,    85,   197,   197,    88,   138,
     139,   140,   141,   142,   143,   185,   186,   194,   657,     4,
     659,   512,   194,   193,   104,     3,    85,    54,   198,    88,
     162,   163,   164,   193,    66,   185,   186,   163,   164,    71,
     193,   121,     6,   193,    12,   104,    78,    79,   198,   115,
      82,   166,   167,    46,    47,   135,   126,   193,     4,     4,
     194,     3,   121,    95,   197,    46,   131,   174,   100,    91,
     150,   151,   152,     3,   101,    76,   135,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   119,
     133,   150,   151,   152,   121,   133,   133,   133,     3,   131,
     113,   128,   129,   193,   125,   185,   186,   193,   193,   136,
     137,    98,   191,   193,    39,   193,   193,   193,   198,    94,
      55,   138,   197,   197,   142,   125,   185,   186,    93,   193,
     193,   172,   172,   193,   193,    58,   194,   193,     3,   198,
       4,     4,     4,     3,     3,   161,   172,   174,   175,   176,
     177,   178,   194,    77,   181,   182,     0,   184,   185,   186,
     187,   188,   189,     7,   191,   193,    94,   101,   193,   193,
      54,    15,   116,   193,   193,   104,   191,     3,    22,   193,
       7,   193,   193,    27,   193,   192,    69,   197,    15,     3,
      62,   160,   194,    37,     6,    22,    40,    41,     6,     6,
      27,     6,     6,   104,   193,   172,   133,   133,    52,    53,
      37,   133,   133,    40,    41,   194,     4,   101,    62,    99,
     194,    65,   194,    78,    78,    52,    53,    78,    99,     3,
     126,   194,   116,   194,   194,    62,   194,   121,    65,   138,
     142,   194,   194,    87,   105,   129,   193,    91,     6,   126,
     116,   194,   136,   137,   173,   193,    24,    11,   194,    70,
      87,   353,   343,   107,    91,   466,   411,   514,   248,   113,
      54,    25,   303,   364,   207,    29,    30,    31,    32,    33,
     107,    35,   127,   201,   357,   127,   113,   609,   608,    43,
     174,   175,   176,   177,   178,    54,   568,   181,   182,   368,
     184,   185,   186,   187,   188,   189,   276,   191,   264,   104,
      -1,   155,   156,   157,    68,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,   156,
     157,    -1,    86,    -1,    88,    89,    -1,   121,    54,    -1,
      -1,    -1,   101,    -1,    -1,   129,    -1,    -1,    -1,   103,
      -1,    -1,   136,   137,   108,    -1,   110,   116,    54,    -1,
      -1,    -1,   121,    -1,    -1,    -1,   120,    -1,    -1,    -1,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
     174,   175,   176,   177,   178,    -1,   150,   181,   182,   153,
     184,   185,   186,   187,   188,   189,    -1,   191,    -1,    -1,
      -1,    -1,    -1,   129,    -1,   174,   175,   176,   177,   178,
     136,   137,   181,   182,    -1,   184,   185,   186,   187,   188,
     189,    -1,   191,   129,    -1,    -1,    -1,    -1,    -1,    -1,
     136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,   175,
     176,   177,   178,    -1,    -1,   181,   182,    -1,   184,   185,
     186,   187,   188,   189,    -1,   191,    -1,    -1,    -1,    -1,
      -1,   177,   178,    -1,    -1,   181,   182,    -1,   184,   185,
     186,   187,   188,   189,    -1,   191
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    27,    37,    40,    41,    52,    53,
      62,    65,    87,    91,   107,   113,   155,   156,   157,   200,
     201,   202,   203,   207,   209,   211,   212,   218,   219,   220,
     233,   235,   238,   239,   240,   242,   245,   326,   327,    27,
       3,   315,     3,     3,   315,    70,    80,   111,    94,    94,
      98,   314,   315,    80,   193,   248,   315,    70,    80,   111,
      19,    60,     3,   328,   329,   154,   208,   208,   208,     0,
     196,   333,   113,   204,   204,    58,   248,   249,   253,     3,
     195,   193,    94,   127,   221,   221,   221,   315,     3,   213,
     315,   123,   127,   234,   248,   249,   133,    94,   133,   234,
     234,   234,   315,   125,   197,   202,    97,   124,   266,     9,
      45,    81,   250,   251,    76,   250,   261,     3,     4,     5,
       6,    48,    88,   104,   150,   151,   152,   185,   198,   269,
     270,   271,   272,   300,   301,   302,   303,   304,   305,   306,
     307,   308,     4,   210,   121,     3,   316,   315,   315,    83,
     258,    93,   193,   241,     3,   243,   244,    46,   315,   194,
     194,     4,   214,   214,   214,     3,   315,   315,   248,   329,
     193,     6,   304,    12,   254,   246,   247,   248,   253,   115,
     252,   126,   246,    55,    72,   267,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   293,   294,
     295,   193,     4,     4,   303,   307,   194,   197,    46,   131,
      94,   125,   193,   241,     3,    46,    47,    48,    85,   121,
     135,   185,   186,   193,   274,   275,   276,   277,   278,   279,
     280,   281,   283,   284,   285,   291,   292,   296,   297,   298,
     299,   300,   214,     3,   334,    63,   249,   174,   197,   258,
      91,   236,   237,   113,   193,   215,   215,   215,     3,   205,
     206,   255,   268,   273,   274,   261,   250,   262,   263,   274,
     261,   274,   115,   274,   119,   321,   322,   323,   133,   133,
     133,   133,   272,   293,   271,   315,     3,   245,     3,   169,
     170,   171,   222,   223,   224,   231,   125,   193,   195,   193,
     193,   193,   112,   274,   282,    46,   121,   275,   191,   275,
     249,   274,   116,   132,    17,    54,   101,   121,   128,   129,
     136,   137,   174,   175,   176,   177,   178,   181,   182,   184,
     185,   186,   187,   188,   189,   191,    98,   194,   197,   193,
     274,   244,    39,   193,     3,    24,    49,   104,   216,   217,
     258,   193,   194,   197,    94,   256,   257,   197,     3,   125,
     319,   320,   267,   246,   197,    90,   117,   264,   267,    55,
      55,    62,   134,   161,   172,   324,   323,   138,   138,   139,
     138,   139,   140,   142,   125,   193,    93,    11,    25,    29,
      30,    31,    32,    33,    35,    43,    68,    86,    88,    89,
     103,   108,   110,   120,   150,   153,   225,   193,   172,   172,
     194,   197,   245,   194,   254,     3,   186,   249,   293,   274,
     274,   282,    92,   112,   118,   193,   121,   268,   194,   194,
     274,   274,   275,   275,    17,   101,   128,   193,   104,   121,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   304,   315,     3,   270,   234,
     216,     4,     4,   213,     4,   194,   197,   270,   206,   193,
     309,   310,   311,   312,   313,   315,   330,   258,   273,     3,
     263,     3,   265,   321,   274,   274,   172,   161,   130,   158,
     159,   325,   225,   334,   214,   193,   193,   227,   193,   193,
     193,   226,   138,   139,   140,   141,   142,   143,   104,   121,
     169,   170,   173,   228,   229,   230,   232,   334,   193,   193,
     223,    77,   286,   268,   193,   194,    94,   125,   109,    92,
     118,   274,   274,   249,   192,   116,   275,   275,   193,   249,
     268,   104,   192,   194,     3,   194,    24,    49,   217,   194,
     245,    26,    66,    71,    78,    79,    95,   100,   331,   197,
     125,   317,   318,   319,    69,   259,     3,    62,   334,   160,
     194,   194,     6,     6,     6,     6,     6,   133,   133,   133,
     133,   104,   172,   315,   230,   232,   194,   334,   334,   193,
     194,   194,   254,   274,   225,   274,   274,   118,   109,   194,
     275,   116,   249,   268,   194,   194,     4,   213,   194,    99,
      78,    78,    78,    99,   310,     3,   126,   325,   194,   194,
     197,   194,   194,   194,   138,   138,   139,   138,   139,   140,
     142,   241,   194,   194,   105,   287,   286,   286,   268,   194,
     194,   118,   274,   275,   194,   194,   318,   311,   310,   193,
     268,     6,   232,   126,   261,   194,    82,   131,   334,    51,
     260,   194,   268,   162,   163,   164,   288,   289,   286,   193,
     274,   332,   194,   274,   194,     6,    17,   165,   168,   290,
     334,   166,   167,   290,   166,   167,   194,   116,   290
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   199,   200,   201,   201,   202,   202,   202,   202,   202,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     204,   204,   205,   205,   206,   206,   207,   207,   207,   208,
     208,   209,   210,   211,   211,   212,   212,   213,   214,   215,
     215,   215,   216,   216,   216,   216,   216,   216,   217,   217,
     218,   218,   219,   219,   219,   220,   220,   220,   220,   220,
     221,   221,   222,   222,   223,   223,   224,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   226,   226,
     227,   227,   227,   228,   228,   229,   229,   229,   229,   230,
     230,   230,   230,   231,   231,   231,   232,   233,   233,   233,
     233,   234,   234,   235,   236,   237,   238,   239,   240,   240,
     241,   241,   242,   243,   243,   244,   245,   245,   245,   246,
     246,   247,   247,   248,   248,   249,   249,   250,   251,   251,
     251,   252,   252,   253,   254,   254,   255,   256,   256,   257,
     258,   258,   259,   259,   260,   260,   261,   261,   262,   262,
     263,   264,   264,   264,   265,   265,   266,   266,   267,   267,
     267,   267,   267,   267,   268,   268,   269,   269,   270,   270,
     271,   271,   272,   272,   272,   273,   274,   274,   274,   274,
     274,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   276,   276,   277,   277,   277,   277,   277,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     279,   279,   280,   280,   280,   280,   281,   281,   281,   281,
     282,   282,   283,   283,   284,   284,   284,   284,   284,   284,
     284,   285,   285,   285,   285,   286,   286,   287,   287,   288,
     288,   288,   289,   289,   289,   290,   290,   290,   290,   290,
     291,   292,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   294,   294,   294,   294,   294,
     294,   295,   295,   296,   297,   298,   298,   299,   299,   299,
     299,   300,   300,   300,   300,   300,   300,   300,   301,   302,
     302,   303,   303,   304,   305,   306,   307,   307,   307,   308,
     309,   309,   310,   310,   311,   311,   312,   312,   313,   314,
     315,   315,   316,   316,   317,   317,   318,   318,   319,   319,
     320,   320,   321,   321,   322,   322,   323,   323,   324,   324,
     324,   324,   325,   325,   325,   326,   326,   327,   328,   328,
     329,   330,   330,   330,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   332,   333,   333,   334,   334
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
       1,     1,     2,     1,     4,     2,     2,     2,     2,     2,
       2,     4,     4,     4,     4,     4,     4,     4,     3,     0,
       5,     3,     0,     1,     0,     1,     2,     1,     2,     2,
       1,     1,     2,     5,     4,     6,     3,     4,     4,     3,
       4,     2,     0,     5,     1,     4,     4,     2,     8,     5,
       3,     0,     5,     1,     3,     3,     2,     2,     6,     1,
       1,     1,     3,     3,     3,     4,     6,     2,     1,     1,
       1,     1,     0,     7,     1,     0,     1,     1,     0,     2,
       2,     0,     4,     0,     2,     0,     3,     0,     1,     3,
       3,     1,     1,     0,     0,     2,     2,     0,     2,     2,
       4,     2,     4,     0,     1,     3,     1,     0,     1,     3,
       1,     6,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     2,     2,     2,     3,     4,     1,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     3,
       3,     3,     5,     6,     5,     6,     4,     6,     3,     5,
       4,     5,     4,     5,     3,     3,     3,     3,     3,     3,
       3,     4,     6,     6,     8,     6,     0,     3,     0,     2,
       5,     0,     1,     1,     1,     2,     2,     2,     2,     1,
       6,     6,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     5,     6,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     2,     1,
       1,     3,     1,     1,     1,     4,     1,     3,     2,     1,
       1,     3,     1,     0,     1,     5,     1,     0,     2,     1,
       1,     0,     1,     0,     1,     2,     3,     5,     1,     3,
       1,     2,     2,     1,     0,     1,     0,     2,     1,     3,
       3,     4,     6,     8,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     0,     1,     1,     0,     1,     3
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
#line 1988 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 194 "bison_parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).sval)); }
#line 1994 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2000 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2006 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* statement_list  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).stmt_vec)) {
    for (auto ptr : *(((*yyvaluep).stmt_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).stmt_vec));
}
#line 2019 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 2025 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* preparable_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 2031 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* opt_hints  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2044 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* hint_list  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2057 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* hint  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2063 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* transaction_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).transaction_stmt)); }
#line 2069 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* prepare_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 2075 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* prepare_target_query  */
#line 194 "bison_parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).sval)); }
#line 2081 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* execute_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 2087 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* import_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 2093 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* file_type  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2099 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* file_path  */
#line 194 "bison_parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).sval)); }
#line 2105 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* opt_import_export_options  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_export_option_t)); }
#line 2111 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* import_export_options  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_export_option_t)); }
#line 2117 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* csv_option  */
#line 203 "bison_parser.y" /* yacc.c:1257  */
      {
  free(((*yyvaluep).csv_option_t)->second);
  delete (((*yyvaluep).csv_option_t));
}
#line 2126 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* export_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).export_stmt)); }
#line 2132 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* show_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 2138 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* create_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 2144 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* opt_not_exists  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2150 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* table_elem_commalist  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_element_vec)) {
    for (auto ptr : *(((*yyvaluep).table_element_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_element_vec));
}
#line 2163 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* table_elem  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table_element_t)); }
#line 2169 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* column_def  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 2175 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* column_type  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2181 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* opt_time_precision  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2187 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* opt_decimal_specification  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).ival_pair)); }
#line 2193 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* opt_column_constraints  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_constraints_t)); }
#line 2199 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* column_constraints  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_constraints_t)); }
#line 2205 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* column_constraint  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2211 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* table_constraint  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table_constraint_t)); }
#line 2217 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* references_spec  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).references_spec_t)); }
#line 2223 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* drop_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 2229 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* opt_exists  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2235 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* alter_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alter_stmt)); }
#line 2241 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* alter_action  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alter_action_t)); }
#line 2247 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* drop_action  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_action_t)); }
#line 2253 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* delete_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 2259 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* truncate_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 2265 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* insert_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 2271 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* opt_column_list  */
#line 186 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 2284 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* update_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 2290 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* update_clause_commalist  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).update_vec)) {
    for (auto ptr : *(((*yyvaluep).update_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).update_vec));
}
#line 2303 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* update_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 2309 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* select_statement  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2315 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* select_within_set_operation  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2321 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* select_within_set_operation_no_parentheses  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2327 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* select_with_paren  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2333 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* select_no_paren  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2339 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* set_operator  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).set_operator_t)); }
#line 2345 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* set_type  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).set_operator_t)); }
#line 2351 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* opt_all  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2357 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* select_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2363 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* opt_distinct  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2369 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* select_list  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2382 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* opt_from_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2388 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* from_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2394 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* opt_where  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2400 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* opt_group  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2406 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* opt_having  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2412 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* opt_order  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2425 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* order_list  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_vec)) {
    for (auto ptr : *(((*yyvaluep).order_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).order_vec));
}
#line 2438 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* order_desc  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2444 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* opt_order_type  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2450 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* opt_null_ordering  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2456 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* opt_top  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2462 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 267: /* opt_limit  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2468 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 268: /* expr_list  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2481 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 269: /* opt_extended_literal_list  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2494 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 270: /* extended_literal_list  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2507 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 271: /* casted_extended_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2513 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 272: /* extended_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2519 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 273: /* expr_alias  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2525 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 274: /* expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2531 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 275: /* operand  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2537 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 276: /* scalar_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2543 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 277: /* unary_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2549 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 278: /* binary_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2555 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 279: /* logic_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2561 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 280: /* in_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2567 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 281: /* case_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2573 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 282: /* case_list  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2579 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 283: /* exists_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2585 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 284: /* comp_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2591 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 285: /* function_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2597 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 286: /* opt_window  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).window_description)); }
#line 2603 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 287: /* opt_partition  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expr_vec)) {
    for (auto ptr : *(((*yyvaluep).expr_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).expr_vec));
}
#line 2616 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 288: /* opt_frame_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).frame_description)); }
#line 2622 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 289: /* frame_type  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2628 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 290: /* frame_bound  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).frame_bound)); }
#line 2634 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 291: /* extract_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2640 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 292: /* cast_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2646 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 293: /* datetime_field  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2652 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 294: /* datetime_field_plural  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2658 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 295: /* duration_field  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2664 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 296: /* array_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2670 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 297: /* array_index  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2676 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 298: /* between_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2682 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 299: /* column_name  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2688 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 300: /* literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2694 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 301: /* string_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2700 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 302: /* bool_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2706 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 303: /* num_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2712 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 304: /* int_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2718 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 305: /* null_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2724 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 306: /* date_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2730 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 307: /* interval_literal  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2736 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 308: /* param_expr  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2742 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 309: /* table_ref  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2748 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 310: /* table_ref_atomic  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2754 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 311: /* nonjoin_table_ref_atomic  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2760 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 312: /* table_ref_commalist  */
#line 195 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_vec)) {
    for (auto ptr : *(((*yyvaluep).table_vec))) {
      delete ptr;
    }
  }
  delete (((*yyvaluep).table_vec));
}
#line 2773 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 313: /* table_ref_name  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2779 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 314: /* table_ref_name_no_alias  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2785 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 315: /* table_name  */
#line 182 "bison_parser.y" /* yacc.c:1257  */
      {
  free(((*yyvaluep).table_name).name);
  free(((*yyvaluep).table_name).schema);
}
#line 2794 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 316: /* opt_index_name  */
#line 194 "bison_parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).sval)); }
#line 2800 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 317: /* table_alias  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2806 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 318: /* opt_table_alias  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2812 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 319: /* alias  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2818 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 320: /* opt_alias  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2824 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 321: /* opt_locking_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).locking_clause_vec)); }
#line 2830 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 322: /* opt_locking_clause_list  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).locking_clause_vec)); }
#line 2836 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 323: /* locking_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).locking_t)); }
#line 2842 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 324: /* row_lock_mode  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2848 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 325: /* opt_row_lock_policy  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2854 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 326: /* opt_with_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2860 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 327: /* with_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2866 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 328: /* with_description_list  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2872 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 329: /* with_description  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_t)); }
#line 2878 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 330: /* join_clause  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2884 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 331: /* opt_join_type  */
#line 181 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2890 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 332: /* join_condition  */
#line 207 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2896 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 334: /* ident_commalist  */
#line 186 "bison_parser.y" /* yacc.c:1257  */
      {
  if (((*yyvaluep).str_vec)) {
    for (auto ptr : *(((*yyvaluep).str_vec))) {
      free(ptr);
    }
  }
  delete (((*yyvaluep).str_vec));
}
#line 2909 "bison_parser.cpp" /* yacc.c:1257  */
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

#line 3028 "bison_parser.cpp" /* yacc.c:1429  */
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
#line 3233 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 362 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3244 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 368 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3255 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 375 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3264 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 379 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3273 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 383 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3279 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 384 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3285 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 385 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3291 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 387 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3297 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 388 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3303 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 389 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3309 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 390 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3315 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 391 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3321 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 392 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3327 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 393 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3333 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 394 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3339 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 395 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3345 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 396 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3351 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 402 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3357 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 403 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 3363 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 405 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3372 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 409 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3381 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 414 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3390 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 418 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3400 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 428 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3406 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 429 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3412 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 430 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3418 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 438 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3428 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 446 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3437 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 450 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3447 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 462 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3458 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 3479 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 3498 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 500 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 3504 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 502 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3510 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 503 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.import_export_option_t) = (yyvsp[-1].import_export_option_t); }
#line 3516 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 504 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.import_export_option_t) = new ImportExportOptions{}; }
#line 3522 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 3541 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 520 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->format = (yyvsp[0].import_type_t);
}
#line 3550 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 3565 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 534 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->encoding = (yyvsp[0].sval);
}
#line 3574 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 3603 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 562 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_export_option_t) = new ImportExportOptions{};
  (yyval.import_export_option_t)->csv_options = new CsvOptions{};
  (yyval.import_export_option_t)->csv_options->accept_csv_option((yyvsp[0].csv_option_t));

  delete (yyvsp[0].csv_option_t);
}
#line 3615 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 3633 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 583 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.csv_option_t) = new std::pair<CsvOptionType, char*>(CsvOptionType::Null, (yyvsp[0].sval)); }
#line 3639 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 3659 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 3678 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 625 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3684 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 626 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3694 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 631 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3704 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 3722 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 3739 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 3751 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 3763 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 3776 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 690 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3782 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 691 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3788 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 693 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3797 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 697 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3806 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 702 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3812 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 703 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3818 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 3830 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 713 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3836 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 714 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3842 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 715 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3848 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 716 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3854 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 717 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3860 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 718 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3866 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 719 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3875 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 723 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3881 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 724 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3887 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 725 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3893 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 726 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3899 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 727 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3905 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 728 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3911 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 729 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3917 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 730 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3923 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 731 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3929 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 732 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3935 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 733 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3941 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 734 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_YEAR}; }
#line 3947 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 735 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_MONTH}; }
#line 3953 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 736 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_DAY}; }
#line 3959 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 737 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_HOUR}; }
#line 3965 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 738 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_MINUTE}; }
#line 3971 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 739 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_SECOND}; }
#line 3977 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 740 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_YEAR_TO_MONTH}; }
#line 3983 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 741 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_DAY_TO_HOUR}; }
#line 3989 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 742 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_DAY_TO_MINUTE}; }
#line 3995 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 743 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_DAY_TO_SECOND}; }
#line 4001 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 744 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_HOUR_TO_MINUTE}; }
#line 4007 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 745 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_HOUR_TO_SECOND}; }
#line 4013 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 746 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INTERVAL_MINUTE_TO_SECOND}; }
#line 4019 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 748 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[-1].ival); }
#line 4025 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 749 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 4031 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 751 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 4037 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 752 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 4043 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 753 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 4049 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 755 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraints_t) = (yyvsp[0].column_constraints_t); }
#line 4055 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 756 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraints_t) = new ColumnConstraints(); }
#line 4061 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 758 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
}
#line 4070 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 762 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-1].column_constraints_t)->constraints->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4079 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 766 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_constraints_t) = new ColumnConstraints();
  (yyval.column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyval.column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
}
#line 4089 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 771 "bison_parser.y" /* yacc.c:1646  */
    {
  // Multiple foreign keys for the same column could be possible, so we do not raise an error in that case.
  // Think of foreign keys referenced on multiple levels (returned item references sold item references items).
  (yyvsp[-1].column_constraints_t)->constraints->insert(ConstraintType::ForeignKey);
  (yyvsp[-1].column_constraints_t)->references->emplace_back((yyvsp[0].references_spec_t));
  (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 4101 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 779 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 4107 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 780 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 4113 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 781 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 4119 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 782 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 4125 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 784 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 4131 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 785 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 4137 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 786 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_constraint_t) = new ForeignKeyConstraint((yyvsp[-2].str_vec), (yyvsp[0].references_spec_t)); }
#line 4143 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 788 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.references_spec_t) = new ReferencesSpecification((yyvsp[-1].table_name).schema, (yyvsp[-1].table_name).name, (yyvsp[0].str_vec)); }
#line 4149 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 796 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4160 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 802 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 4171 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 808 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 4181 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 814 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 4191 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 820 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 4197 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 821 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 4203 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 828 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 4213 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 834 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 4219 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 836 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 4228 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 846 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 4239 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 853 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 4249 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 864 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4261 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 871 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4273 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 879 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4279 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 880 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = nullptr; }
#line 4285 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 887 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4296 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 894 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4305 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 898 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4314 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 903 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4324 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 913 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4333 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 917 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4342 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 921 "bison_parser.y" /* yacc.c:1646  */
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
#line 4358 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 935 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4364 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 936 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4377 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 945 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4383 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 946 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4389 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 948 "bison_parser.y" /* yacc.c:1646  */
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
#line 4408 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 962 "bison_parser.y" /* yacc.c:1646  */
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
#line 4424 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 974 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4433 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 979 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4442 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 983 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4451 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 987 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4460 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 992 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 4466 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 993 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 4472 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 995 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4486 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1005 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 4492 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1006 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 4498 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1010 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 4504 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1011 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = nullptr; }
#line 4510 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1013 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 4516 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1015 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 4522 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1016 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 4528 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1018 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4538 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1023 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.group_t) = nullptr; }
#line 4544 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1025 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 4550 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1026 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 4556 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1028 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4562 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1029 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = nullptr; }
#line 4568 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1031 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4577 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1035 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4586 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1040 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order) = new OrderDescription((yyvsp[-1].order_type), (yyvsp[-2].expr), (yyvsp[0].null_ordering_t)); }
#line 4592 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1042 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 4598 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1043 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderDesc; }
#line 4604 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1044 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 4610 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1046 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.null_ordering_t) = NullOrdering::Undefined; }
#line 4616 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1047 "bison_parser.y" /* yacc.c:1646  */
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
#line 4640 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1069 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4646 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1070 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 4652 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1072 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4658 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1073 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4664 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1074 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4670 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1075 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4676 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1076 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4682 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1077 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 4688 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1082 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4697 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1086 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4706 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1092 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4712 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1093 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 4718 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1095 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4727 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1099 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4736 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1104 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t));
}
#line 4744 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1108 "bison_parser.y" /* yacc.c:1646  */
    {
  if ((yyvsp[0].expr)->type == ExprType::kExprParameter) {
    delete (yyvsp[0].expr);
    yyerror(&yyloc, result, scanner, "Parameter ? is not a valid literal.");
    YYERROR;
  }
  (yyval.expr) = (yyvsp[0].expr);
}
#line 4757 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1116 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4763 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1117 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4769 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1119 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = (yyvsp[0].alias_t)->name;
    (yyvsp[0].alias_t)->name = nullptr;
    delete (yyvsp[0].alias_t);
  }
}
#line 4782 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1130 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 4788 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1132 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4796 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1138 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4802 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1139 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4808 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1140 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4814 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1141 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4820 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1142 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4826 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1144 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4832 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1145 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4838 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1146 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4844 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1147 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4850 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1148 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4856 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1149 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4862 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1150 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4868 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1151 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4874 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1152 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4880 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1153 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4886 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1155 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4892 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1156 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4898 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1158 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4904 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1159 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4910 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1160 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4916 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1161 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4922 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1165 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4928 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1166 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4934 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1167 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4940 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1168 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4946 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1170 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4952 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1171 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4958 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1173 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4964 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1174 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4970 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1176 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4976 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1177 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4982 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1178 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4988 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1179 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4994 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1180 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 5000 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1181 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 5006 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1182 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 5012 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1186 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 5018 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1187 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 5024 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1188 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-3].sval), (yyvsp[-5].sval), new std::vector<Expr*>(), false, (yyvsp[0].window_description)); }
#line 5030 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1189 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-5].sval), (yyvsp[-7].sval), (yyvsp[-2].expr_vec), (yyvsp[-3].bval), (yyvsp[0].window_description)); }
#line 5036 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1193 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.window_description) = new WindowDescription((yyvsp[-3].expr_vec), (yyvsp[-2].order_vec), (yyvsp[-1].frame_description)); }
#line 5042 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1194 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.window_description) = nullptr; }
#line 5048 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1196 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 5054 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1197 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 5060 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1202 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_description) = new FrameDescription{(yyvsp[-1].frame_type), (yyvsp[0].frame_bound), new FrameBound{0, kCurrentRow, false}}; }
#line 5066 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1203 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_description) = new FrameDescription{(yyvsp[-4].frame_type), (yyvsp[-2].frame_bound), (yyvsp[0].frame_bound)}; }
#line 5072 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1204 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.frame_description) = new FrameDescription{kRange, new FrameBound{0, kPreceding, true}, new FrameBound{0, kCurrentRow, false}};
}
#line 5080 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1208 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_type) = kRange; }
#line 5086 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1209 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_type) = kRows; }
#line 5092 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1210 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_type) = kGroups; }
#line 5098 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1212 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_bound) = new FrameBound{0, kPreceding, true}; }
#line 5104 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1213 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kPreceding, false}; }
#line 5110 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1214 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_bound) = new FrameBound{0, kFollowing, true}; }
#line 5116 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1215 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_bound) = new FrameBound{(yyvsp[-1].ival), kFollowing, false}; }
#line 5122 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1216 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.frame_bound) = new FrameBound{0, kCurrentRow, false}; }
#line 5128 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1218 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 5134 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1220 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 5140 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1222 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 5146 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1223 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 5152 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1224 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 5158 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1225 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 5164 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1226 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 5170 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1227 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 5176 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1228 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kIntervalYearToMonth; }
#line 5182 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1229 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kIntervalDayToHour; }
#line 5188 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1230 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kIntervalDayToMinute; }
#line 5194 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1231 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kIntervalDayToSecond; }
#line 5200 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1232 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kIntervalHourToMinute; }
#line 5206 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1233 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kIntervalHourToSecond; }
#line 5212 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1234 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kIntervalMinuteToSecond; }
#line 5218 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1236 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 5224 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1237 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 5230 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1238 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 5236 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1239 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 5242 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1240 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 5248 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1241 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 5254 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1245 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 5260 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1247 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 5266 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1249 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 5272 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1250 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeBetween((yyvsp[-5].expr), (yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 5278 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1252 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 5284 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1253 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 5290 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1254 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar(); }
#line 5296 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1255 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 5302 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1259 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 5308 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1261 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 5314 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1262 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 5320 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1264 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 5326 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1267 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 5332 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1269 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 5338 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1271 "bison_parser.y" /* yacc.c:1646  */
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
#line 5353 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1282 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].ival), (yyvsp[0].datetime_field)); }
#line 5359 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1283 "bison_parser.y" /* yacc.c:1646  */
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
#line 5375 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1294 "bison_parser.y" /* yacc.c:1646  */
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
#line 5411 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1326 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 5421 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1335 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5432 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1344 "bison_parser.y" /* yacc.c:1646  */
    {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5443 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1351 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5452 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1355 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5461 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1360 "bison_parser.y" /* yacc.c:1646  */
    {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5473 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1368 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5483 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1374 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5492 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1378 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5501 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1383 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 5507 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1384 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = nullptr; }
#line 5513 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1386 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5519 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1388 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 5525 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1390 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5531 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1391 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5537 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1393 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 5543 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1399 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5549 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1400 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.locking_clause_vec) = nullptr; }
#line 5555 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1402 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5564 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1406 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5573 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1411 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5584 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1417 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5595 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1424 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5601 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1425 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5607 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1426 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5613 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1427 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5619 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1429 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5625 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1430 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5631 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1431 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5637 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1437 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.with_description_vec) = nullptr; }
#line 5643 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1439 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5649 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1441 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5658 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1445 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5667 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1450 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5677 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1460 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5689 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1467 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5702 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1475 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  (yyval.table)->join->namedColumns = (yyvsp[-1].str_vec);
}
#line 5715 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1484 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinInner; }
#line 5721 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 1485 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinLeft; }
#line 5727 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 1486 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinLeft; }
#line 5733 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 1487 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinRight; }
#line 5739 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 1488 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinRight; }
#line 5745 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 1489 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 5751 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 1490 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 5757 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 1491 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 5763 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 1492 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinCross; }
#line 5769 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 1493 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinInner; }
#line 5775 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 1504 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5784 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 1508 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5793 "bison_parser.cpp" /* yacc.c:1646  */
    break;


#line 5797 "bison_parser.cpp" /* yacc.c:1646  */
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
#line 1514 "bison_parser.y" /* yacc.c:1906  */


/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

    // clang-format on
