/* A Bison parser, made by GNU Bison 3.6.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.6.4"

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

/* First part of user prologue.  */
#line 1 "bison_parser.y"

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

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 107 "bison_parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
#line 35 "bison_parser.y"

// %code requires block

#include "../sql/statements.h"
#include "../SQLParserResult.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION \
		yylloc->first_line = yylloc->last_line; \
		yylloc->first_column = yylloc->last_column; \
		for(int i = 0; yytext[i] != '\0'; i++) { \
			yylloc->total_column++; \
			yylloc->string_length++; \
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#line 174 "bison_parser.cpp"

/* Token kinds.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_HSQL_EMPTY = -2,
    SQL_YYEOF = 0,                 /* "end of file"  */
    SQL_HSQL_error = 256,          /* error  */
    SQL_HSQL_UNDEF = 257,          /* "invalid token"  */
    SQL_IDENTIFIER = 258,          /* IDENTIFIER  */
    SQL_STRING = 259,              /* STRING  */
    SQL_FLOATVAL = 260,            /* FLOATVAL  */
    SQL_INTVAL = 261,              /* INTVAL  */
    SQL_DEALLOCATE = 262,          /* DEALLOCATE  */
    SQL_PARAMETERS = 263,          /* PARAMETERS  */
    SQL_INTERSECT = 264,           /* INTERSECT  */
    SQL_TEMPORARY = 265,           /* TEMPORARY  */
    SQL_TIMESTAMP = 266,           /* TIMESTAMP  */
    SQL_DISTINCT = 267,            /* DISTINCT  */
    SQL_NVARCHAR = 268,            /* NVARCHAR  */
    SQL_RESTRICT = 269,            /* RESTRICT  */
    SQL_TRUNCATE = 270,            /* TRUNCATE  */
    SQL_ANALYZE = 271,             /* ANALYZE  */
    SQL_BETWEEN = 272,             /* BETWEEN  */
    SQL_CASCADE = 273,             /* CASCADE  */
    SQL_COLUMNS = 274,             /* COLUMNS  */
    SQL_CONTROL = 275,             /* CONTROL  */
    SQL_DEFAULT = 276,             /* DEFAULT  */
    SQL_EXECUTE = 277,             /* EXECUTE  */
    SQL_EXPLAIN = 278,             /* EXPLAIN  */
    SQL_INTEGER = 279,             /* INTEGER  */
    SQL_NATURAL = 280,             /* NATURAL  */
    SQL_PREPARE = 281,             /* PREPARE  */
    SQL_PRIMARY = 282,             /* PRIMARY  */
    SQL_SCHEMAS = 283,             /* SCHEMAS  */
    SQL_SPATIAL = 284,             /* SPATIAL  */
    SQL_VARCHAR = 285,             /* VARCHAR  */
    SQL_VIRTUAL = 286,             /* VIRTUAL  */
    SQL_DESCRIBE = 287,            /* DESCRIBE  */
    SQL_BEFORE = 288,              /* BEFORE  */
    SQL_COLUMN = 289,              /* COLUMN  */
    SQL_CREATE = 290,              /* CREATE  */
    SQL_DELETE = 291,              /* DELETE  */
    SQL_DIRECT = 292,              /* DIRECT  */
    SQL_DOUBLE = 293,              /* DOUBLE  */
    SQL_ESCAPE = 294,              /* ESCAPE  */
    SQL_EXCEPT = 295,              /* EXCEPT  */
    SQL_EXISTS = 296,              /* EXISTS  */
    SQL_EXTRACT = 297,             /* EXTRACT  */
    SQL_CAST = 298,                /* CAST  */
    SQL_FORMAT = 299,              /* FORMAT  */
    SQL_GLOBAL = 300,              /* GLOBAL  */
    SQL_HAVING = 301,              /* HAVING  */
    SQL_IMPORT = 302,              /* IMPORT  */
    SQL_INSERT = 303,              /* INSERT  */
    SQL_ISNULL = 304,              /* ISNULL  */
    SQL_OFFSET = 305,              /* OFFSET  */
    SQL_RENAME = 306,              /* RENAME  */
    SQL_SCHEMA = 307,              /* SCHEMA  */
    SQL_SELECT = 308,              /* SELECT  */
    SQL_SORTED = 309,              /* SORTED  */
    SQL_TABLES = 310,              /* TABLES  */
    SQL_UNIQUE = 311,              /* UNIQUE  */
    SQL_UNLOAD = 312,              /* UNLOAD  */
    SQL_UPDATE = 313,              /* UPDATE  */
    SQL_VALUES = 314,              /* VALUES  */
    SQL_AFTER = 315,               /* AFTER  */
    SQL_ALTER = 316,               /* ALTER  */
    SQL_CROSS = 317,               /* CROSS  */
    SQL_DELTA = 318,               /* DELTA  */
    SQL_FLOAT = 319,               /* FLOAT  */
    SQL_GROUP = 320,               /* GROUP  */
    SQL_INDEX = 321,               /* INDEX  */
    SQL_INNER = 322,               /* INNER  */
    SQL_LIMIT = 323,               /* LIMIT  */
    SQL_LOCAL = 324,               /* LOCAL  */
    SQL_MERGE = 325,               /* MERGE  */
    SQL_MINUS = 326,               /* MINUS  */
    SQL_ORDER = 327,               /* ORDER  */
    SQL_OUTER = 328,               /* OUTER  */
    SQL_RIGHT = 329,               /* RIGHT  */
    SQL_TABLE = 330,               /* TABLE  */
    SQL_UNION = 331,               /* UNION  */
    SQL_USING = 332,               /* USING  */
    SQL_WHERE = 333,               /* WHERE  */
    SQL_CALL = 334,                /* CALL  */
    SQL_CASE = 335,                /* CASE  */
    SQL_CHAR = 336,                /* CHAR  */
    SQL_COPY = 337,                /* COPY  */
    SQL_DATE = 338,                /* DATE  */
    SQL_DESC = 339,                /* DESC  */
    SQL_DROP = 340,                /* DROP  */
    SQL_ELSE = 341,                /* ELSE  */
    SQL_FILE = 342,                /* FILE  */
    SQL_FROM = 343,                /* FROM  */
    SQL_FULL = 344,                /* FULL  */
    SQL_HASH = 345,                /* HASH  */
    SQL_HINT = 346,                /* HINT  */
    SQL_INTO = 347,                /* INTO  */
    SQL_JOIN = 348,                /* JOIN  */
    SQL_LEFT = 349,                /* LEFT  */
    SQL_LIKE = 350,                /* LIKE  */
    SQL_LOAD = 351,                /* LOAD  */
    SQL_LONG = 352,                /* LONG  */
    SQL_NULL = 353,                /* NULL  */
    SQL_PLAN = 354,                /* PLAN  */
    SQL_SHOW = 355,                /* SHOW  */
    SQL_TEXT = 356,                /* TEXT  */
    SQL_THEN = 357,                /* THEN  */
    SQL_TIME = 358,                /* TIME  */
    SQL_VIEW = 359,                /* VIEW  */
    SQL_WHEN = 360,                /* WHEN  */
    SQL_WITH = 361,                /* WITH  */
    SQL_ADD = 362,                 /* ADD  */
    SQL_ALL = 363,                 /* ALL  */
    SQL_AND = 364,                 /* AND  */
    SQL_ASC = 365,                 /* ASC  */
    SQL_END = 366,                 /* END  */
    SQL_FOR = 367,                 /* FOR  */
    SQL_INT = 368,                 /* INT  */
    SQL_KEY = 369,                 /* KEY  */
    SQL_NOT = 370,                 /* NOT  */
    SQL_OFF = 371,                 /* OFF  */
    SQL_SET = 372,                 /* SET  */
    SQL_TOP = 373,                 /* TOP  */
    SQL_AS = 374,                  /* AS  */
    SQL_BY = 375,                  /* BY  */
    SQL_IF = 376,                  /* IF  */
    SQL_IN = 377,                  /* IN  */
    SQL_IS = 378,                  /* IS  */
    SQL_OF = 379,                  /* OF  */
    SQL_ON = 380,                  /* ON  */
    SQL_OR = 381,                  /* OR  */
    SQL_TO = 382,                  /* TO  */
    SQL_ARRAY = 383,               /* ARRAY  */
    SQL_CONCAT = 384,              /* CONCAT  */
    SQL_ILIKE = 385,               /* ILIKE  */
    SQL_SECOND = 386,              /* SECOND  */
    SQL_MINUTE = 387,              /* MINUTE  */
    SQL_HOUR = 388,                /* HOUR  */
    SQL_DAY = 389,                 /* DAY  */
    SQL_MONTH = 390,               /* MONTH  */
    SQL_YEAR = 391,                /* YEAR  */
    SQL_TRUE = 392,                /* TRUE  */
    SQL_FALSE = 393,               /* FALSE  */
    SQL_TRANSACTION = 394,         /* TRANSACTION  */
    SQL_BEGIN = 395,               /* BEGIN  */
    SQL_COMMIT = 396,              /* COMMIT  */
    SQL_ROLLBACK = 397,            /* ROLLBACK  */
    SQL_EQUALS = 398,              /* EQUALS  */
    SQL_NOTEQUALS = 399,           /* NOTEQUALS  */
    SQL_LESS = 400,                /* LESS  */
    SQL_GREATER = 401,             /* GREATER  */
    SQL_LESSEQ = 402,              /* LESSEQ  */
    SQL_GREATEREQ = 403,           /* GREATEREQ  */
    SQL_NOTNULL = 404,             /* NOTNULL  */
    SQL_UMINUS = 405               /* UMINUS  */
  };
  typedef enum hsql_tokentype hsql_token_kind_t;
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
union HSQL_STYPE
{
#line 95 "bison_parser.y"

	double fval;
	int64_t ival;
	char* sval;
	uintmax_t uval;
	bool bval;

	hsql::SQLStatement* statement;
	hsql::SelectStatement* 	select_stmt;
	hsql::ImportStatement* 	import_stmt;
	hsql::ExportStatement* 	export_stmt;
	hsql::CreateStatement* 	create_stmt;
	hsql::InsertStatement* 	insert_stmt;
	hsql::DeleteStatement* 	delete_stmt;
	hsql::UpdateStatement* 	update_stmt;
	hsql::DropStatement*   	drop_stmt;
	hsql::PrepareStatement* prep_stmt;
	hsql::ExecuteStatement* exec_stmt;
	hsql::ShowStatement*    show_stmt;
	hsql::TransactionStatement* transaction_stmt;

