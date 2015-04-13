%e  1019
%p  2807
%n  371
%k  284
%a  1213
%o  1117

%option yylineno

O   [0-7]
D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
WS  [ \t\v\f]
NEWLINE [\n]

%{
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <iostream>
#include <ezast.h>
#include <c_grammar_2011.tab.h>

#define YY_DECL extern "C" int yylex()
#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */
extern void yyerror(const char *);  /* prints grammar violation message */
static void comment(void);
static int check_type(void);

// Keep track of lines & columns
extern int __current_line;
extern int __current_column;
extern int __current_scope;

%}

%%
"/*"                    { comment(); }
"//".*                  { /* consume //-comment */ __current_column = 0; }

"auto"					{ __current_column += strlen("auto");           return(AUTO); }
"break"					{ __current_column += strlen("break");          return(BREAK); }
"case"					{ __current_column += strlen("case");           return(CASE); }
"char"					{ __current_column += strlen("char");           return(CHAR); }
"const"					{ __current_column += strlen("const");          return(CONST); }
"continue"				{ __current_column += strlen("continue");       return(CONTINUE); }
"default"				{ __current_column += strlen("default");        return(DEFAULT); }
"do"					{ __current_column += strlen("do");             return(DO); }
"double"				{ __current_column += strlen("double");         return(DOUBLE); }
"else"					{ __current_column += strlen("else");           return(ELSE); }
"enum"					{ __current_column += strlen("enum");           return(ENUM); }
"extern"				{ __current_column += strlen("extern");         return(EXTERN); }
"float"					{ __current_column += strlen("float");          return(FLOAT); }
"for"					{ __current_column += strlen("for");            return(FOR); }
"goto"					{ __current_column += strlen("goto");           return(GOTO); }
"if"					{ __current_column += strlen("if");             return(IF); }
"inline"				{ __current_column += strlen("inline");         return(INLINE); }
"int"					{ __current_column += strlen("int");            return(INT); }
"long"					{ __current_column += strlen("long");           return(LONG); }
"register"				{ __current_column += strlen("register");       return(REGISTER); }
"restrict"				{ __current_column += strlen("restrict");       return(RESTRICT); }
"return"				{ __current_column += strlen("return");         return(RETURN); }
"short"					{ __current_column += strlen("short");          return(SHORT); }
"signed"				{ __current_column += strlen("signed");         return(SIGNED); }
"sizeof"				{ __current_column += strlen("sizeof");         return(SIZEOF); }
"static"				{ __current_column += strlen("static");         return(STATIC); }
"struct"				{ __current_column += strlen("struct");         return(STRUCT); }
"switch"				{ __current_column += strlen("switch");         return(SWITCH); }
"typedef"				{ __current_column += strlen("typedef");        return(TYPEDEF); }
"union"					{ __current_column += strlen("union");          return(UNION); }
"unsigned"				{ __current_column += strlen("unsigned");       return(UNSIGNED); }
"void"					{ __current_column += strlen("void");           return(VOID); }
"volatile"				{ __current_column += strlen("volatile");       return(VOLATILE); }
"while"					{ __current_column += strlen("while");          return(WHILE); }
"_Alignas"              { __current_column += strlen("_Alignas");       return ALIGNAS; }
"_Alignof"              { __current_column += strlen("_Alignof");       return ALIGNOF; }
"_Atomic"               { __current_column += strlen("_Atomic");        return ATOMIC; }
"_Bool"                 { __current_column += strlen("_Bool");          return BOOL; }
"_Complex"              { __current_column += strlen("_Complex");       return COMPLEX; }
"_Generic"              { __current_column += strlen("_Generic");       return GENERIC; }
"_Imaginary"            { __current_column += strlen("_Imaginary");     return IMAGINARY; }
"_Noreturn"             { __current_column += strlen("_Noreturn");      return NORETURN; }
"_Static_assert"        { __current_column += strlen("_Static_assert"); return STATIC_ASSERT; }
"_Thread_local"         { __current_column += strlen("_Thread_local");  return THREAD_LOCAL; }
"__func__"              { __current_column += strlen("__func__");       return FUNC_NAME; }

