/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "b073021024.y"


	#include<stdio.h>
	void yyerror(const char*); // handles error
	int lookup(char s[]); // check symbol table
	int yylex(); // declare lex
	int f = -1; // for duplicate identifier
	extern char *yytext; 
	extern unsigned charCount, lineCount; // line num and position


#line 83 "y.tab.c"

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

#line 246 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TYPE = 3,                       /* TYPE  */
  YYSYMBOL_VOID = 4,                       /* VOID  */
  YYSYMBOL_STATIC = 5,                     /* STATIC  */
  YYSYMBOL_FINAL = 6,                      /* FINAL  */
  YYSYMBOL_CLASS = 7,                      /* CLASS  */
  YYSYMBOL_MAIN = 8,                       /* MAIN  */
  YYSYMBOL_NEW = 9,                        /* NEW  */
  YYSYMBOL_PUBLIC = 10,                    /* PUBLIC  */
  YYSYMBOL_PROTECTED = 11,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 12,                   /* PRIVATE  */
  YYSYMBOL_READ = 13,                      /* READ  */
  YYSYMBOL_PRINT = 14,                     /* PRINT  */
  YYSYMBOL_CONST = 15,                     /* CONST  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_ELSEIF = 17,                    /* ELSEIF  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_SWITCH = 19,                    /* SWITCH  */
  YYSYMBOL_CASE = 20,                      /* CASE  */
  YYSYMBOL_BREAK = 21,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 22,                   /* DEFAULT  */
  YYSYMBOL_FOR = 23,                       /* FOR  */
  YYSYMBOL_DO = 24,                        /* DO  */
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_CONTINUE = 26,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 27,                    /* RETURN  */
  YYSYMBOL_SEMICOLON = 28,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 29,                     /* COLON  */
  YYSYMBOL_COMMA = 30,                     /* COMMA  */
  YYSYMBOL_DOT = 31,                       /* DOT  */
  YYSYMBOL_square_brackets_l = 32,         /* square_brackets_l  */
  YYSYMBOL_Brackets_l = 33,                /* Brackets_l  */
  YYSYMBOL_Brackets_r = 34,                /* Brackets_r  */
  YYSYMBOL_square_brackets_r = 35,         /* square_brackets_r  */
  YYSYMBOL_Parentheses_l = 36,             /* Parentheses_l  */
  YYSYMBOL_Parentheses_r = 37,             /* Parentheses_r  */
  YYSYMBOL_EQUAL = 38,                     /* EQUAL  */
  YYSYMBOL_DOUBLEPLUS = 39,                /* DOUBLEPLUS  */
  YYSYMBOL_DOUBLEMINUS = 40,               /* DOUBLEMINUS  */
  YYSYMBOL_PLUS = 41,                      /* PLUS  */
  YYSYMBOL_MINUS = 42,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 43,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 44,                    /* DIVIDE  */
  YYSYMBOL_INFIXOP = 45,                   /* INFIXOP  */
  YYSYMBOL_SYMBOL = 46,                    /* SYMBOL  */
  YYSYMBOL_AND = 47,                       /* AND  */
  YYSYMBOL_OR = 48,                        /* OR  */
  YYSYMBOL_INT = 49,                       /* INT  */
  YYSYMBOL_FLOAT = 50,                     /* FLOAT  */
  YYSYMBOL_INVALID = 51,                   /* INVALID  */
  YYSYMBOL_ID = 52,                        /* ID  */
  YYSYMBOL_STRING = 53,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_dec_list = 55,                  /* dec_list  */
  YYSYMBOL_dec = 56,                       /* dec  */
  YYSYMBOL_idlist = 57,                    /* idlist  */
  YYSYMBOL_array = 58,                     /* array  */
  YYSYMBOL_main = 59,                      /* main  */
  YYSYMBOL_argument = 60,                  /* argument  */
  YYSYMBOL_method = 61,                    /* method  */
  YYSYMBOL_method_type = 62,               /* method_type  */
  YYSYMBOL_method_invocation = 63,         /* method_invocation  */
  YYSYMBOL_method_call = 64,               /* method_call  */
  YYSYMBOL_class = 65,                     /* class  */
  YYSYMBOL_object = 66,                    /* object  */
  YYSYMBOL_stmt_list = 67,                 /* stmt_list  */
  YYSYMBOL_stmt = 68,                      /* stmt  */
  YYSYMBOL_compound = 69,                  /* compound  */
  YYSYMBOL_compound_list = 70,             /* compound_list  */
  YYSYMBOL_simple = 71,                    /* simple  */
  YYSYMBOL_name = 72,                      /* name  */
  YYSYMBOL_expr_list = 73,                 /* expr_list  */
  YYSYMBOL_expression = 74,                /* expression  */
  YYSYMBOL_def = 75,                       /* def  */
  YYSYMBOL_term = 76,                      /* term  */
  YYSYMBOL_factor = 77,                    /* factor  */
  YYSYMBOL_prefix = 78,                    /* prefix  */
  YYSYMBOL_postfix = 79,                   /* postfix  */
  YYSYMBOL_const = 80,                     /* const  */
  YYSYMBOL_bool = 81,                      /* bool  */
  YYSYMBOL_loop = 82,                      /* loop  */
  YYSYMBOL_forinitopt = 83,                /* forinitopt  */
  YYSYMBOL_forupdateopt = 84,              /* forupdateopt  */
  YYSYMBOL_conditional = 85,               /* conditional  */
  YYSYMBOL_return = 86                     /* return  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   879

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  288

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    28,    28,    29,    30,    31,    32,    33,    40,    47,
      48,    49,    50,    51,    52,    55,    58,    59,    60,    61,
      62,    63,    67,    70,    71,    72,    73,    74,    75,    77,
      78,    83,    85,    87,    89,    91,    92,    94,    97,    98,
      99,   100,   102,   104,   108,   110,   112,   114,   116,   121,
     122,   128,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   144,   146,   148,   149,   150,   151,   152,   155,
     157,   158,   159,   160,   161,   162,   164,   165,   168,   169,
     170,   171,   173,   177,   179,   181,   183,   185,   187,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   206,   208,   210,   212,   214,   216,
     218,   220,   222,   224,   226,   227,   228,   229,   230,   233,
     235,   237,   239,   241,   245
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TYPE", "VOID",
  "STATIC", "FINAL", "CLASS", "MAIN", "NEW", "PUBLIC", "PROTECTED",
  "PRIVATE", "READ", "PRINT", "CONST", "IF", "ELSEIF", "ELSE", "SWITCH",
  "CASE", "BREAK", "DEFAULT", "FOR", "DO", "WHILE", "CONTINUE", "RETURN",
  "SEMICOLON", "COLON", "COMMA", "DOT", "square_brackets_l", "Brackets_l",
  "Brackets_r", "square_brackets_r", "Parentheses_l", "Parentheses_r",
  "EQUAL", "DOUBLEPLUS", "DOUBLEMINUS", "PLUS", "MINUS", "MULTIPLY",
  "DIVIDE", "INFIXOP", "SYMBOL", "AND", "OR", "INT", "FLOAT", "INVALID",
  "ID", "STRING", "$accept", "dec_list", "dec", "idlist", "array", "main",
  "argument", "method", "method_type", "method_invocation", "method_call",
  "class", "object", "stmt_list", "stmt", "compound", "compound_list",
  "simple", "name", "expr_list", "expression", "def", "term", "factor",
  "prefix", "postfix", "const", "bool", "loop", "forinitopt",
  "forupdateopt", "conditional", "return", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-155)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-77)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     665,    43,    20,    14,    19,   -33,    -7,  -155,  -155,  -155,
     -25,   249,  -155,  -155,  -155,  -155,    28,  -155,  -155,  -155,
       0,    13,   127,    34,    38,    42,    -2,    35,    47,     7,
     508,    61,  -155,   665,  -155,  -155,    52,    31,    58,   -29,
      94,   508,    87,    67,    99,   100,  -155,   -20,    34,   665,
     117,   153,   147,   508,  -155,  -155,  -155,  -155,  -155,  -155,
     271,  -155,   160,  -155,   168,  -155,    96,   170,  -155,   190,
    -155,   184,   153,   166,   194,   223,   266,   229,   112,  -155,
     231,   153,   230,   247,   244,   629,   258,   268,   270,   579,
    -155,  -155,   153,   171,   242,   264,  -155,  -155,  -155,   827,
     508,   508,   508,   508,   508,  -155,   274,   104,  -155,   153,
     309,   282,   579,  -155,   290,   508,  -155,   153,   579,   267,
     429,  -155,   327,     5,   165,   301,   307,   311,   508,   232,
     639,   321,  -155,   479,  -155,  -155,   316,  -155,   289,   112,
    -155,  -155,   326,  -155,  -155,  -155,   322,  -155,   336,  -155,
    -155,  -155,   319,   331,   329,   343,   342,  -155,   378,   508,
     328,   810,   112,  -155,   354,   579,  -155,  -155,   362,   363,
     759,  -155,    35,   165,    34,   370,   366,   330,   189,   348,
     408,   165,   112,   529,  -155,   810,  -155,  -155,  -155,   -29,
     508,  -155,  -155,  -155,  -155,  -155,   508,   508,   364,   810,
     372,   371,   112,  -155,   669,  -155,   379,  -155,  -155,   780,
    -155,    34,   120,   165,  -155,   508,   167,   165,   165,   377,
     373,   508,   197,   193,  -155,  -155,  -155,   374,   112,  -155,
    -155,  -155,   699,   810,   365,   810,  -155,  -155,  -155,   359,
     146,   112,  -155,  -155,   276,   108,   108,  -155,   380,  -155,
      92,   122,  -155,   729,   381,   320,   385,   359,  -155,   405,
     406,   397,  -155,  -155,   -29,   508,  -155,    24,   389,   153,
      95,  -155,   392,   112,  -155,   272,   396,  -155,  -155,  -155,
     122,   579,  -155,  -155,  -155,  -155,   404,  -155
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      49,     0,     0,     0,     0,     0,     0,    38,    39,    40,
       0,     0,     2,    10,    11,    12,     0,    13,    14,    15,
       0,     0,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     1,    49,     5,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,    16,     9,    49,
       0,     0,     0,     0,    96,    97,    98,    99,   102,   103,
      89,    94,     0,    83,    79,    80,    84,     0,    90,     0,
       3,     0,     0,     0,     0,     0,     0,     0,    19,    21,
      17,     0,     0,     0,     0,     0,    29,     0,     0,    49,
      23,    63,     0,     0,     0,     0,   100,   101,    93,     0,
       0,     0,     0,     0,     0,    92,     0,     0,    25,     0,
       0,     0,    49,    51,     0,     0,    26,     0,    49,     0,
      49,    47,     0,     0,     0,     0,     0,     0,     0,    89,
       0,    94,    61,    65,    52,    55,     0,    56,     0,    57,
      59,    58,     0,    24,    91,    77,     0,    42,     0,    78,
      81,    82,    86,    85,     0,     0,     0,    27,     0,     0,
       0,     0,    20,    28,     0,    49,    37,    46,    11,    12,
       0,    30,     0,     0,   114,     0,     0,     0,     0,     0,
       0,     0,   124,    49,    43,    66,    52,    68,    62,     0,
       0,    73,    74,    60,    95,    41,     0,     0,     0,     0,
       0,     0,    18,    34,     0,    35,     0,    45,    44,     0,
      54,   115,     0,     0,   107,     0,     0,     0,     0,    76,
       0,     0,     0,     0,     2,    67,    53,     0,    69,    87,
      88,    50,     0,     0,     0,     0,    32,    36,    48,     0,
       0,   104,   109,   108,     0,   105,   106,    72,     0,    71,
       0,     0,    33,     0,     0,     0,     0,     0,    75,     0,
     119,     0,    31,    22,     0,     0,   117,     0,     0,     0,
       0,    70,     0,   118,   113,     0,     0,   121,   120,   122,
       0,    49,   112,   110,   123,   116,     0,    62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,     9,    -8,   -23,  -155,   333,    16,   335,  -155,   113,
    -155,    -4,  -155,  -106,  -118,   -46,  -117,  -154,    12,   151,
     -30,  -155,   174,   -63,  -155,  -109,   -37,  -134,   -27,  -155,
     202,   176,  -155
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   130,    12,    23,    13,    14,    52,    15,    16,    61,
     132,    17,    18,   133,   134,   135,   136,   137,    62,    63,
     139,    19,    65,    66,    67,    98,    68,   178,   140,   175,
     256,   141,   142
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,   164,    75,    34,    48,    90,   160,    35,   172,    11,
      50,    78,    39,    30,   170,   186,   187,    26,    41,    28,
      58,    59,    27,    93,    91,    70,   108,    31,    24,    29,
     113,    36,    42,   173,    50,   116,    37,   125,   126,   212,
     152,   153,   186,   187,    51,    91,   143,   223,    38,    91,
      46,    20,   210,    73,    91,   204,    77,    47,    85,   206,
      82,    84,   243,   157,    43,    91,   225,   226,    72,    64,
      64,   163,    25,   166,    44,    21,   219,    34,    45,   240,
      49,    35,    91,   245,   246,   162,   210,    47,   186,   187,
      91,   226,    91,   232,   177,    22,   260,    50,   182,    69,
     174,   138,    50,    50,    71,   125,   126,    50,   125,   126,
      74,   127,    70,   274,   210,    79,   278,   226,    87,    80,
      88,   283,    34,   156,   138,   259,    35,   253,    89,   202,
     138,    76,   138,   229,   230,   210,    81,    83,   171,   103,
     104,   155,   261,   177,   219,   138,   266,   219,   239,   211,
     222,   177,   227,   101,   102,   217,   218,   -16,   248,    39,
     228,    96,    97,    40,   286,    41,   176,   217,   218,    86,
     242,   285,   138,   138,   257,   224,    87,   138,    88,    42,
     125,   126,   138,   177,    92,   241,    89,   177,   177,    91,
      87,   220,    88,   217,   218,   138,    99,   138,   100,   106,
      89,    53,   131,   109,    54,    55,    56,    57,   144,   101,
     102,   138,   101,   102,    58,    59,   138,    60,   138,   219,
     107,   138,   105,   276,   277,   131,   216,   272,   244,   282,
     250,   131,   110,   131,   249,   273,   217,   218,   101,   102,
     217,   218,    91,    91,   138,   138,   131,   138,    91,    32,
     148,   149,     1,     2,     3,     4,     5,     6,   111,     7,
       8,     9,   244,    94,    95,   138,   114,   117,   -76,   115,
      30,    96,    97,   131,   131,   150,   151,    33,   131,   244,
     118,   119,   244,   131,    31,   125,   126,   244,   122,    87,
      87,    88,    88,   138,   145,    87,   131,    88,   131,   112,
     165,    10,    94,    95,   123,   281,   124,   -76,   189,   -76,
      96,    97,   131,   146,   190,   191,   192,   131,   158,   131,
     159,   189,   131,   161,   219,    99,   154,   190,   191,   192,
      50,     1,     2,     3,     4,     5,     6,   179,     7,     8,
       9,   125,   126,   180,   127,   131,   131,   181,   131,   184,
     188,    87,   264,    88,   193,   128,   185,   194,   265,    96,
      97,    89,   203,   196,    53,   198,   131,    54,    55,    56,
      57,   101,   102,   195,   197,   215,   199,    58,    59,   200,
     129,   201,     1,     2,     3,     4,     5,     6,   205,     7,
       8,     9,   125,   126,   131,   127,   207,   208,   213,   214,
     219,   231,    87,   234,    88,   233,   128,   185,    94,   251,
     247,   255,    89,   237,   254,    53,   263,   258,    54,    55,
      56,    57,   267,   269,   270,   271,   275,   280,    58,    59,
     284,   129,     1,     2,     3,     4,     5,     6,   287,     7,
       8,     9,   125,   126,    53,   127,   279,    54,    55,    56,
      57,     0,    87,   168,    88,   169,   128,    58,    59,   268,
      60,   221,    89,   167,     0,    53,     0,     0,    54,    55,
      56,    57,     0,     0,     0,     0,     0,     0,    58,    59,
       0,   129,     1,     2,     3,     4,     5,     6,     0,     7,
       8,     9,   125,   126,     0,   127,     0,     0,     0,     0,
       0,     0,    87,     0,    88,     0,   128,   185,     0,     0,
       0,     0,    89,     0,     0,    53,     0,     0,    54,    55,
      56,    57,     0,     0,     0,     0,     0,     0,    58,    59,
       0,   129,     1,     2,     3,     4,     5,     6,     0,     7,
       8,     9,   125,   126,    53,   127,     0,    54,    55,    56,
      57,     0,    87,     0,    88,     0,   128,    58,    59,     0,
      60,     0,    89,   -64,     0,    53,     0,     0,    54,    55,
      56,    57,     0,     0,     0,     0,     0,     0,    58,    59,
       0,   129,     1,     2,     3,     4,     5,     6,     0,     7,
       8,     9,   125,   126,     0,   127,     0,     0,     0,     0,
       0,     0,    87,     0,    88,     0,   128,     0,     0,     0,
       0,     0,    89,     0,     0,    53,     0,     0,    54,    55,
      56,    57,     0,     0,     0,     0,     0,     0,    58,    59,
       0,   129,     1,     2,     3,     4,     5,     6,     0,     7,
       8,     9,     1,     2,     3,     4,     5,     6,     0,     7,
       8,     9,     0,     0,     0,     0,     0,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   183,     1,     2,
       3,     4,     5,     6,     0,     7,     8,     9,     0,     0,
       0,    10,   125,   126,     0,   127,     0,     0,     0,     0,
       0,    10,    87,     0,    88,     0,   128,   235,     0,     0,
       0,     0,    89,   236,     0,    53,     0,     0,    54,    55,
      56,    57,   125,   126,     0,   127,     0,    10,    58,    59,
       0,    60,    87,     0,    88,     0,   128,   235,     0,     0,
       0,     0,    89,   252,     0,    53,     0,     0,    54,    55,
      56,    57,   125,   126,     0,   127,     0,     0,    58,    59,
       0,    60,    87,     0,    88,     0,   128,   235,     0,     0,
       0,     0,    89,   262,     0,    53,     0,     0,    54,    55,
      56,    57,   125,   126,     0,   127,     0,     0,    58,    59,
       0,    60,    87,     0,    88,     0,   128,   209,     0,     0,
       0,     0,    89,   125,   126,    53,   127,     0,    54,    55,
      56,    57,     0,    87,     0,    88,     0,   128,    58,    59,
       0,    60,     0,    89,   238,     0,    53,     0,     0,    54,
      55,    56,    57,   125,   126,     0,   127,     0,     0,    58,
      59,     0,    60,    87,     0,    88,     0,   128,     0,     0,
       0,     0,     0,    89,     0,     0,    53,     0,     0,    54,
      55,    56,    57,     0,     0,     0,     0,     0,     0,    58,
      59,     0,    60,    53,   147,     0,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,    58,    59,     0,    60
};

static const yytype_int16 yycheck[] =
{
      30,   118,    39,    11,    27,    51,   112,    11,     3,     0,
       3,    41,    32,    38,   120,   133,   133,     3,    38,    52,
      49,    50,     3,    53,    51,    33,    72,    52,     8,    36,
      76,     3,    52,    28,     3,    81,    36,    13,    14,   173,
     103,   104,   160,   160,    37,    72,    92,   181,    35,    76,
      52,     8,   170,    37,    81,   161,    40,    52,    49,   165,
      44,    45,   216,   109,    30,    92,   183,   185,    37,    99,
     100,   117,    52,   119,    36,    32,    52,    85,    36,   213,
      33,    85,   109,   217,   218,   115,   204,    52,   206,   206,
     117,   209,   119,   199,   124,    52,   250,     3,   128,    38,
     123,    89,     3,     3,    52,    13,    14,     3,    13,    14,
      52,    16,   120,   267,   232,    28,   270,   235,    23,    52,
      25,   275,   130,   107,   112,    33,   130,   233,    33,   159,
     118,    37,   120,   196,   197,   253,    37,    37,   122,    43,
      44,    37,   251,   173,    52,   133,   255,    52,    28,   172,
     180,   181,   189,    41,    42,    47,    48,    30,   221,    32,
     190,    39,    40,    36,   281,    38,     1,    47,    48,    52,
     216,   280,   160,   161,    28,   183,    23,   165,    25,    52,
      13,    14,   170,   213,    37,   215,    33,   217,   218,   216,
      23,   179,    25,    47,    48,   183,    36,   185,    30,     9,
      33,    36,    89,    37,    39,    40,    41,    42,    37,    41,
      42,   199,    41,    42,    49,    50,   204,    52,   206,    52,
      36,   209,    52,   269,   270,   112,    37,   264,   216,   275,
      37,   118,    38,   120,    37,   265,    47,    48,    41,    42,
      47,    48,   269,   270,   232,   233,   133,   235,   275,     0,
      99,   100,     3,     4,     5,     6,     7,     8,    35,    10,
      11,    12,   250,    31,    32,   253,    37,    37,    36,    38,
      38,    39,    40,   160,   161,   101,   102,    28,   165,   267,
      33,    37,   270,   170,    52,    13,    14,   275,    30,    23,
      23,    25,    25,   281,    52,    23,   183,    25,   185,    33,
      33,    52,    31,    32,    36,    33,    36,    36,    32,    38,
      39,    40,   199,    49,    38,    39,    40,   204,     9,   206,
      38,    32,   209,    33,    52,    36,    52,    38,    39,    40,
       3,     3,     4,     5,     6,     7,     8,    36,    10,    11,
      12,    13,    14,    36,    16,   232,   233,    36,   235,    28,
      34,    23,    32,    25,    28,    27,    28,    35,    38,    39,
      40,    33,    34,    44,    36,    36,   253,    39,    40,    41,
      42,    41,    42,    37,    43,    45,    33,    49,    50,    37,
      52,     3,     3,     4,     5,     6,     7,     8,    34,    10,
      11,    12,    13,    14,   281,    16,    34,    34,    28,    33,
      52,    37,    23,    32,    25,    33,    27,    28,    31,    35,
      37,    52,    33,    34,    49,    36,    35,    37,    39,    40,
      41,    42,    37,    18,    18,    28,    37,    35,    49,    50,
      34,    52,     3,     4,     5,     6,     7,     8,    34,    10,
      11,    12,    13,    14,    36,    16,   270,    39,    40,    41,
      42,    -1,    23,   120,    25,   120,    27,    49,    50,   257,
      52,    53,    33,    34,    -1,    36,    -1,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    52,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    36,    -1,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    52,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    36,    16,    -1,    39,    40,    41,
      42,    -1,    23,    -1,    25,    -1,    27,    49,    50,    -1,
      52,    -1,    33,    34,    -1,    36,    -1,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    52,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    36,    -1,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    52,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    28,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    -1,    -1,
      -1,    52,    13,    14,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    52,    23,    -1,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    33,    34,    -1,    36,    -1,    -1,    39,    40,
      41,    42,    13,    14,    -1,    16,    -1,    52,    49,    50,
      -1,    52,    23,    -1,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    33,    34,    -1,    36,    -1,    -1,    39,    40,
      41,    42,    13,    14,    -1,    16,    -1,    -1,    49,    50,
      -1,    52,    23,    -1,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    33,    34,    -1,    36,    -1,    -1,    39,    40,
      41,    42,    13,    14,    -1,    16,    -1,    -1,    49,    50,
      -1,    52,    23,    -1,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    33,    13,    14,    36,    16,    -1,    39,    40,
      41,    42,    -1,    23,    -1,    25,    -1,    27,    49,    50,
      -1,    52,    -1,    33,    34,    -1,    36,    -1,    -1,    39,
      40,    41,    42,    13,    14,    -1,    16,    -1,    -1,    49,
      50,    -1,    52,    23,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    36,    -1,    -1,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    52,    36,    37,    -1,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    10,    11,    12,
      52,    55,    56,    58,    59,    61,    62,    65,    66,    75,
       8,    32,    52,    57,     8,    52,     3,     3,    52,    36,
      38,    52,     0,    28,    56,    65,     3,    36,    35,    32,
      36,    38,    52,    30,    36,    36,    52,    52,    57,    33,
       3,    37,    60,    36,    39,    40,    41,    42,    49,    50,
      52,    63,    72,    73,    74,    76,    77,    78,    80,    38,
      56,    52,    37,    60,    52,    80,    37,    60,    74,    28,
      52,    37,    60,    37,    60,    55,    52,    23,    25,    33,
      69,    82,    37,    74,    31,    32,    39,    40,    79,    36,
      30,    41,    42,    43,    44,    52,     9,    36,    69,    37,
      38,    35,    33,    69,    37,    38,    69,    37,    33,    37,
      28,    34,    30,    36,    36,    13,    14,    16,    27,    52,
      55,    63,    64,    67,    68,    69,    70,    71,    72,    74,
      82,    85,    86,    69,    37,    52,    49,    37,    73,    73,
      76,    76,    77,    77,    52,    37,    60,    69,     9,    38,
      67,    33,    74,    69,    70,    33,    69,    34,    59,    61,
      67,    60,     3,    28,    57,    83,     1,    74,    81,    36,
      36,    36,    74,    28,    28,    28,    68,    70,    34,    32,
      38,    39,    40,    28,    35,    37,    44,    43,    36,    33,
      37,     3,    74,    34,    67,    34,    67,    34,    34,    28,
      68,    57,    81,    28,    33,    45,    37,    47,    48,    52,
      72,    53,    74,    81,    56,    70,    68,    80,    74,    77,
      77,    37,    67,    33,    32,    28,    34,    34,    34,    28,
      81,    74,    69,    71,    72,    81,    81,    37,    77,    37,
      37,    35,    34,    67,    49,    52,    84,    28,    37,    33,
      71,    79,    34,    35,    32,    38,    79,    37,    84,    18,
      18,    28,    80,    74,    71,    37,    69,    69,    71,    85,
      35,    33,    69,    71,    34,    79,    70,    34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    55,    55,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    57,    57,    57,    57,
      57,    57,    58,    59,    59,    59,    59,    59,    59,    60,
      60,    61,    61,    61,    61,    61,    61,    61,    62,    62,
      62,    63,    63,    64,    65,    65,    65,    65,    65,    66,
      66,    66,    67,    67,    67,    68,    68,    68,    68,    68,
      68,    68,    69,    69,    70,    70,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    73,    73,
      74,    74,    74,    75,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    78,    78,    78,    78,
      79,    79,    80,    80,    81,    81,    81,    81,    82,    82,
      82,    82,    82,    82,    83,    83,    84,    84,    84,    85,
      85,    85,    85,    85,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     3,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     6,     3,
       5,     3,    10,     4,     5,     5,     5,     6,     6,     2,
       4,     9,     8,     8,     7,     7,     8,     6,     1,     1,
       1,     4,     3,     2,     7,     7,     6,     5,     8,     0,
       7,     5,     1,     3,     2,     1,     1,     1,     1,     1,
       2,     1,     3,     1,     2,     1,     2,     3,     2,     3,
       6,     4,     4,     2,     2,     5,     1,     3,     3,     1,
       1,     3,     3,     3,     1,     3,     3,     5,     5,     1,
       1,     3,     2,     2,     1,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     2,     5,     5,
       9,    11,     9,     8,     1,     2,     5,     2,     3,     5,
       7,     7,     7,     8,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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
    YYNOMEM;
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 7: /* dec: TYPE ID  */
#line 33 "b073021024.y"
                { // handles duplicate indentifier.
		int tmp = lookup((yyvsp[0].name));
		if(f == tmp)
			printf("\n> \'%s\' is a duplicate indentifier.",(yyvsp[0].name));
		f = tmp;
		//printf("  check1!");
		}
#line 1620 "y.tab.c"
    break;

  case 8: /* dec: TYPE idlist  */
#line 40 "b073021024.y"
                 { // handles duplicate indentifier.
		int tmp = lookup((yyvsp[0].name));
		if(f == tmp)
			printf("\n> \'%s\' is a duplicate indentifier.",(yyvsp[0].name));
		f = tmp;
		//printf("  check2!");
		}
#line 1632 "y.tab.c"
    break;

  case 21: /* idlist: ID ID SEMICOLON  */
#line 64 "b073021024.y"
                  {	  // handles comma error
			  printf("\nLine %d, 1st char: %d, a syntax error fat \"%s\"",lineCount,charCount-2,(yyvsp[-1].name));}
#line 1639 "y.tab.c"
    break;

  case 107: /* bool: error Brackets_l  */
#line 212 "b073021024.y"
                              {yyerror;}
#line 1645 "y.tab.c"
    break;


#line 1649 "y.tab.c"

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 247 "b073021024.y"


int main()
{
	printf("Line 1 : ");
	yyparse();
    printf("\n");
	return 0;
}

void yyerror(const char *str)
{
	printf("\nLine %d, 1st char: %d, %s mat \"%s\".\n",lineCount,charCount,str,yytext);
}