	hsql::TableName table_name;
	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::WithDescription* with_description_t;
	hsql::DatetimeField datetime_field;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::ColumnType column_type_t;
	hsql::ImportType import_type_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;
	hsql::Alias* alias_t;
	hsql::SetOperation* set_operator_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;
	std::vector<hsql::WithDescription*>* with_description_vec;

#line 389 "bison_parser.cpp"

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_FLOATVAL = 5,                   /* FLOATVAL  */
  YYSYMBOL_INTVAL = 6,                     /* INTVAL  */
  YYSYMBOL_DEALLOCATE = 7,                 /* DEALLOCATE  */
  YYSYMBOL_PARAMETERS = 8,                 /* PARAMETERS  */
  YYSYMBOL_INTERSECT = 9,                  /* INTERSECT  */
  YYSYMBOL_TEMPORARY = 10,                 /* TEMPORARY  */
  YYSYMBOL_TIMESTAMP = 11,                 /* TIMESTAMP  */
  YYSYMBOL_DISTINCT = 12,                  /* DISTINCT  */
  YYSYMBOL_NVARCHAR = 13,                  /* NVARCHAR  */
  YYSYMBOL_RESTRICT = 14,                  /* RESTRICT  */
  YYSYMBOL_TRUNCATE = 15,                  /* TRUNCATE  */
  YYSYMBOL_ANALYZE = 16,                   /* ANALYZE  */
  YYSYMBOL_BETWEEN = 17,                   /* BETWEEN  */
  YYSYMBOL_CASCADE = 18,                   /* CASCADE  */
  YYSYMBOL_COLUMNS = 19,                   /* COLUMNS  */
  YYSYMBOL_CONTROL = 20,                   /* CONTROL  */
  YYSYMBOL_DEFAULT = 21,                   /* DEFAULT  */
  YYSYMBOL_EXECUTE = 22,                   /* EXECUTE  */
  YYSYMBOL_EXPLAIN = 23,                   /* EXPLAIN  */
  YYSYMBOL_INTEGER = 24,                   /* INTEGER  */
  YYSYMBOL_NATURAL = 25,                   /* NATURAL  */
  YYSYMBOL_PREPARE = 26,                   /* PREPARE  */
  YYSYMBOL_PRIMARY = 27,                   /* PRIMARY  */
  YYSYMBOL_SCHEMAS = 28,                   /* SCHEMAS  */
  YYSYMBOL_SPATIAL = 29,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 30,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 31,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 32,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 33,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 34,                    /* COLUMN  */
  YYSYMBOL_CREATE = 35,                    /* CREATE  */
  YYSYMBOL_DELETE = 36,                    /* DELETE  */
  YYSYMBOL_DIRECT = 37,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 38,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 39,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 40,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 41,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 42,                   /* EXTRACT  */
  YYSYMBOL_CAST = 43,                      /* CAST  */
  YYSYMBOL_FORMAT = 44,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 45,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 46,                    /* HAVING  */
  YYSYMBOL_IMPORT = 47,                    /* IMPORT  */
  YYSYMBOL_INSERT = 48,                    /* INSERT  */
  YYSYMBOL_ISNULL = 49,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 50,                    /* OFFSET  */
  YYSYMBOL_RENAME = 51,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 52,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 53,                    /* SELECT  */
  YYSYMBOL_SORTED = 54,                    /* SORTED  */
  YYSYMBOL_TABLES = 55,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 56,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 57,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 58,                    /* UPDATE  */
  YYSYMBOL_VALUES = 59,                    /* VALUES  */
  YYSYMBOL_AFTER = 60,                     /* AFTER  */
  YYSYMBOL_ALTER = 61,                     /* ALTER  */
  YYSYMBOL_CROSS = 62,                     /* CROSS  */
  YYSYMBOL_DELTA = 63,                     /* DELTA  */
  YYSYMBOL_FLOAT = 64,                     /* FLOAT  */
  YYSYMBOL_GROUP = 65,                     /* GROUP  */
  YYSYMBOL_INDEX = 66,                     /* INDEX  */
  YYSYMBOL_INNER = 67,                     /* INNER  */
  YYSYMBOL_LIMIT = 68,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 69,                     /* LOCAL  */
  YYSYMBOL_MERGE = 70,                     /* MERGE  */
  YYSYMBOL_MINUS = 71,                     /* MINUS  */
  YYSYMBOL_ORDER = 72,                     /* ORDER  */
  YYSYMBOL_OUTER = 73,                     /* OUTER  */
  YYSYMBOL_RIGHT = 74,                     /* RIGHT  */
  YYSYMBOL_TABLE = 75,                     /* TABLE  */
  YYSYMBOL_UNION = 76,                     /* UNION  */
  YYSYMBOL_USING = 77,                     /* USING  */
  YYSYMBOL_WHERE = 78,                     /* WHERE  */
  YYSYMBOL_CALL = 79,                      /* CALL  */
  YYSYMBOL_CASE = 80,                      /* CASE  */
  YYSYMBOL_CHAR = 81,                      /* CHAR  */
  YYSYMBOL_COPY = 82,                      /* COPY  */
  YYSYMBOL_DATE = 83,                      /* DATE  */
  YYSYMBOL_DESC = 84,                      /* DESC  */
  YYSYMBOL_DROP = 85,                      /* DROP  */
  YYSYMBOL_ELSE = 86,                      /* ELSE  */
  YYSYMBOL_FILE = 87,                      /* FILE  */
  YYSYMBOL_FROM = 88,                      /* FROM  */
  YYSYMBOL_FULL = 89,                      /* FULL  */
  YYSYMBOL_HASH = 90,                      /* HASH  */
  YYSYMBOL_HINT = 91,                      /* HINT  */
  YYSYMBOL_INTO = 92,                      /* INTO  */
  YYSYMBOL_JOIN = 93,                      /* JOIN  */
  YYSYMBOL_LEFT = 94,                      /* LEFT  */
  YYSYMBOL_LIKE = 95,                      /* LIKE  */
  YYSYMBOL_LOAD = 96,                      /* LOAD  */
  YYSYMBOL_LONG = 97,                      /* LONG  */
  YYSYMBOL_NULL = 98,                      /* NULL  */
  YYSYMBOL_PLAN = 99,                      /* PLAN  */
  YYSYMBOL_SHOW = 100,                     /* SHOW  */
  YYSYMBOL_TEXT = 101,                     /* TEXT  */
  YYSYMBOL_THEN = 102,                     /* THEN  */
  YYSYMBOL_TIME = 103,                     /* TIME  */
  YYSYMBOL_VIEW = 104,                     /* VIEW  */
  YYSYMBOL_WHEN = 105,                     /* WHEN  */
  YYSYMBOL_WITH = 106,                     /* WITH  */
  YYSYMBOL_ADD = 107,                      /* ADD  */
  YYSYMBOL_ALL = 108,                      /* ALL  */
  YYSYMBOL_AND = 109,                      /* AND  */
  YYSYMBOL_ASC = 110,                      /* ASC  */
  YYSYMBOL_END = 111,                      /* END  */
  YYSYMBOL_FOR = 112,                      /* FOR  */
  YYSYMBOL_INT = 113,                      /* INT  */
  YYSYMBOL_KEY = 114,                      /* KEY  */
  YYSYMBOL_NOT = 115,                      /* NOT  */
  YYSYMBOL_OFF = 116,                      /* OFF  */
  YYSYMBOL_SET = 117,                      /* SET  */
  YYSYMBOL_TOP = 118,                      /* TOP  */
  YYSYMBOL_AS = 119,                       /* AS  */
  YYSYMBOL_BY = 120,                       /* BY  */
  YYSYMBOL_IF = 121,                       /* IF  */
  YYSYMBOL_IN = 122,                       /* IN  */
  YYSYMBOL_IS = 123,                       /* IS  */
  YYSYMBOL_OF = 124,                       /* OF  */
  YYSYMBOL_ON = 125,                       /* ON  */
  YYSYMBOL_OR = 126,                       /* OR  */
  YYSYMBOL_TO = 127,                       /* TO  */
  YYSYMBOL_ARRAY = 128,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 129,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 130,                    /* ILIKE  */
  YYSYMBOL_SECOND = 131,                   /* SECOND  */
  YYSYMBOL_MINUTE = 132,                   /* MINUTE  */
  YYSYMBOL_HOUR = 133,                     /* HOUR  */
  YYSYMBOL_DAY = 134,                      /* DAY  */
  YYSYMBOL_MONTH = 135,                    /* MONTH  */
  YYSYMBOL_YEAR = 136,                     /* YEAR  */
  YYSYMBOL_TRUE = 137,                     /* TRUE  */
  YYSYMBOL_FALSE = 138,                    /* FALSE  */
  YYSYMBOL_TRANSACTION = 139,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 140,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 141,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 142,                 /* ROLLBACK  */
  YYSYMBOL_143_ = 143,                     /* '='  */
  YYSYMBOL_EQUALS = 144,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 145,                /* NOTEQUALS  */
  YYSYMBOL_146_ = 146,                     /* '<'  */
  YYSYMBOL_147_ = 147,                     /* '>'  */
  YYSYMBOL_LESS = 148,                     /* LESS  */
  YYSYMBOL_GREATER = 149,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 150,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 151,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 152,                  /* NOTNULL  */
  YYSYMBOL_153_ = 153,                     /* '+'  */
  YYSYMBOL_154_ = 154,                     /* '-'  */
  YYSYMBOL_155_ = 155,                     /* '*'  */
  YYSYMBOL_156_ = 156,                     /* '/'  */
  YYSYMBOL_157_ = 157,                     /* '%'  */
  YYSYMBOL_158_ = 158,                     /* '^'  */
  YYSYMBOL_UMINUS = 159,                   /* UMINUS  */
  YYSYMBOL_160_ = 160,                     /* '['  */
  YYSYMBOL_161_ = 161,                     /* ']'  */
  YYSYMBOL_162_ = 162,                     /* '('  */
  YYSYMBOL_163_ = 163,                     /* ')'  */
  YYSYMBOL_164_ = 164,                     /* '.'  */
  YYSYMBOL_165_ = 165,                     /* ';'  */
  YYSYMBOL_166_ = 166,                     /* ','  */
  YYSYMBOL_167_ = 167,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 168,                 /* $accept  */
  YYSYMBOL_input = 169,                    /* input  */
  YYSYMBOL_statement_list = 170,           /* statement_list  */
  YYSYMBOL_statement = 171,                /* statement  */
  YYSYMBOL_preparable_statement = 172,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 173,                /* opt_hints  */
  YYSYMBOL_hint_list = 174,                /* hint_list  */
  YYSYMBOL_hint = 175,                     /* hint  */
  YYSYMBOL_transaction_statement = 176,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 177,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 178,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 179,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 180,        /* execute_statement  */
  YYSYMBOL_import_statement = 181,         /* import_statement  */
  YYSYMBOL_file_type = 182,                /* file_type  */
  YYSYMBOL_file_path = 183,                /* file_path  */
  YYSYMBOL_opt_file_type = 184,            /* opt_file_type  */
  YYSYMBOL_export_statement = 185,         /* export_statement  */
  YYSYMBOL_show_statement = 186,           /* show_statement  */
  YYSYMBOL_create_statement = 187,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 188,           /* opt_not_exists  */
  YYSYMBOL_column_def_commalist = 189,     /* column_def_commalist  */
  YYSYMBOL_column_def = 190,               /* column_def  */
  YYSYMBOL_column_type = 191,              /* column_type  */
  YYSYMBOL_opt_column_nullable = 192,      /* opt_column_nullable  */
  YYSYMBOL_drop_statement = 193,           /* drop_statement  */
  YYSYMBOL_opt_exists = 194,               /* opt_exists  */
  YYSYMBOL_delete_statement = 195,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 196,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 197,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 198,          /* opt_column_list  */
  YYSYMBOL_update_statement = 199,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 200,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 201,            /* update_clause  */
  YYSYMBOL_select_statement = 202,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 203, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 204, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 205,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 206,          /* select_no_paren  */
  YYSYMBOL_set_operator = 207,             /* set_operator  */
  YYSYMBOL_set_type = 208,                 /* set_type  */
  YYSYMBOL_opt_all = 209,                  /* opt_all  */
  YYSYMBOL_select_clause = 210,            /* select_clause  */
  YYSYMBOL_opt_distinct = 211,             /* opt_distinct  */
  YYSYMBOL_select_list = 212,              /* select_list  */
  YYSYMBOL_opt_from_clause = 213,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 214,              /* from_clause  */
  YYSYMBOL_opt_where = 215,                /* opt_where  */
  YYSYMBOL_opt_group = 216,                /* opt_group  */
  YYSYMBOL_opt_having = 217,               /* opt_having  */
  YYSYMBOL_opt_order = 218,                /* opt_order  */
  YYSYMBOL_order_list = 219,               /* order_list  */
  YYSYMBOL_order_desc = 220,               /* order_desc  */
  YYSYMBOL_opt_order_type = 221,           /* opt_order_type  */
  YYSYMBOL_opt_top = 222,                  /* opt_top  */
  YYSYMBOL_opt_limit = 223,                /* opt_limit  */
  YYSYMBOL_expr_list = 224,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 225,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 226,             /* literal_list  */
  YYSYMBOL_expr_alias = 227,               /* expr_alias  */
  YYSYMBOL_expr = 228,                     /* expr  */
  YYSYMBOL_operand = 229,                  /* operand  */
  YYSYMBOL_scalar_expr = 230,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 231,               /* unary_expr  */
  YYSYMBOL_binary_expr = 232,              /* binary_expr  */
  YYSYMBOL_logic_expr = 233,               /* logic_expr  */
  YYSYMBOL_in_expr = 234,                  /* in_expr  */
  YYSYMBOL_case_expr = 235,                /* case_expr  */
  YYSYMBOL_case_list = 236,                /* case_list  */
  YYSYMBOL_exists_expr = 237,              /* exists_expr  */
  YYSYMBOL_comp_expr = 238,                /* comp_expr  */
  YYSYMBOL_function_expr = 239,            /* function_expr  */
  YYSYMBOL_extract_expr = 240,             /* extract_expr  */
  YYSYMBOL_cast_expr = 241,                /* cast_expr  */
  YYSYMBOL_datetime_field = 242,           /* datetime_field  */
  YYSYMBOL_array_expr = 243,               /* array_expr  */
  YYSYMBOL_array_index = 244,              /* array_index  */
  YYSYMBOL_between_expr = 245,             /* between_expr  */
  YYSYMBOL_column_name = 246,              /* column_name  */
  YYSYMBOL_literal = 247,                  /* literal  */
  YYSYMBOL_string_literal = 248,           /* string_literal  */
  YYSYMBOL_bool_literal = 249,             /* bool_literal  */
  YYSYMBOL_num_literal = 250,              /* num_literal  */
  YYSYMBOL_int_literal = 251,              /* int_literal  */
  YYSYMBOL_null_literal = 252,             /* null_literal  */
  YYSYMBOL_param_expr = 253,               /* param_expr  */
  YYSYMBOL_table_ref = 254,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 255,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 256, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 257,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 258,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 259,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 260,               /* table_name  */
  YYSYMBOL_table_alias = 261,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 262,          /* opt_table_alias  */
  YYSYMBOL_alias = 263,                    /* alias  */
  YYSYMBOL_opt_alias = 264,                /* opt_alias  */
  YYSYMBOL_opt_with_clause = 265,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 266,              /* with_clause  */
  YYSYMBOL_with_description_list = 267,    /* with_description_list  */
  YYSYMBOL_with_description = 268,         /* with_description  */
  YYSYMBOL_join_clause = 269,              /* join_clause  */
  YYSYMBOL_opt_join_type = 270,            /* opt_join_type  */
  YYSYMBOL_join_condition = 271,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 272,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 273           /* ident_commalist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   740

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  168
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  260
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  472

#define YYMAXUTOK   405


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   157,     2,     2,
     162,   163,   155,   153,   166,   154,   164,   156,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   165,
     146,   143,   147,   167,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   160,     2,   161,   158,     2,     2,     2,     2,     2,
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
     135,   136,   137,   138,   139,   140,   141,   142,   144,   145,
     148,   149,   150,   151,   152,   159
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   269,   269,   290,   296,   305,   309,   313,   316,   319,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   343,
     344,   349,   350,   354,   358,   370,   373,   376,   382,   383,
     390,   397,   400,   404,   418,   424,   433,   450,   454,   457,
     466,   480,   483,   488,   502,   515,   522,   529,   540,   541,
     545,   546,   550,   556,   557,   558,   559,   560,   561,   562,
     563,   567,   568,   569,   579,   585,   591,   599,   600,   609,
     618,   631,   638,   649,   650,   660,   669,   670,   674,   686,
     690,   694,   708,   709,   712,   713,   724,   725,   729,   739,
     752,   759,   763,   767,   774,   777,   783,   795,   796,   800,
     804,   805,   809,   814,   815,   819,   824,   828,   829,   833,
     834,   838,   839,   843,   847,   848,   849,   855,   856,   860,
     861,   862,   863,   864,   865,   872,   873,   877,   878,   882,
     883,   887,   897,   898,   899,   900,   901,   905,   906,   907,
     908,   909,   910,   911,   912,   913,   914,   915,   919,   920,
     924,   925,   926,   927,   928,   932,   933,   934,   935,   936,
     937,   938,   939,   940,   941,   942,   946,   947,   951,   952,
     953,   954,   960,   961,   962,   963,   967,   968,   972,   973,
     977,   978,   979,   980,   981,   982,   983,   987,   988,   992,
     996,  1000,  1001,  1002,  1003,  1004,  1005,  1009,  1013,  1017,
    1021,  1022,  1023,  1024,  1028,  1029,  1030,  1031,  1032,  1036,
    1040,  1041,  1045,  1046,  1050,  1054,  1058,  1070,  1071,  1081,
    1082,  1086,  1087,  1096,  1097,  1102,  1113,  1122,  1123,  1128,
    1129,  1134,  1135,  1140,  1141,  1146,  1147,  1156,  1157,  1161,
    1165,  1169,  1176,  1189,  1197,  1207,  1226,  1227,  1228,  1229,
    1230,  1231,  1232,  1233,  1234,  1235,  1240,  1249,  1250,  1255,
    1256
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STRING",
  "FLOATVAL", "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT",
  "TEMPORARY", "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE",
  "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT",
  "EXECUTE", "EXPLAIN", "INTEGER", "NATURAL", "PREPARE", "PRIMARY",
  "SCHEMAS", "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE",
  "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT",
  "EXISTS", "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT",
  "INSERT", "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED",
  "TABLES", "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER",
  "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL",
  "MERGE", "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING",
  "WHERE", "CALL", "CASE", "CHAR", "COPY", "DATE", "DESC", "DROP", "ELSE",
  "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE",
  "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW",
  "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT", "KEY",
  "NOT", "OFF", "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON",
  "OR", "TO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR",
  "DAY", "MONTH", "YEAR", "TRUE", "FALSE", "TRANSACTION", "BEGIN",
  "COMMIT", "ROLLBACK", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "column_def_commalist", "column_def", "column_type",
  "opt_column_nullable", "drop_statement", "opt_exists",
  "delete_statement", "truncate_statement", "insert_statement",
  "opt_column_list", "update_statement", "update_clause_commalist",
  "update_clause", "select_statement", "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "cast_expr", "datetime_field",
  "array_expr", "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "opt_with_clause",
  "with_clause", "with_description_list", "with_description",
  "join_clause", "opt_join_type", "join_condition", "opt_semicolon",
  "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
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
     395,   396,   397,    61,   398,   399,    60,    62,   400,   401,
     402,   403,   404,    43,    45,    42,    47,    37,    94,   405,
      91,    93,    40,    41,    46,    59,    44,    63
};
#endif

#define YYPACT_NINF (-368)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-258)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     506,    13,    39,    60,    83,    39,   -37,    37,    64,    35,
      39,    39,   -16,     5,   171,   108,   108,   108,   212,    92,
    -368,   114,  -368,   114,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,   -33,  -368,   226,   113,  -368,
     106,   201,  -368,   186,   186,    39,   305,    39,   192,  -368,
     -62,   190,   190,    39,  -368,   194,   148,  -368,  -368,  -368,
    -368,  -368,  -368,   501,  -368,   224,  -368,  -368,   198,   -33,
      24,  -368,    32,  -368,   317,    11,   320,   214,    39,    39,
     252,  -368,   245,   176,   336,   337,   337,   299,    39,    39,
    -368,   180,   171,  -368,   181,   338,   333,   183,   184,  -368,
    -368,  -368,   -33,   241,   230,   -33,    44,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,   188,   189,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,   311,   -61,   176,   280,
    -368,   337,   353,    38,   216,   -55,  -368,   255,  -368,   255,
    -368,  -368,  -368,  -368,  -368,   365,  -368,  -368,   280,  -368,
    -368,   290,  -368,  -368,    24,  -368,  -368,   280,   290,   280,
      79,  -368,  -368,    11,  -368,   367,   265,   369,   260,   135,
     218,   219,   221,   150,   322,   228,   220,  -368,   239,    53,
     349,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,   294,  -368,    65,
     227,  -368,   280,   336,  -368,   346,  -368,  -368,   229,    93,
    -368,   304,   231,  -368,    54,    44,   -33,   233,  -368,   101,
      44,    53,   350,   -13,  -368,   309,  -368,   272,   103,  -368,
     265,     2,    15,   351,   118,   280,   280,    55,   -24,   243,
     220,   538,   280,    80,   240,   -58,   280,   280,   220,  -368,
     220,   -66,   247,    -5,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   338,
      39,  -368,   404,    11,    53,  -368,   305,    11,  -368,   365,
      10,   252,  -368,   280,  -368,   407,  -368,  -368,  -368,  -368,
     280,  -368,  -368,  -368,  -368,   280,   280,   337,  -368,   249,
    -368,  -368,   250,  -368,  -368,  -368,   107,  -368,   369,  -368,
    -368,   280,  -368,  -368,   251,  -368,  -368,  -368,  -368,  -368,
    -368,   325,    89,    -7,    90,   280,   280,  -368,   351,   321,
     -38,  -368,  -368,  -368,   306,   470,   580,   220,   261,   239,
    -368,   324,   264,   580,   580,   580,   580,   416,   416,   416,
     416,    80,    80,   -84,   -84,   -84,   -89,   266,  -368,  -368,
     104,  -368,   110,  -368,   265,  -368,   359,  -368,   259,  -368,
      31,  -368,   363,  -368,  -368,  -368,    53,    53,  -368,   423,
     424,  -368,   340,  -368,  -368,   127,  -368,   280,   272,   280,
     280,  -368,    73,    49,   268,  -368,   220,   580,   239,   273,
     128,  -368,  -368,  -368,  -368,   276,   347,  -368,  -368,  -368,
     368,   370,   372,   356,    10,   443,  -368,  -368,  -368,   331,
    -368,   291,   292,  -368,  -368,   -48,   295,    53,    77,  -368,
     280,  -368,   538,   300,   132,  -368,  -368,    31,    10,  -368,
    -368,  -368,    10,   394,   307,   280,  -368,  -368,  -368,  -368,
    -368,    53,  -368,  -368,  -368,  -368,   577,   353,   -21,   308,
     280,   140,   280,  -368,    16,    53,  -368,  -368,    53,   293,
     303,  -368
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     238,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   258,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   237,     0,   227,    70,
      32,     0,    43,    49,    49,     0,     0,     0,     0,   226,
       0,    68,    68,     0,    41,     0,   239,   240,    28,    25,
      27,    26,     1,   238,     2,     0,     6,     5,   118,     0,
      79,    80,   110,    66,     0,   128,     0,     0,     0,     0,
     104,    36,     0,    74,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     4,     0,     0,    98,     0,     0,    92,
      93,    91,     0,    95,     0,     0,   124,   228,   209,   212,
     214,   215,   210,   211,   216,     0,   127,   129,   204,   205,
     206,   213,   207,   208,    31,    30,     0,     0,    74,     0,
      69,     0,     0,     0,     0,   104,    76,    39,    37,    39,
      67,    64,    65,   242,   241,     0,   117,    97,     0,    87,
      86,   110,    83,    82,    84,    94,    90,     0,   110,     0,
       0,    88,    33,     0,    48,     0,   238,     0,     0,   200,
       0,     0,     0,     0,     0,     0,     0,   202,     0,   103,
     132,   139,   140,   141,   134,   136,   142,   135,   155,   143,
     144,   145,   146,   138,   133,   148,   149,     0,   259,     0,
       0,    72,     0,     0,    75,     0,    35,    40,    23,     0,
      21,   101,    99,   125,   236,   124,     0,   109,   111,   116,
     124,   120,   122,   119,   130,     0,    46,     0,     0,    50,
     238,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   151,     0,   150,     0,     0,     0,     0,     0,   152,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,     0,    78,    77,     0,     0,    19,     0,
       0,   104,   100,     0,   234,     0,   235,   131,    81,    85,
       0,   115,   114,   113,    89,     0,     0,     0,    54,     0,
      57,    56,     0,    55,    60,    53,    63,    45,     0,    47,
     187,     0,   201,   203,     0,   191,   192,   193,   194,   195,
     196,     0,     0,     0,     0,     0,     0,   174,     0,     0,
       0,   147,   137,   166,   167,     0,   162,     0,     0,     0,
     153,     0,   165,   164,   180,   181,   182,   183,   184,   185,
     186,   157,   156,   159,   158,   160,   161,     0,    34,   260,
       0,    38,     0,    22,   238,   102,   217,   219,     0,   221,
     232,   220,   106,   126,   233,   112,   123,   121,    44,     0,
       0,    61,     0,    52,    51,     0,   178,     0,     0,     0,
       0,   172,     0,     0,     0,   197,     0,   163,     0,     0,
       0,   154,   198,    71,    24,     0,     0,   254,   246,   252,
     250,   253,   248,     0,     0,     0,   231,   225,   229,     0,
      96,     0,     0,    62,   188,     0,     0,   176,     0,   175,
       0,   179,   199,     0,     0,   170,   168,   232,     0,   249,
     251,   247,     0,   218,   233,     0,    58,    59,   189,   190,
     173,   177,   171,   169,   222,   243,   255,     0,   108,     0,
       0,     0,     0,   105,     0,   256,   244,   230,   107,   200,
       0,   245
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -368,  -368,  -368,   399,  -368,   450,  -368,   195,  -368,   173,
    -368,  -368,  -368,  -368,   199,   -76,   341,  -368,  -368,  -368,
     437,  -368,   174,    97,  -368,  -368,   434,  -368,  -368,  -368,
     362,  -368,  -368,   288,  -164,   -69,  -368,     8,   -64,   -51,
    -368,  -368,   -70,   267,  -368,  -368,  -368,  -113,  -368,  -368,
      81,  -368,   207,  -368,  -368,    59,  -241,  -368,   -59,   232,
    -129,  -124,  -368,  -368,  -368,  -368,  -368,  -368,   274,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,    46,   -71,
     -78,  -368,  -368,   -86,  -368,  -368,  -368,  -367,    74,  -368,
    -368,  -368,     1,  -368,    85,   310,  -368,  -368,  -368,  -368,
     422,  -368,  -368,  -368,  -368,    61
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    66,   209,   210,    22,    59,
      23,   125,    24,    25,    82,   137,   206,    26,    27,    28,
      78,   228,   229,   306,   383,    29,    88,    30,    31,    32,
     133,    33,   135,   136,    34,   151,   152,   153,    71,   102,
     103,   156,    72,   148,   211,   281,   282,   130,   420,   463,
     106,   217,   218,   293,    96,   161,   212,   115,   116,   213,
     214,   180,   181,   182,   183,   184,   185,   186,   238,   187,
     188,   189,   190,   191,   321,   192,   193,   194,   195,   196,
     118,   119,   120,   121,   122,   123,   365,   366,   367,   368,
     369,    48,   370,   416,   417,   418,   287,    35,    36,    56,
      57,   371,   413,   466,    64,   199
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     179,   330,   226,    39,   117,    98,    42,   138,   138,   146,
     139,    49,    50,    38,   147,   108,   109,   110,   312,   469,
      68,   105,   204,   129,    53,   462,    85,   165,   219,   337,
     221,   223,   154,    99,   284,   154,   158,   296,    43,    37,
     254,    99,    38,    70,   237,   254,    80,   443,    83,   245,
     241,   246,   243,   138,    90,   197,   338,   284,   166,    51,
      54,   246,   325,    40,   100,    86,   309,    44,   247,   201,
     385,   269,   100,   274,   268,   456,   269,    97,   247,   127,
     128,   326,   169,   108,   109,   110,    41,   327,    52,   141,
     142,    68,   224,   340,   159,   389,   246,   200,   400,   143,
     101,   167,   246,   216,   104,   332,   322,   323,   101,   111,
     341,   203,   160,   247,   244,   448,   241,   333,   334,   247,
     170,   171,   172,   395,   335,    45,   336,    47,   283,    69,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   283,   154,   289,   112,   113,
     415,   430,    46,   169,   108,   109,   110,   434,   246,   173,
     236,   219,   246,   246,   246,   310,   376,   377,   372,   314,
     313,   177,   364,   285,    55,   247,   390,   111,   114,   247,
     247,   247,   246,   357,   429,   291,   246,   222,   450,    60,
      61,   170,   171,   172,   174,   326,   392,   393,   246,   247,
     405,   391,   117,   247,   458,   381,   117,   175,   388,   254,
     246,   292,    62,   397,   360,   247,   112,   113,   362,   138,
      65,   378,   382,   169,   108,   109,   110,   247,   271,    73,
     173,   272,   215,   176,   177,   265,   266,   267,   268,   220,
     269,   178,   169,   108,   109,   110,   114,    58,   111,   315,
     316,   317,   318,   319,   320,   236,   278,    63,   425,   279,
     427,   428,   171,   172,   394,   174,   307,   403,    75,   308,
     163,   358,   432,   404,   288,   399,   163,    74,   175,   294,
     170,   171,   172,   169,   108,   109,   110,   112,   113,    76,
     424,   436,    68,   283,   283,   453,   298,   231,   283,   232,
     173,   451,   299,   467,   176,   177,   272,    77,    81,    84,
     300,    87,   178,    91,    92,    94,    95,   114,   111,   173,
     107,   170,   171,   172,   124,   169,   108,   109,   110,   126,
     129,   465,   131,   468,   433,   240,   301,   111,   132,   134,
     140,   108,    69,   145,   110,   147,   149,   150,   175,   155,
     157,   162,   164,   302,   174,   163,   198,   112,   113,   202,
     173,   205,   104,   239,   171,   172,   248,   175,   208,   303,
     225,    14,   227,   304,   176,   177,   112,   113,   111,   230,
     233,   234,   178,   235,   406,   305,   270,   114,   242,   273,
     276,   277,   280,   176,   177,   174,   297,   283,   249,   290,
     295,   178,   173,   331,    68,   328,   114,   359,   175,   339,
     374,   379,   380,   387,   386,   246,   337,   112,   113,   406,
     111,   407,   401,   398,   269,   414,   408,   402,   419,   421,
     422,   431,   409,   410,   176,   177,   435,   240,   423,   437,
     438,   439,   178,   440,   250,   441,   444,   114,   411,   442,
     175,   445,  -255,   412,   446,   447,   407,   232,   449,   112,
     113,   408,    93,   452,   251,   249,   471,   409,   410,   457,
     464,   252,   253,    67,   363,   361,   176,   177,   254,   255,
     207,    79,   384,   411,   178,   426,    89,  -255,   412,   114,
     168,   275,   256,   257,   258,   259,   260,   375,   311,   261,
     262,  -257,   263,   264,   265,   266,   267,   268,     1,   269,
     470,   324,   455,     1,   144,   373,     2,     0,   461,   249,
       0,     2,   454,     3,   286,  -223,     0,     4,     3,     0,
       0,     0,     4,     5,     0,     0,     6,     7,     5,   253,
       0,     6,     7,     0,     0,   254,     0,     0,     8,     9,
       0,     0,     0,     8,     9,     0,     0,     0,     0,    10,
    -224,     0,  -258,  -258,    10,   250,  -258,  -258,     0,   263,
     264,   265,   266,   267,   268,     0,   269,     0,     0,   396,
       0,     0,     0,    11,     0,   329,    12,   249,    11,     0,
       0,    12,     0,   253,     0,     0,     0,     0,     0,   254,
     255,    13,   406,     0,     0,     0,    13,    14,     0,     0,
       0,     0,    14,   256,   257,   258,   259,   260,     0,     0,
     261,   262,     0,   263,   264,   265,   266,   267,   268,   249,
     269,     0,     0,   250,     0,     0,     0,     0,     0,   407,
       0,    15,    16,    17,   408,     0,    15,    16,    17,     0,
     409,   410,     0,   329,   459,     0,     0,     0,     0,     0,
       0,   253,     0,     0,     0,     0,   411,   254,   255,     0,
       0,   412,     0,     0,     0,  -258,     0,     0,     0,     0,
       0,   256,   257,   258,   259,   260,     0,     0,   261,   262,
       0,   263,   264,   265,   266,   267,   268,     0,   269,     0,
       0,     0,   460,   253,     0,     0,     0,     0,     0,   254,
    -258,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -258,  -258,  -258,   259,   260,     0,     0,
     261,   262,     0,   263,   264,   265,   266,   267,   268,     0,
     269
};

static const yytype_int16 yycheck[] =
{
     129,   242,   166,     2,    75,    69,     5,    85,    86,    95,
      86,    10,    11,     3,    12,     4,     5,     6,     3,     3,
      53,    72,   135,    78,    19,    46,    88,    88,   157,    95,
     159,   160,   102,     9,     3,   105,   105,    50,    75,    26,
     129,     9,     3,    35,   173,   129,    45,   414,    47,   178,
     174,   109,   176,   131,    53,   131,   122,     3,   119,    75,
      55,   109,    86,     3,    40,   127,   230,   104,   126,   133,
     311,   160,    40,   202,   158,   442,   160,    69,   126,    78,
      79,   105,     3,     4,     5,     6,     3,   111,   104,    88,
      89,    53,   163,    98,    50,   102,   109,    59,   339,    91,
      76,   162,   109,   154,    72,   163,   235,   236,    76,    98,
     115,   166,    68,   126,   178,   163,   240,   246,   247,   126,
      41,    42,    43,   161,   248,    88,   250,    92,   166,   162,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   166,   216,   216,   137,   138,
     119,   102,    88,     3,     4,     5,     6,   398,   109,    80,
     105,   290,   109,   109,   109,   163,   295,   296,   281,   233,
     155,   155,   162,   119,     3,   126,    86,    98,   167,   126,
     126,   126,   109,   269,   111,    84,   109,   108,   111,    16,
      17,    41,    42,    43,   115,   105,   325,   326,   109,   126,
     364,   111,   273,   126,   445,    98,   277,   128,   119,   129,
     109,   110,     0,   337,   273,   126,   137,   138,   277,   297,
     106,   297,   115,     3,     4,     5,     6,   126,   163,     3,
      80,   166,   151,   154,   155,   155,   156,   157,   158,   158,
     160,   162,     3,     4,     5,     6,   167,   139,    98,   131,
     132,   133,   134,   135,   136,   105,   163,   165,   387,   166,
     389,   390,    42,    43,   328,   115,   163,   163,   162,   166,
     166,   270,   396,   163,   215,   339,   166,   164,   128,   220,
      41,    42,    43,     3,     4,     5,     6,   137,   138,    88,
     163,   163,    53,   166,   166,   163,    24,   162,   166,   164,
      80,   430,    30,   163,   154,   155,   166,   121,     3,   117,
      38,   121,   162,   119,   166,    91,   118,   167,    98,    80,
       3,    41,    42,    43,     4,     3,     4,     5,     6,   115,
      78,   460,    87,   462,   398,   115,    64,    98,   162,     3,
      41,     4,   162,   162,     6,    12,   163,   163,   128,   108,
     120,   163,    41,    81,   115,   166,     3,   137,   138,   143,
      80,   106,    72,    41,    42,    43,    17,   128,     3,    97,
       3,   106,     3,   101,   154,   155,   137,   138,    98,   119,
     162,   162,   162,   162,    25,   113,    92,   167,   160,   162,
      44,   162,    88,   154,   155,   115,    87,   166,    49,   166,
      50,   162,    80,   163,    53,   162,   167,     3,   128,   162,
       3,   162,   162,    88,   163,   109,    95,   137,   138,    25,
      98,    62,    98,   162,   160,   166,    67,   161,    65,     6,
       6,   163,    73,    74,   154,   155,   163,   115,    98,   163,
      93,    73,   162,    73,    95,    73,     3,   167,    89,    93,
     128,   120,    93,    94,   163,   163,    62,   164,   163,   137,
     138,    67,    63,   163,   115,    49,   163,    73,    74,   162,
     162,   122,   123,    23,   279,   276,   154,   155,   129,   130,
     139,    44,   308,    89,   162,   388,    52,    93,    94,   167,
     128,   203,   143,   144,   145,   146,   147,   290,   231,   150,
     151,     0,   153,   154,   155,   156,   157,   158,     7,   160,
     464,   237,   438,     7,    92,   283,    15,    -1,   457,    49,
      -1,    15,   437,    22,   214,   166,    -1,    26,    22,    -1,
      -1,    -1,    26,    32,    -1,    -1,    35,    36,    32,   123,
      -1,    35,    36,    -1,    -1,   129,    -1,    -1,    47,    48,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    58,
     166,    -1,   146,   147,    58,    95,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,    -1,   160,    -1,    -1,   109,
      -1,    -1,    -1,    82,    -1,   115,    85,    49,    82,    -1,
      -1,    85,    -1,   123,    -1,    -1,    -1,    -1,    -1,   129,
     130,   100,    25,    -1,    -1,    -1,   100,   106,    -1,    -1,
      -1,    -1,   106,   143,   144,   145,   146,   147,    -1,    -1,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,    49,
     160,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    62,
      -1,   140,   141,   142,    67,    -1,   140,   141,   142,    -1,
      73,    74,    -1,   115,    77,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    89,   129,   130,    -1,
      -1,    94,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,   143,   144,   145,   146,   147,    -1,    -1,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,    -1,   160,    -1,
      -1,    -1,   125,   123,    -1,    -1,    -1,    -1,    -1,   129,
     130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,   145,   146,   147,    -1,    -1,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,    -1,
     160
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    32,    35,    36,    47,    48,
      58,    82,    85,   100,   106,   140,   141,   142,   169,   170,
     171,   172,   176,   178,   180,   181,   185,   186,   187,   193,
     195,   196,   197,   199,   202,   265,   266,    26,     3,   260,
       3,     3,   260,    75,   104,    88,    88,    92,   259,   260,
     260,    75,   104,    19,    55,     3,   267,   268,   139,   177,
     177,   177,     0,   165,   272,   106,   173,   173,    53,   162,
     205,   206,   210,     3,   164,   162,    88,   121,   188,   188,
     260,     3,   182,   260,   117,    88,   127,   121,   194,   194,
     260,   119,   166,   171,    91,   118,   222,   205,   206,     9,
      40,    76,   207,   208,    72,   207,   218,     3,     4,     5,
       6,    98,   137,   138,   167,   225,   226,   247,   248,   249,
     250,   251,   252,   253,     4,   179,   115,   260,   260,    78,
     215,    87,   162,   198,     3,   200,   201,   183,   248,   183,
      41,   260,   260,   205,   268,   162,   251,    12,   211,   163,
     163,   203,   204,   205,   210,   108,   209,   120,   203,    50,
      68,   223,   163,   166,    41,    88,   119,   162,   198,     3,
      41,    42,    43,    80,   115,   128,   154,   155,   162,   228,
     229,   230,   231,   232,   233,   234,   235,   237,   238,   239,
     240,   241,   243,   244,   245,   246,   247,   183,     3,   273,
      59,   206,   143,   166,   215,   106,   184,   184,     3,   174,
     175,   212,   224,   227,   228,   218,   207,   219,   220,   228,
     218,   228,   108,   228,   247,     3,   202,     3,   189,   190,
     119,   162,   164,   162,   162,   162,   105,   228,   236,    41,
     115,   229,   160,   229,   206,   228,   109,   126,    17,    49,
      95,   115,   122,   123,   129,   130,   143,   144,   145,   146,
     147,   150,   151,   153,   154,   155,   156,   157,   158,   160,
      92,   163,   166,   162,   228,   201,    44,   162,   163,   166,
      88,   213,   214,   166,     3,   119,   263,   264,   223,   203,
     166,    84,   110,   221,   223,    50,    50,    87,    24,    30,
      38,    64,    81,    97,   101,   113,   191,   163,   166,   202,
     163,   211,     3,   155,   206,   131,   132,   133,   134,   135,
     136,   242,   228,   228,   236,    86,   105,   111,   162,   115,
     224,   163,   163,   228,   228,   229,   229,    95,   122,   162,
      98,   115,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   251,   260,     3,
     226,   182,   226,   175,   162,   254,   255,   256,   257,   258,
     260,   269,   215,   227,     3,   220,   228,   228,   183,   162,
     162,    98,   115,   192,   190,   224,   163,    88,   119,   102,
      86,   111,   228,   228,   206,   161,   109,   229,   162,   206,
     224,    98,   161,   163,   163,   202,    25,    62,    67,    73,
      74,    89,    94,   270,   166,   119,   261,   262,   263,    65,
     216,     6,     6,    98,   163,   228,   191,   228,   228,   111,
     102,   163,   229,   206,   224,   163,   163,   163,    93,    73,
      73,    73,    93,   255,     3,   120,   163,   163,   163,   163,
     111,   228,   163,   163,   262,   256,   255,   162,   224,    77,
     125,   273,    46,   217,   162,   228,   271,   163,   228,     3,
     246,   163
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   168,   169,   170,   170,   171,   171,   171,   171,   171,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   173,
     173,   174,   174,   175,   175,   176,   176,   176,   177,   177,
     178,   179,   180,   180,   181,   181,   182,   183,   184,   184,
     185,   186,   186,   186,   187,   187,   187,   187,   188,   188,
     189,   189,   190,   191,   191,   191,   191,   191,   191,   191,
     191,   192,   192,   192,   193,   193,   193,   194,   194,   195,
     196,   197,   197,   198,   198,   199,   200,   200,   201,   202,
     202,   202,   203,   203,   204,   204,   205,   205,   206,   206,
     207,   208,   208,   208,   209,   209,   210,   211,   211,   212,
     213,   213,   214,   215,   215,   216,   216,   217,   217,   218,
     218,   219,   219,   220,   221,   221,   221,   222,   222,   223,
     223,   223,   223,   223,   223,   224,   224,   225,   225,   226,
     226,   227,   228,   228,   228,   228,   228,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   230,   230,
     231,   231,   231,   231,   231,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   233,   233,   234,   234,
     234,   234,   235,   235,   235,   235,   236,   236,   237,   237,
     238,   238,   238,   238,   238,   238,   238,   239,   239,   240,
     241,   242,   242,   242,   242,   242,   242,   243,   244,   245,
     246,   246,   246,   246,   247,   247,   247,   247,   247,   248,
     249,   249,   250,   250,   251,   252,   253,   254,   254,   255,
     255,   256,   256,   257,   257,   258,   259,   260,   260,   261,
     261,   262,   262,   263,   263,   264,   264,   265,   265,   266,
     267,   267,   268,   269,   269,   269,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   271,   272,   272,   273,
     273
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     1,     3,     1,     4,     2,     2,     2,     1,     0,
       4,     1,     2,     5,     7,     5,     1,     1,     3,     0,
       5,     2,     3,     2,     8,     7,     6,     7,     3,     0,
       1,     3,     3,     1,     1,     1,     1,     1,     4,     4,
       1,     1,     2,     0,     4,     4,     3,     2,     0,     4,
       2,     8,     5,     3,     0,     5,     1,     3,     3,     2,
       2,     6,     1,     1,     1,     3,     3,     3,     3,     5,
       2,     1,     1,     1,     1,     0,     7,     1,     0,     1,
       1,     0,     2,     2,     0,     4,     0,     2,     0,     3,
       0,     1,     3,     2,     1,     1,     0,     2,     0,     2,
       2,     4,     2,     4,     0,     1,     3,     1,     0,     1,
       3,     2,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       2,     2,     2,     3,     4,     1,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     3,     3,     3,     5,     6,
       5,     6,     4,     6,     3,     5,     4,     5,     4,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     6,
       6,     1,     1,     1,     1,     1,     1,     4,     4,     5,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     4,     1,     3,     2,     1,     1,     3,     1,
       5,     1,     0,     2,     1,     1,     0,     1,     0,     2,
       1,     3,     3,     4,     6,     8,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     0,     1,     1,     0,     1,
       3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = SQL_HSQL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == SQL_HSQL_EMPTY)                                        \
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

/* Backward compatibility with an undocumented macro.
   Use SQL_HSQL_error or SQL_HSQL_UNDEF. */
#define YYERRCODE SQL_HSQL_UNDEF

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

# ifndef YY_LOCATION_PRINT
#  if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
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

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), result, scanner);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case 3: /* IDENTIFIER  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2186 "bison_parser.cpp"
        break;

    case 4: /* STRING  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2192 "bison_parser.cpp"
        break;

    case 5: /* FLOATVAL  */