{L}{A}*					    { yylval.word = strdup(yytext); __current_column += strlen(yytext); return check_type(); }
{HP}{H}+{IS}?				{ yylval.number = atof(yytext); __current_column += strlen(yytext); return I_CONSTANT; }
{NZ}{D}*{IS}?				{ yylval.number = atof(yytext); __current_column += strlen(yytext); return I_CONSTANT; }
"0"{O}*{IS}?				{ yylval.number = atof(yytext); __current_column += strlen(yytext); return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'" { yylval.number = atof(yytext); __current_column += strlen(yytext); return I_CONSTANT; }
{D}+{E}{FS}?				{ yylval.number = atof(yytext); __current_column += strlen(yytext); return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?		{ yylval.number = atof(yytext); __current_column += strlen(yytext); return F_CONSTANT; }
{D}+"."{E}?{FS}?			{ yylval.number = atof(yytext); __current_column += strlen(yytext); return F_CONSTANT; }
{HP}{H}+{P}{FS}?			{ yylval.number = atof(yytext); __current_column += strlen(yytext); return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?		{ yylval.number = atof(yytext); __current_column += strlen(yytext); return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?			{ yylval.number = atof(yytext); __current_column += strlen(yytext); return F_CONSTANT; }
({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{ yylval.word = strdup(yytext); __current_column += strlen(yytext);  return STRING_LITERAL; }

"..."					{ __current_column += strlen("..."); return ELLIPSIS; }
">>="					{ __current_column += strlen(">>="); return RIGHT_ASSIGN; }
"<<="					{ __current_column += strlen("<<="); return LEFT_ASSIGN; }
"+="					{ __current_column += strlen("+="); return ADD_ASSIGN; }
"-="					{ __current_column += strlen("-="); return SUB_ASSIGN; }
"*="					{ __current_column += strlen("*="); return MUL_ASSIGN; }
"/="					{ __current_column += strlen("/="); return DIV_ASSIGN; }
"%="					{ __current_column += strlen("%="); return MOD_ASSIGN; }
"&="					{ __current_column += strlen("&="); return AND_ASSIGN; }
"^="					{ __current_column += strlen("^="); return XOR_ASSIGN; }
"|="					{ __current_column += strlen("|="); return OR_ASSIGN; }
">>"					{ __current_column += strlen(">>"); return RIGHT_OP; }
"<<"					{ __current_column += strlen("<<"); return LEFT_OP; }
"++"					{ __current_column += strlen("++"); return INC_OP; }
"--"					{ __current_column += strlen("--"); return DEC_OP; }
"->"					{ __current_column += strlen("->"); return PTR_OP; }
"&&"					{ __current_column += strlen("&&"); return AND_OP; }
"||"					{ __current_column += strlen("||"); return OR_OP; }
"<="					{ __current_column += strlen("<="); return LE_OP; }
">="					{ __current_column += strlen(">="); return GE_OP; }
"=="					{ __current_column += strlen("=="); return EQ_OP; }
"!="					{ __current_column += strlen("!="); return NE_OP; }
";"					    { __current_column += strlen(";"); return ';'; }
("{"|"<%")				{ __current_column += strlen("{"); __current_scope++; return '{'; }
("}"|"%>")				{ __current_column += strlen("}"); __current_scope--; return '}'; }
","					    { __current_column += strlen(","); return ','; }
":"					    { __current_column += strlen(":"); return ':'; }
"="					    { __current_column += strlen("="); return '='; }
"("					    { __current_column += strlen("("); return '('; }
")"					    { __current_column += strlen(")"); return ')'; }
("["|"<:")				{ __current_column += strlen("["); return '['; }
("]"|":>")				{ __current_column += strlen("]"); return ']'; }
"."					    { __current_column += strlen("."); return '.'; }
"&"					    { __current_column += strlen("&"); return '&'; }
"!"					    { __current_column += strlen("!"); return '!'; }
"~"					    { __current_column += strlen("~"); return '~'; }
"-"					    { __current_column += strlen("-"); return '-'; }
"+"					    { __current_column += strlen("+"); return '+'; }
"*"					    { __current_column += strlen("*"); return '*'; }
"/"					    { __current_column += strlen("/"); return '/'; }
"%"					    { __current_column += strlen("%"); return '%'; }
"<"					    { __current_column += strlen("<"); return '<'; }
">"					    { __current_column += strlen(">"); return '>'; }
"^"					    { __current_column += strlen("^"); return '^'; }
"|"					    { __current_column += strlen("|"); return '|'; }
"?"					    { __current_column += strlen("?"); return '?'; }

{WS}					{ __current_column++; /* whitespace separates tokens */ }
{NEWLINE}               { __current_line++; __current_column = 0; }
.					    { __current_column++; /* discard bad characters */ }

%%

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}

static void comment(void)
{
    int c;

    while ((c = yyinput()) != 0)
        if (c == '*')
        {
            while ((c = yyinput()) == '*')
                ;

            if (c == '/')
                return;

            if (c == 0)
                break;
        }
        else if(c == '\n')
        {
            __current_line++;
            __current_column = 0;
        }
    yyerror("unterminated comment");
}

static int check_type(void)
{
    switch (sym_type(yytext))
    {
    case TYPEDEF_NAME:                /* previously defined */
        return TYPEDEF_NAME;
    case ENUMERATION_CONSTANT:        /* previously defined */
        return ENUMERATION_CONSTANT;
    default:                          /* includes undefined */
        return IDENTIFIER;
    }
}