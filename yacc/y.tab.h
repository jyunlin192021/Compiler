/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TYPE = 258,                    /* TYPE  */
    VOID = 259,                    /* VOID  */
    STATIC = 260,                  /* STATIC  */
    FINAL = 261,                   /* FINAL  */
    CLASS = 262,                   /* CLASS  */
    MAIN = 263,                    /* MAIN  */
    NEW = 264,                     /* NEW  */
    PUBLIC = 265,                  /* PUBLIC  */
    PROTECTED = 266,               /* PROTECTED  */
    PRIVATE = 267,                 /* PRIVATE  */
    READ = 268,                    /* READ  */
    PRINT = 269,                   /* PRINT  */
    CONST = 270,                   /* CONST  */
    IF = 271,                      /* IF  */
    ELSEIF = 272,                  /* ELSEIF  */
    ELSE = 273,                    /* ELSE  */
    SWITCH = 274,                  /* SWITCH  */
    CASE = 275,                    /* CASE  */
    BREAK = 276,                   /* BREAK  */
    DEFAULT = 277,                 /* DEFAULT  */
    FOR = 278,                     /* FOR  */
    DO = 279,                      /* DO  */
    WHILE = 280,                   /* WHILE  */
    CONTINUE = 281,                /* CONTINUE  */
    RETURN = 282,                  /* RETURN  */
    SEMICOLON = 283,               /* SEMICOLON  */
    COLON = 284,                   /* COLON  */
    COMMA = 285,                   /* COMMA  */
    DOT = 286,                     /* DOT  */
    square_brackets_l = 287,       /* square_brackets_l  */
    Brackets_l = 288,              /* Brackets_l  */
    Brackets_r = 289,              /* Brackets_r  */
    square_brackets_r = 290,       /* square_brackets_r  */
    Parentheses_l = 291,           /* Parentheses_l  */
    Parentheses_r = 292,           /* Parentheses_r  */
    EQUAL = 293,                   /* EQUAL  */
    DOUBLEPLUS = 294,              /* DOUBLEPLUS  */
    DOUBLEMINUS = 295,             /* DOUBLEMINUS  */
    PLUS = 296,                    /* PLUS  */
    MINUS = 297,                   /* MINUS  */
    MULTIPLY = 298,                /* MULTIPLY  */
    DIVIDE = 299,                  /* DIVIDE  */
    INFIXOP = 300,                 /* INFIXOP  */
    SYMBOL = 301,                  /* SYMBOL  */
    AND = 302,                     /* AND  */
    OR = 303,                      /* OR  */
    INT = 304,                     /* INT  */
    FLOAT = 305,                   /* FLOAT  */
    INVALID = 306,                 /* INVALID  */
    ID = 307,                      /* ID  */
    STRING = 308                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define TYPE 258
#define VOID 259
#define STATIC 260
#define FINAL 261
#define CLASS 262
#define MAIN 263
#define NEW 264
#define PUBLIC 265
#define PROTECTED 266
#define PRIVATE 267
#define READ 268
#define PRINT 269
#define CONST 270
#define IF 271
#define ELSEIF 272
#define ELSE 273
#define SWITCH 274
#define CASE 275
#define BREAK 276
#define DEFAULT 277
#define FOR 278
#define DO 279
#define WHILE 280
#define CONTINUE 281
#define RETURN 282
#define SEMICOLON 283
#define COLON 284
#define COMMA 285
#define DOT 286
#define square_brackets_l 287
#define Brackets_l 288
#define Brackets_r 289
#define square_brackets_r 290
#define Parentheses_l 291
#define Parentheses_r 292
#define EQUAL 293
#define DOUBLEPLUS 294
#define DOUBLEMINUS 295
#define PLUS 296
#define MINUS 297
#define MULTIPLY 298
#define DIVIDE 299
#define INFIXOP 300
#define SYMBOL 301
#define AND 302
#define OR 303
#define INT 304
#define FLOAT 305
#define INVALID 306
#define ID 307
#define STRING 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "b073021024.y"

	char *name; // define type

#line 177 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