#line 147 "bison_parser.y"
            { }
#line 2198 "bison_parser.cpp"
        break;

    case 6: /* INTVAL  */
#line 147 "bison_parser.y"
            { }
#line 2204 "bison_parser.cpp"
        break;

    case 170: /* statement_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 2217 "bison_parser.cpp"
        break;

    case 171: /* statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2223 "bison_parser.cpp"
        break;

    case 172: /* preparable_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2229 "bison_parser.cpp"
        break;

    case 173: /* opt_hints  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2242 "bison_parser.cpp"
        break;

    case 174: /* hint_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2255 "bison_parser.cpp"
        break;

    case 175: /* hint  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2261 "bison_parser.cpp"
        break;

    case 176: /* transaction_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2267 "bison_parser.cpp"
        break;

    case 178: /* prepare_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2273 "bison_parser.cpp"
        break;

    case 179: /* prepare_target_query  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2279 "bison_parser.cpp"
        break;

    case 180: /* execute_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2285 "bison_parser.cpp"
        break;

    case 181: /* import_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2291 "bison_parser.cpp"
        break;

    case 182: /* file_type  */
#line 147 "bison_parser.y"
            { }
#line 2297 "bison_parser.cpp"
        break;

    case 183: /* file_path  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2303 "bison_parser.cpp"
        break;

    case 184: /* opt_file_type  */
#line 147 "bison_parser.y"
            { }
#line 2309 "bison_parser.cpp"
        break;

    case 185: /* export_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2315 "bison_parser.cpp"
        break;

    case 186: /* show_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2321 "bison_parser.cpp"
        break;

    case 187: /* create_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2327 "bison_parser.cpp"
        break;

    case 188: /* opt_not_exists  */
#line 147 "bison_parser.y"
            { }
#line 2333 "bison_parser.cpp"
        break;

    case 189: /* column_def_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 2346 "bison_parser.cpp"
        break;

    case 190: /* column_def  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2352 "bison_parser.cpp"
        break;

    case 191: /* column_type  */
#line 147 "bison_parser.y"
            { }
#line 2358 "bison_parser.cpp"
        break;

    case 192: /* opt_column_nullable  */
#line 147 "bison_parser.y"
            { }
#line 2364 "bison_parser.cpp"
        break;

    case 193: /* drop_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2370 "bison_parser.cpp"
        break;

    case 194: /* opt_exists  */
#line 147 "bison_parser.y"
            { }
#line 2376 "bison_parser.cpp"
        break;

    case 195: /* delete_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2382 "bison_parser.cpp"
        break;

    case 196: /* truncate_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2388 "bison_parser.cpp"
        break;

    case 197: /* insert_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2394 "bison_parser.cpp"
        break;

    case 198: /* opt_column_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2407 "bison_parser.cpp"
        break;

    case 199: /* update_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2413 "bison_parser.cpp"
        break;

    case 200: /* update_clause_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2426 "bison_parser.cpp"
        break;

    case 201: /* update_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2432 "bison_parser.cpp"
        break;

    case 202: /* select_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2438 "bison_parser.cpp"
        break;

    case 203: /* select_within_set_operation  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2444 "bison_parser.cpp"
        break;

    case 204: /* select_within_set_operation_no_parentheses  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2450 "bison_parser.cpp"
        break;

    case 205: /* select_with_paren  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2456 "bison_parser.cpp"
        break;

    case 206: /* select_no_paren  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2462 "bison_parser.cpp"
        break;

    case 207: /* set_operator  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2468 "bison_parser.cpp"
        break;

    case 208: /* set_type  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2474 "bison_parser.cpp"
        break;

    case 209: /* opt_all  */
#line 147 "bison_parser.y"
            { }
#line 2480 "bison_parser.cpp"
        break;

    case 210: /* select_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2486 "bison_parser.cpp"
        break;

    case 211: /* opt_distinct  */
#line 147 "bison_parser.y"
            { }
#line 2492 "bison_parser.cpp"
        break;

    case 212: /* select_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2505 "bison_parser.cpp"
        break;

    case 213: /* opt_from_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2511 "bison_parser.cpp"
        break;

    case 214: /* from_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2517 "bison_parser.cpp"
        break;

    case 215: /* opt_where  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2523 "bison_parser.cpp"
        break;

    case 216: /* opt_group  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2529 "bison_parser.cpp"
        break;

    case 217: /* opt_having  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2535 "bison_parser.cpp"
        break;

    case 218: /* opt_order  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2548 "bison_parser.cpp"
        break;

    case 219: /* order_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2561 "bison_parser.cpp"
        break;

    case 220: /* order_desc  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2567 "bison_parser.cpp"
        break;

    case 221: /* opt_order_type  */
#line 147 "bison_parser.y"
            { }
#line 2573 "bison_parser.cpp"
        break;

    case 222: /* opt_top  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2579 "bison_parser.cpp"
        break;

    case 223: /* opt_limit  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2585 "bison_parser.cpp"
        break;

    case 224: /* expr_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2598 "bison_parser.cpp"
        break;

    case 225: /* opt_literal_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2611 "bison_parser.cpp"
        break;

    case 226: /* literal_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2624 "bison_parser.cpp"
        break;

    case 227: /* expr_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2630 "bison_parser.cpp"
        break;

    case 228: /* expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2636 "bison_parser.cpp"
        break;

    case 229: /* operand  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2642 "bison_parser.cpp"
        break;

    case 230: /* scalar_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2648 "bison_parser.cpp"
        break;

    case 231: /* unary_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2654 "bison_parser.cpp"
        break;

    case 232: /* binary_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2660 "bison_parser.cpp"
        break;

    case 233: /* logic_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2666 "bison_parser.cpp"
        break;

    case 234: /* in_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2672 "bison_parser.cpp"
        break;

    case 235: /* case_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2678 "bison_parser.cpp"
        break;

    case 236: /* case_list  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2684 "bison_parser.cpp"
        break;

    case 237: /* exists_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2690 "bison_parser.cpp"
        break;

    case 238: /* comp_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2696 "bison_parser.cpp"
        break;

    case 239: /* function_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2702 "bison_parser.cpp"
        break;

    case 240: /* extract_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2708 "bison_parser.cpp"
        break;

    case 241: /* cast_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2714 "bison_parser.cpp"
        break;

    case 242: /* datetime_field  */
#line 147 "bison_parser.y"
            { }
#line 2720 "bison_parser.cpp"
        break;

    case 243: /* array_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2726 "bison_parser.cpp"
        break;

    case 244: /* array_index  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2732 "bison_parser.cpp"
        break;

    case 245: /* between_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2738 "bison_parser.cpp"
        break;

    case 246: /* column_name  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2744 "bison_parser.cpp"
        break;

    case 247: /* literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2750 "bison_parser.cpp"
        break;

    case 248: /* string_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2756 "bison_parser.cpp"
        break;

    case 249: /* bool_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2762 "bison_parser.cpp"
        break;

    case 250: /* num_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2768 "bison_parser.cpp"
        break;

    case 251: /* int_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2774 "bison_parser.cpp"
        break;

    case 252: /* null_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2780 "bison_parser.cpp"
        break;

    case 253: /* param_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2786 "bison_parser.cpp"
        break;

    case 254: /* table_ref  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2792 "bison_parser.cpp"
        break;

    case 255: /* table_ref_atomic  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2798 "bison_parser.cpp"
        break;

    case 256: /* nonjoin_table_ref_atomic  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2804 "bison_parser.cpp"
        break;

    case 257: /* table_ref_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2817 "bison_parser.cpp"
        break;

    case 258: /* table_ref_name  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2823 "bison_parser.cpp"
        break;

    case 259: /* table_ref_name_no_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2829 "bison_parser.cpp"
        break;

    case 260: /* table_name  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2835 "bison_parser.cpp"
        break;

    case 261: /* table_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2841 "bison_parser.cpp"
        break;

    case 262: /* opt_table_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2847 "bison_parser.cpp"
        break;

    case 263: /* alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2853 "bison_parser.cpp"
        break;

    case 264: /* opt_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2859 "bison_parser.cpp"
        break;

    case 265: /* opt_with_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2865 "bison_parser.cpp"
        break;

    case 266: /* with_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2871 "bison_parser.cpp"
        break;

    case 267: /* with_description_list  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2877 "bison_parser.cpp"
        break;

    case 268: /* with_description  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2883 "bison_parser.cpp"
        break;

    case 269: /* join_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2889 "bison_parser.cpp"
        break;

    case 270: /* opt_join_type  */
#line 147 "bison_parser.y"
            { }
#line 2895 "bison_parser.cpp"
        break;

    case 271: /* join_condition  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2901 "bison_parser.cpp"
        break;

    case 273: /* ident_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2914 "bison_parser.cpp"
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

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;


  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = SQL_HSQL_EMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 73 "bison_parser.y"
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 3036 "bison_parser.cpp"

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
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

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == SQL_HSQL_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= SQL_YYEOF)
    {
      yychar = SQL_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == SQL_HSQL_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = SQL_HSQL_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = SQL_HSQL_EMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 269 "bison_parser.y"
                                             {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}

			unsigned param_id = 0;
			for (void* param : yyloc.param_list) {
				if (param != nullptr) {
					Expr* expr = (Expr*) param;
					expr->ival = param_id;
					result->addParameter(expr);
					++param_id;
				}
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 3264 "bison_parser.cpp"
    break;

  case 3:
#line 290 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3275 "bison_parser.cpp"
    break;

  case 4:
#line 296 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3286 "bison_parser.cpp"
    break;

  case 5:
#line 305 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3295 "bison_parser.cpp"
    break;

  case 6:
#line 309 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3304 "bison_parser.cpp"
    break;

  case 7:
#line 313 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3312 "bison_parser.cpp"
    break;

  case 8:
#line 316 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3320 "bison_parser.cpp"
    break;

  case 9:
#line 319 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3328 "bison_parser.cpp"
    break;

  case 10:
#line 326 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3334 "bison_parser.cpp"
    break;

  case 11:
#line 327 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3340 "bison_parser.cpp"
    break;

  case 12:
#line 328 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3346 "bison_parser.cpp"
    break;

  case 13:
#line 329 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3352 "bison_parser.cpp"
    break;

  case 14:
#line 330 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3358 "bison_parser.cpp"
    break;

  case 15:
#line 331 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3364 "bison_parser.cpp"
    break;

  case 16:
#line 332 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3370 "bison_parser.cpp"
    break;

  case 17:
#line 333 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3376 "bison_parser.cpp"
    break;

  case 18:
#line 334 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3382 "bison_parser.cpp"
    break;

  case 19:
#line 343 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3388 "bison_parser.cpp"
    break;

  case 20:
#line 344 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3394 "bison_parser.cpp"
    break;

  case 21:
#line 349 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3400 "bison_parser.cpp"
    break;

  case 22:
#line 350 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3406 "bison_parser.cpp"
    break;

  case 23:
#line 354 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3415 "bison_parser.cpp"
    break;

  case 24:
#line 358 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3425 "bison_parser.cpp"
    break;

  case 25:
#line 370 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3433 "bison_parser.cpp"
    break;

  case 26:
#line 373 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3441 "bison_parser.cpp"
    break;

  case 27:
#line 376 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3449 "bison_parser.cpp"
    break;

  case 30:
#line 390 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3459 "bison_parser.cpp"
    break;

  case 32:
#line 400 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3468 "bison_parser.cpp"
    break;

  case 33:
#line 404 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3478 "bison_parser.cpp"
    break;

  case 34:
#line 418 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3489 "bison_parser.cpp"
    break;

  case 35:
#line 424 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3500 "bison_parser.cpp"
    break;

  case 36:
#line 433 "bison_parser.y"
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
#line 3519 "bison_parser.cpp"
    break;

  case 37:
#line 450 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3525 "bison_parser.cpp"
    break;

  case 38:
#line 454 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3533 "bison_parser.cpp"
    break;

  case 39:
#line 457 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3539 "bison_parser.cpp"
    break;

  case 40:
#line 466 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3550 "bison_parser.cpp"
    break;

  case 41:
#line 480 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3558 "bison_parser.cpp"
    break;

  case 42:
#line 483 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3568 "bison_parser.cpp"
    break;

  case 43:
#line 488 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3578 "bison_parser.cpp"
    break;

  case 44:
#line 502 "bison_parser.y"
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
#line 3596 "bison_parser.cpp"
    break;

  case 45:
#line 515 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3608 "bison_parser.cpp"
    break;

  case 46:
#line 522 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3620 "bison_parser.cpp"
    break;

  case 47:
#line 529 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3633 "bison_parser.cpp"
    break;

  case 48:
#line 540 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3639 "bison_parser.cpp"
    break;

  case 49:
#line 541 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3645 "bison_parser.cpp"
    break;

  case 50:
#line 545 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3651 "bison_parser.cpp"
    break;

  case 51:
#line 546 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3657 "bison_parser.cpp"
    break;

  case 52:
#line 550 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3665 "bison_parser.cpp"
    break;

  case 53:
#line 556 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3671 "bison_parser.cpp"
    break;

  case 54:
#line 557 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3677 "bison_parser.cpp"
    break;

  case 55:
#line 558 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3683 "bison_parser.cpp"
    break;

  case 56:
#line 559 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3689 "bison_parser.cpp"
    break;

  case 57:
#line 560 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3695 "bison_parser.cpp"
    break;

  case 58:
#line 561 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3701 "bison_parser.cpp"
    break;

  case 59:
#line 562 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3707 "bison_parser.cpp"
    break;

  case 60:
#line 563 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3713 "bison_parser.cpp"
    break;

  case 61:
#line 567 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3719 "bison_parser.cpp"
    break;

  case 62:
#line 568 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3725 "bison_parser.cpp"
    break;

  case 63:
#line 569 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3731 "bison_parser.cpp"
    break;

  case 64:
#line 579 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3742 "bison_parser.cpp"
    break;

  case 65:
#line 585 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3753 "bison_parser.cpp"
    break;

  case 66:
#line 591 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3763 "bison_parser.cpp"
    break;

  case 67:
#line 599 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3769 "bison_parser.cpp"
    break;

  case 68:
#line 600 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3775 "bison_parser.cpp"
    break;

  case 69:
#line 609 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3786 "bison_parser.cpp"
    break;

  case 70:
#line 618 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3796 "bison_parser.cpp"
    break;

  case 71:
#line 631 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3808 "bison_parser.cpp"
    break;

  case 72:
#line 638 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3820 "bison_parser.cpp"
    break;

  case 73:
#line 649 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3826 "bison_parser.cpp"
    break;

  case 74:
#line 650 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3832 "bison_parser.cpp"
    break;

  case 75:
#line 660 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3843 "bison_parser.cpp"
    break;

  case 76:
#line 669 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3849 "bison_parser.cpp"
    break;

  case 77:
#line 670 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3855 "bison_parser.cpp"
    break;

  case 78:
#line 674 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3865 "bison_parser.cpp"
    break;

  case 79:
#line 686 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3874 "bison_parser.cpp"
    break;

  case 80:
#line 690 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3883 "bison_parser.cpp"
    break;

  case 81:
#line 694 "bison_parser.y"
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
#line 3899 "bison_parser.cpp"
    break;

  case 84:
#line 712 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3905 "bison_parser.cpp"
    break;

  case 85:
#line 713 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3918 "bison_parser.cpp"
    break;

  case 86:
#line 724 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3924 "bison_parser.cpp"
    break;

  case 87:
#line 725 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3930 "bison_parser.cpp"
    break;

  case 88:
#line 729 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3945 "bison_parser.cpp"
    break;

  case 89:
#line 739 "bison_parser.y"
                                                                                           {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperations == nullptr) {
				(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
			}
			(yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
		}
#line 3960 "bison_parser.cpp"
    break;

  case 90:
#line 752 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3969 "bison_parser.cpp"
    break;

  case 91:
#line 759 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3978 "bison_parser.cpp"
    break;

  case 92:
#line 763 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3987 "bison_parser.cpp"
    break;

  case 93:
#line 767 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3996 "bison_parser.cpp"
    break;

  case 94:
#line 774 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 4004 "bison_parser.cpp"
    break;

  case 95:
#line 777 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 4012 "bison_parser.cpp"
    break;

  case 96:
#line 783 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 4026 "bison_parser.cpp"
    break;

  case 97:
#line 795 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 4032 "bison_parser.cpp"
    break;

  case 98:
#line 796 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 4038 "bison_parser.cpp"
    break;

  case 100:
#line 804 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 4044 "bison_parser.cpp"
    break;

  case 101:
#line 805 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 4050 "bison_parser.cpp"
    break;

  case 102:
#line 809 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 4056 "bison_parser.cpp"
    break;

  case 103:
#line 814 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 4062 "bison_parser.cpp"
    break;

  case 104:
#line 815 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4068 "bison_parser.cpp"
    break;

  case 105:
#line 819 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 4078 "bison_parser.cpp"
    break;

  case 106:
#line 824 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 4084 "bison_parser.cpp"
    break;

  case 107:
#line 828 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 4090 "bison_parser.cpp"
    break;

  case 108:
#line 829 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4096 "bison_parser.cpp"
    break;

  case 109:
#line 833 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4102 "bison_parser.cpp"
    break;

  case 110:
#line 834 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 4108 "bison_parser.cpp"
    break;

  case 111:
#line 838 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 4114 "bison_parser.cpp"
    break;

  case 112:
#line 839 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 4120 "bison_parser.cpp"
    break;

  case 113:
#line 843 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4126 "bison_parser.cpp"
    break;

  case 114:
#line 847 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 4132 "bison_parser.cpp"
    break;

  case 115:
#line 848 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 4138 "bison_parser.cpp"
    break;

  case 116:
#line 849 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 4144 "bison_parser.cpp"
    break;

  case 117:
#line 855 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4150 "bison_parser.cpp"
    break;

  case 118:
#line 856 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4156 "bison_parser.cpp"
    break;

  case 119:
#line 860 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4162 "bison_parser.cpp"
    break;

  case 120:
#line 861 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4168 "bison_parser.cpp"
    break;

  case 121:
#line 862 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4174 "bison_parser.cpp"
    break;

  case 122:
#line 863 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4180 "bison_parser.cpp"
    break;

  case 123:
#line 864 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4186 "bison_parser.cpp"
    break;

  case 124:
#line 865 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4192 "bison_parser.cpp"
    break;

  case 125:
#line 872 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4198 "bison_parser.cpp"
    break;

  case 126:
#line 873 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4204 "bison_parser.cpp"
    break;

  case 127:
#line 877 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4210 "bison_parser.cpp"
    break;

  case 128:
#line 878 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 4216 "bison_parser.cpp"
    break;

  case 129:
#line 882 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4222 "bison_parser.cpp"
    break;

  case 130:
#line 883 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4228 "bison_parser.cpp"
    break;

  case 131:
#line 887 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4240 "bison_parser.cpp"
    break;

  case 137:
#line 905 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4246 "bison_parser.cpp"
    break;

  case 147:
#line 915 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4252 "bison_parser.cpp"
    break;

  case 150:
#line 924 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4258 "bison_parser.cpp"
    break;

  case 151:
#line 925 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4264 "bison_parser.cpp"
    break;

  case 152:
#line 926 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4270 "bison_parser.cpp"
    break;

  case 153:
#line 927 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4276 "bison_parser.cpp"
    break;

  case 154:
#line 928 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4282 "bison_parser.cpp"
    break;

  case 156:
#line 933 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4288 "bison_parser.cpp"
    break;

  case 157:
#line 934 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4294 "bison_parser.cpp"
    break;

  case 158:
#line 935 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4300 "bison_parser.cpp"
    break;

  case 159:
#line 936 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4306 "bison_parser.cpp"
    break;

  case 160:
#line 937 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4312 "bison_parser.cpp"
    break;

  case 161:
#line 938 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4318 "bison_parser.cpp"
    break;

  case 162:
#line 939 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4324 "bison_parser.cpp"
    break;

  case 163:
#line 940 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4330 "bison_parser.cpp"
    break;

  case 164:
#line 941 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4336 "bison_parser.cpp"
    break;

  case 165:
#line 942 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4342 "bison_parser.cpp"
    break;

  case 166:
#line 946 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4348 "bison_parser.cpp"
    break;

  case 167:
#line 947 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4354 "bison_parser.cpp"
    break;

  case 168:
#line 951 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4360 "bison_parser.cpp"
    break;

  case 169:
#line 952 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4366 "bison_parser.cpp"
    break;

  case 170:
#line 953 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4372 "bison_parser.cpp"
    break;

  case 171:
#line 954 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4378 "bison_parser.cpp"
    break;

  case 172:
#line 960 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4384 "bison_parser.cpp"
    break;

  case 173:
#line 961 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4390 "bison_parser.cpp"
    break;

  case 174:
#line 962 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4396 "bison_parser.cpp"
    break;

  case 175:
#line 963 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4402 "bison_parser.cpp"
    break;

  case 176:
#line 967 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4408 "bison_parser.cpp"
    break;

  case 177:
#line 968 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4414 "bison_parser.cpp"
    break;

  case 178:
#line 972 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4420 "bison_parser.cpp"
    break;

  case 179:
#line 973 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4426 "bison_parser.cpp"
    break;

  case 180:
#line 977 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4432 "bison_parser.cpp"
    break;

  case 181:
#line 978 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4438 "bison_parser.cpp"
    break;

  case 182:
#line 979 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4444 "bison_parser.cpp"
    break;

  case 183:
#line 980 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4450 "bison_parser.cpp"
    break;

  case 184:
#line 981 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4456 "bison_parser.cpp"
    break;

  case 185:
#line 982 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4462 "bison_parser.cpp"
    break;

  case 186:
#line 983 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4468 "bison_parser.cpp"
    break;

  case 187:
#line 987 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4474 "bison_parser.cpp"
    break;

  case 188:
#line 988 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4480 "bison_parser.cpp"
    break;

  case 189:
#line 992 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4486 "bison_parser.cpp"
    break;

  case 190:
#line 996 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4492 "bison_parser.cpp"
    break;

  case 191:
#line 1000 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4498 "bison_parser.cpp"
    break;

  case 192:
#line 1001 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4504 "bison_parser.cpp"
    break;

  case 193:
#line 1002 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4510 "bison_parser.cpp"
    break;

  case 194:
#line 1003 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4516 "bison_parser.cpp"
    break;

  case 195:
#line 1004 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4522 "bison_parser.cpp"
    break;

  case 196:
#line 1005 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4528 "bison_parser.cpp"
    break;

  case 197:
#line 1009 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4534 "bison_parser.cpp"
    break;

  case 198:
#line 1013 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4540 "bison_parser.cpp"
    break;

  case 199:
#line 1017 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4546 "bison_parser.cpp"
    break;

  case 200:
#line 1021 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4552 "bison_parser.cpp"
    break;

  case 201:
#line 1022 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4558 "bison_parser.cpp"
    break;

  case 202:
#line 1023 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4564 "bison_parser.cpp"
    break;

  case 203:
#line 1024 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4570 "bison_parser.cpp"
    break;

  case 209:
#line 1036 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4576 "bison_parser.cpp"
    break;

  case 210:
#line 1040 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4582 "bison_parser.cpp"
    break;

  case 211:
#line 1041 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4588 "bison_parser.cpp"
    break;

  case 212:
#line 1045 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4594 "bison_parser.cpp"
    break;

  case 214:
#line 1050 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4600 "bison_parser.cpp"
    break;

  case 215:
#line 1054 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4606 "bison_parser.cpp"
    break;

  case 216:
#line 1058 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4616 "bison_parser.cpp"
    break;

  case 218:
#line 1071 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4627 "bison_parser.cpp"
    break;

  case 222:
#line 1087 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4638 "bison_parser.cpp"
    break;

  case 223:
#line 1096 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4644 "bison_parser.cpp"
    break;

  case 224:
#line 1097 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4650 "bison_parser.cpp"
    break;

  case 225:
#line 1102 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4662 "bison_parser.cpp"
    break;

  case 226:
#line 1113 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4672 "bison_parser.cpp"
    break;

  case 227:
#line 1122 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4678 "bison_parser.cpp"
    break;

  case 228:
#line 1123 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4684 "bison_parser.cpp"
    break;

  case 230:
#line 1129 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4690 "bison_parser.cpp"
    break;

  case 232:
#line 1135 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4696 "bison_parser.cpp"
    break;

  case 233:
#line 1140 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4702 "bison_parser.cpp"
    break;

  case 234:
#line 1141 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4708 "bison_parser.cpp"
    break;

  case 236:
#line 1147 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4714 "bison_parser.cpp"
    break;

  case 238:
#line 1157 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4720 "bison_parser.cpp"
    break;

  case 239:
#line 1161 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4726 "bison_parser.cpp"
    break;

  case 240:
#line 1165 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4735 "bison_parser.cpp"
    break;

  case 241:
#line 1169 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4744 "bison_parser.cpp"
    break;

  case 242:
#line 1176 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4754 "bison_parser.cpp"
    break;

  case 243:
#line 1190 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4766 "bison_parser.cpp"
    break;

  case 244:
#line 1198 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4779 "bison_parser.cpp"
    break;

  case 245:
#line 1208 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-6].uval);
			(yyval.table)->join->left = (yyvsp[-7].table);
			(yyval.table)->join->right = (yyvsp[-4].table);
			auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
			auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
			(yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
			delete (yyvsp[-1].expr);
		}
#line 4799 "bison_parser.cpp"
    break;

  case 246:
#line 1226 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4805 "bison_parser.cpp"
    break;

  case 247:
#line 1227 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4811 "bison_parser.cpp"
    break;

  case 248:
#line 1228 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4817 "bison_parser.cpp"
    break;

  case 249:
#line 1229 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4823 "bison_parser.cpp"
    break;

  case 250:
#line 1230 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4829 "bison_parser.cpp"
    break;

  case 251:
#line 1231 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4835 "bison_parser.cpp"
    break;

  case 252:
#line 1232 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4841 "bison_parser.cpp"
    break;

  case 253:
#line 1233 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4847 "bison_parser.cpp"
    break;

  case 254:
#line 1234 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4853 "bison_parser.cpp"
    break;

  case 255:
#line 1235 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4859 "bison_parser.cpp"
    break;

  case 259:
#line 1255 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4865 "bison_parser.cpp"
    break;

  case 260:
#line 1256 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4871 "bison_parser.cpp"
    break;


#line 4875 "bison_parser.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == SQL_HSQL_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= SQL_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == SQL_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = SQL_HSQL_EMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != SQL_HSQL_EMPTY)
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1259 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
