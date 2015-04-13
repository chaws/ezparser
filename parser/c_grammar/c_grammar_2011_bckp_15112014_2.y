%{
#include <cstdio>
#include <iostream>
#include <ezast.h>
#include <ezrule.h>
#include <c_grammar_2011.tab.h>  // get the token types that we return

using namespace std;

// stuff from flex that bison needs to know about
extern "C" int yylex();
extern "C" FILE *yyin;
extern ezrule rule;
void yyerror(const char *s);

%}

/* Declare data types to be used */
%union {
	double number;
	char * word;
	ezast * ast;
}

%type <ast> primary_expression
%type <ast> constant
%type <ast> enumeration_constant
%type <ast> string
%type <ast> generic_selection
%type <ast> generic_assoc_list
%type <ast> generic_association
%type <ast> postfix_expression
%type <ast> argument_expression_list
%type <ast> unary_expression
%type <ast> unary_operator
%type <ast> cast_expression
%type <ast> multiplicative_expression
%type <ast> additive_expression
%type <ast> shift_expression
%type <ast> relational_expression
%type <ast> equality_expression
%type <ast> and_expression
%type <ast> exclusive_or_expression
%type <ast> inclusive_or_expression
%type <ast> logical_and_expression
%type <ast> logical_or_expression
%type <ast> conditional_expression
%type <ast> assignment_expression
%type <ast> assignment_operator
%type <ast> expression
%type <ast> constant_expression
%type <ast> declaration
%type <ast> declaration_specifiers
%type <ast> init_declarator_list
%type <ast> init_declarator
%type <ast> storage_class_specifier
%type <ast> type_specifier
%type <ast> struct_or_union_specifier
%type <ast> struct_or_union
%type <ast> struct_declaration_list
%type <ast> struct_declaration
%type <ast> specifier_qualifier_list
%type <ast> struct_declarator_list
%type <ast> struct_declarator
%type <ast> enum_specifier
%type <ast> enumerator_list
%type <ast> enumerator
%type <ast> atomic_type_specifier
%type <ast> type_qualifier
%type <ast> function_specifier
%type <ast> alignment_specifier
%type <ast> declarator
%type <ast> direct_declarator
%type <ast> pointer
%type <ast> type_qualifier_list
%type <ast> parameter_type_list
%type <ast> parameter_list
%type <ast> parameter_declaration
%type <ast> identifier_list
%type <ast> type_name
%type <ast> abstract_declarator
%type <ast> direct_abstract_declarator
%type <ast> initializer
%type <ast> initializer_list
%type <ast> designation
%type <ast> designator_list
%type <ast> designator
%type <ast> static_assert_declaration
%type <ast> statement
%type <ast> labeled_statement
%type <ast> compound_statement
%type <ast> block_item_list
%type <ast> block_item
%type <ast> expression_statement
%type <ast> selection_statement
%type <ast> iteration_statement
%type <ast> jump_statement
%type <ast> translation_unit
%type <ast> external_declaration
%type <ast> function_definition
%type <ast> declaration_list


%token	IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL FUNC_NAME SIZEOF
%token	PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token	XOR_ASSIGN OR_ASSIGN
%token	TYPEDEF_NAME ENUMERATION_CONSTANT

%token	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token	CONST RESTRICT VOLATILE
%token	BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token	COMPLEX IMAGINARY 
%token	STRUCT UNION ENUM ELLIPSIS

%token	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token	ALIGNAS ALIGNOF ATOMIC GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL

%start translation_unit
%%

primary_expression
	: IDENTIFIER {$$ = rule.primary_expression__IDENTIFIER();}
	| constant {$$ = rule.primary_expression__constant();}
	| string {$$ = rule.primary_expression__string();}
	| '(' expression ')' {$$ = rule.primary_expression__LP_expression_RP();}
	| generic_selection {$$ = rule.primary_expression__generic_selection();}
	;

constant
	: I_CONSTANT		 {$$ = rule.constant__I_CONSTANT();}
	| F_CONSTANT {$$ = rule.constant__F_CONSTANT();}
	| ENUMERATION_CONSTANT	 {$$ = rule.constant__ENUMERATION_CONSTANT();}
	;

enumeration_constant		
	: IDENTIFIER {$$ = rule.enumeration_constant__IDENTIFIER();}
	;

string
	: STRING_LITERAL {$$ = rule.string__STRING_LITERAL();}
	| FUNC_NAME {$$ = rule.string__FUNC_NAME();}
	;

generic_selection
	: GENERIC '(' assignment_expression ',' generic_assoc_list ')' {$$ = rule.generic_selection__GENERIC_LP_assignment_expression_COMMA_generic_assoc_list_RP();}
	;

generic_assoc_list
	: generic_association {$$ = rule.generic_assoc_list__generic_association();}
	| generic_assoc_list ',' generic_association {$$ = rule.generic_assoc_list__generic_assoc_list_COMMA_generic_association();}
	;

generic_association
	: type_name ':' assignment_expression {$$ = rule.generic_association__type_name_COLON_assignment_expression();}
	| DEFAULT ':' assignment_expression {$$ = rule.generic_association__DEFAULT_COLON_assignment_expression();}
	;

postfix_expression
	: primary_expression {$$ = rule.postfix_expression__primary_expression();}
	| postfix_expression '[' expression ']' {$$ = rule.postfix_expression__postfix_expression_LSB_expression_RSB();}
	| postfix_expression '(' ')' {$$ = rule.postfix_expression__postfix_expression_LP_RP();}
	| postfix_expression '(' argument_expression_list ')' {$$ = rule.postfix_expression__postfix_expression_LP_argument_expression_list_RP();}
	| postfix_expression '.' IDENTIFIER {$$ = rule.postfix_expression__postfix_expression_DOT_IDENTIFIER();}
	| postfix_expression PTR_OP IDENTIFIER {$$ = rule.postfix_expression__postfix_expression_PTR_OP_IDENTIFIER();}
	| postfix_expression INC_OP {$$ = rule.postfix_expression__postfix_expression_INC_OP();}
	| postfix_expression DEC_OP {$$ = rule.postfix_expression__postfix_expression_DEC_OP();}
	| '(' type_name ')' '{' initializer_list '}' {$$ = rule.postfix_expression__LP_type_name_RP_LCB_initializer_list_RCB();}
	| '(' type_name ')' '{' initializer_list ',' '}' {$$ = rule.postfix_expression__LP_type_name_RP_LCB_initializer_list_COMMA_RCB();}
	;

argument_expression_list
	: assignment_expression {$$ = rule.argument_expression_list__assignment_expression();}
	| argument_expression_list ',' assignment_expression {$$ = rule.argument_expression_list__argument_expression_list_COMMA_assignment_expression();}
	;

unary_expression
	: postfix_expression {$$ = rule.unary_expression__postfix_expression();}
	| INC_OP unary_expression {$$ = rule.unary_expression__INC_OP_unary_expression();}
	| DEC_OP unary_expression {$$ = rule.unary_expression__DEC_OP_unary_expression();}
	| unary_operator cast_expression {$$ = rule.unary_expression__unary_operator_cast_expression();}
	| SIZEOF unary_expression {$$ = rule.unary_expression__SIZEOF_unary_expression();}
	| SIZEOF '(' type_name ')' {$$ = rule.unary_expression__SIZEOF_LP_type_name_RP();}
	| ALIGNOF '(' type_name ')' {$$ = rule.unary_expression__ALIGNOF_LP_type_name_RP();}
	;

unary_operator
	: '&' {$$ = rule.unary_operator__AMP();}
	| '*' {$$ = rule.unary_operator__MULT();}
	| '+' {$$ = rule.unary_operator__PLUS();}
	| '-' {$$ = rule.unary_operator__MINUS();}
	| '~' {$$ = rule.unary_operator__TILDE();}
	| '!' {$$ = rule.unary_operator__EXM();}
	;

cast_expression
	: unary_expression {$$ = rule.cast_expression__unary_expression();}
	| '(' type_name ')' cast_expression {$$ = rule.cast_expression__LP_type_name_RP_cast_expression();}
	;

multiplicative_expression
	: cast_expression {$$ = rule.multiplicative_expression__cast_expression();}
	| multiplicative_expression '*' cast_expression {$$ = rule.multiplicative_expression__multiplicative_expression_MULT_cast_expression();}
	| multiplicative_expression '/' cast_expression {$$ = rule.multiplicative_expression__multiplicative_expression_DIV_cast_expression();}
	| multiplicative_expression '%' cast_expression {$$ = rule.multiplicative_expression__multiplicative_expression_MOD_cast_expression();}
	;

additive_expression
	: multiplicative_expression {$$ = rule.additive_expression__multiplicative_expression();}
	| additive_expression '+' multiplicative_expression {$$ = rule.additive_expression__additive_expression_PLUS_multiplicative_expression();}
	| additive_expression '-' multiplicative_expression {$$ = rule.additive_expression__additive_expression_MINUS_multiplicative_expression();}
	;

shift_expression
	: additive_expression {$$ = rule.shift_expression__additive_expression();}
	| shift_expression LEFT_OP additive_expression {$$ = rule.shift_expression__shift_expression_LEFT_OP_additive_expression();}
	| shift_expression RIGHT_OP additive_expression {$$ = rule.shift_expression__shift_expression_RIGHT_OP_additive_expression();}
	;

relational_expression
	: shift_expression {$$ = rule.relational_expression__shift_expression();}
	| relational_expression '<' shift_expression {$$ = rule.relational_expression__relational_expression_LT_shift_expression();}
	| relational_expression '>' shift_expression {$$ = rule.relational_expression__relational_expression_GT_shift_expression();}
	| relational_expression LE_OP shift_expression {$$ = rule.relational_expression__relational_expression_LE_OP_shift_expression();}
	| relational_expression GE_OP shift_expression {$$ = rule.relational_expression__relational_expression_GE_OP_shift_expression();}
	;

equality_expression
	: relational_expression {$$ = rule.equality_expression__relational_expression();}
	| equality_expression EQ_OP relational_expression {$$ = rule.equality_expression__equality_expression_EQ_OP_relational_expression();}
	| equality_expression NE_OP relational_expression {$$ = rule.equality_expression__equality_expression_NE_OP_relational_expression();}
	;

and_expression
	: equality_expression {$$ = rule.and_expression__equality_expression();}
	| and_expression '&' equality_expression {$$ = rule.and_expression__and_expression_AMP_equality_expression();}
	;

exclusive_or_expression
	: and_expression {$$ = rule.exclusive_or_expression__and_expression();}
	| exclusive_or_expression '^' and_expression {$$ = rule.exclusive_or_expression__exclusive_or_expression_XOR_and_expression();}
	;

inclusive_or_expression
	: exclusive_or_expression {$$ = rule.inclusive_or_expression__exclusive_or_expression();}
	| inclusive_or_expression '|' exclusive_or_expression {$$ = rule.inclusive_or_expression__inclusive_or_expression_OR_exclusive_or_expression();}
	;

logical_and_expression
	: inclusive_or_expression {$$ = rule.logical_and_expression__inclusive_or_expression();}
	| logical_and_expression AND_OP inclusive_or_expression {$$ = rule.logical_and_expression__logical_and_expression_AND_OP_inclusive_or_expression();}
	;

logical_or_expression
	: logical_and_expression {$$ = rule.logical_or_expression__logical_and_expression();}
	| logical_or_expression OR_OP logical_and_expression {$$ = rule.logical_or_expression__logical_or_expression_OR_OP_logical_and_expression();}
	;

conditional_expression
	: logical_or_expression {$$ = rule.conditional_expression__logical_or_expression();}
	| logical_or_expression '?' expression ':' conditional_expression {$$ = rule.conditional_expression__logical_or_expression_QUM_expression_COLON_conditional_expression();}
	;

assignment_expression
	: conditional_expression {$$ = rule.assignment_expression__conditional_expression();}
	| unary_expression assignment_operator assignment_expression {$$ = rule.assignment_expression__unary_expression_assignment_operator_assignment_expression();}
	;

assignment_operator
	: '=' {$$ = rule.assignment_operator__EQ();}
	| MUL_ASSIGN {$$ = rule.assignment_operator__MUL_ASSIGN();}
	| DIV_ASSIGN {$$ = rule.assignment_operator__DIV_ASSIGN();}
	| MOD_ASSIGN {$$ = rule.assignment_operator__MOD_ASSIGN();}
	| ADD_ASSIGN {$$ = rule.assignment_operator__ADD_ASSIGN();}
	| SUB_ASSIGN {$$ = rule.assignment_operator__SUB_ASSIGN();}
	| LEFT_ASSIGN {$$ = rule.assignment_operator__LEFT_ASSIGN();}
	| RIGHT_ASSIGN {$$ = rule.assignment_operator__RIGHT_ASSIGN();}
	| AND_ASSIGN {$$ = rule.assignment_operator__AND_ASSIGN();}
	| XOR_ASSIGN {$$ = rule.assignment_operator__XOR_ASSIGN();}
	| OR_ASSIGN {$$ = rule.assignment_operator__OR_ASSIGN();}
	;

expression
	: assignment_expression {$$ = rule.expression__assignment_expression();}
	| expression ',' assignment_expression {$$ = rule.expression__expression_COMMA_assignment_expression();}
	;

constant_expression
	: conditional_expression	 {$$ = rule.constant_expression__conditional_expression();}
	;

declaration
	: declaration_specifiers ';' {$$ = rule.declaration__declaration_specifiers_SCOLON();}
	| declaration_specifiers init_declarator_list ';' {$$ = rule.declaration__declaration_specifiers_init_declarator_list_SCOLON();}
	| static_assert_declaration {$$ = rule.declaration__static_assert_declaration();}
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers {$$ = rule.declaration_specifiers__storage_class_specifier_declaration_specifiers();}
	| storage_class_specifier {$$ = rule.declaration_specifiers__storage_class_specifier();}
	| type_specifier declaration_specifiers {$$ = rule.declaration_specifiers__type_specifier_declaration_specifiers();}
	| type_specifier {$$ = rule.declaration_specifiers__type_specifier();}
	| type_qualifier declaration_specifiers {$$ = rule.declaration_specifiers__type_qualifier_declaration_specifiers();}
	| type_qualifier {$$ = rule.declaration_specifiers__type_qualifier();}
	| function_specifier declaration_specifiers {$$ = rule.declaration_specifiers__function_specifier_declaration_specifiers();}
	| function_specifier {$$ = rule.declaration_specifiers__function_specifier();}
	| alignment_specifier declaration_specifiers {$$ = rule.declaration_specifiers__alignment_specifier_declaration_specifiers();}
	| alignment_specifier {$$ = rule.declaration_specifiers__alignment_specifier();}
	;

init_declarator_list
	: init_declarator {$$ = rule.init_declarator_list__init_declarator();}
	| init_declarator_list ',' init_declarator {$$ = rule.init_declarator_list__init_declarator_list_COMMA_init_declarator();}
	;

init_declarator
	: declarator '=' initializer {$$ = rule.init_declarator__declarator_EQ_initializer();}
	| declarator {$$ = rule.init_declarator__declarator();}
	;

storage_class_specifier
	: TYPEDEF	 {$$ = rule.storage_class_specifier__TYPEDEF();}
	| EXTERN {$$ = rule.storage_class_specifier__EXTERN();}
	| STATIC {$$ = rule.storage_class_specifier__STATIC();}
	| THREAD_LOCAL {$$ = rule.storage_class_specifier__THREAD_LOCAL();}
	| AUTO {$$ = rule.storage_class_specifier__AUTO();}
	| REGISTER {$$ = rule.storage_class_specifier__REGISTER();}
	;

type_specifier
	: VOID {$$ = rule.type_specifier__VOID();}
	| CHAR {$$ = rule.type_specifier__CHAR();}
	| SHORT {$$ = rule.type_specifier__SHORT();}
	| INT {$$ = rule.type_specifier__INT();}
	| LONG {$$ = rule.type_specifier__LONG();}
	| FLOAT {$$ = rule.type_specifier__FLOAT();}
	| DOUBLE {$$ = rule.type_specifier__DOUBLE();}
	| SIGNED {$$ = rule.type_specifier__SIGNED();}
	| UNSIGNED {$$ = rule.type_specifier__UNSIGNED();}
	| BOOL {$$ = rule.type_specifier__BOOL();}
	| COMPLEX {$$ = rule.type_specifier__COMPLEX();}
	| IMAGINARY	  	 {$$ = rule.type_specifier__IMAGINARY();}
	| atomic_type_specifier {$$ = rule.type_specifier__atomic_type_specifier();}
	| struct_or_union_specifier {$$ = rule.type_specifier__struct_or_union_specifier();}
	| enum_specifier {$$ = rule.type_specifier__enum_specifier();}
	| TYPEDEF_NAME		 {$$ = rule.type_specifier__TYPEDEF_NAME();}
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}' {$$ = rule.struct_or_union_specifier__struct_or_union_LCB_struct_declaration_list_RCB();}
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}' {$$ = rule.struct_or_union_specifier__struct_or_union_IDENTIFIER_LCB_struct_declaration_list_RCB();}
	| struct_or_union IDENTIFIER {$$ = rule.struct_or_union_specifier__struct_or_union_IDENTIFIER();}
	;

struct_or_union
	: STRUCT {$$ = rule.struct_or_union__STRUCT();}
	| UNION {$$ = rule.struct_or_union__UNION();}
	;

struct_declaration_list
	: struct_declaration {$$ = rule.struct_declaration_list__struct_declaration();}
	| struct_declaration_list struct_declaration {$$ = rule.struct_declaration_list__struct_declaration_list_struct_declaration();}
	;

struct_declaration
	: specifier_qualifier_list ';'	 {$$ = rule.struct_declaration__specifier_qualifier_list_SCOLON();}
	| specifier_qualifier_list struct_declarator_list ';' {$$ = rule.struct_declaration__specifier_qualifier_list_struct_declarator_list_SCOLON();}
	| static_assert_declaration {$$ = rule.struct_declaration__static_assert_declaration();}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list {$$ = rule.specifier_qualifier_list__type_specifier_specifier_qualifier_list();}
	| type_specifier {$$ = rule.specifier_qualifier_list__type_specifier();}
	| type_qualifier specifier_qualifier_list {$$ = rule.specifier_qualifier_list__type_qualifier_specifier_qualifier_list();}
	| type_qualifier {$$ = rule.specifier_qualifier_list__type_qualifier();}
	;

struct_declarator_list
	: struct_declarator {$$ = rule.struct_declarator_list__struct_declarator();}
	| struct_declarator_list ',' struct_declarator {$$ = rule.struct_declarator_list__struct_declarator_list_COMMA_struct_declarator();}
	;

struct_declarator
	: ':' constant_expression {$$ = rule.struct_declarator__COLON_constant_expression();}
	| declarator ':' constant_expression {$$ = rule.struct_declarator__declarator_COLON_constant_expression();}
	| declarator {$$ = rule.struct_declarator__declarator();}
	;

enum_specifier
	: ENUM '{' enumerator_list '}' {$$ = rule.enum_specifier__ENUM_LCB_enumerator_list_RCB();}
	| ENUM '{' enumerator_list ',' '}' {$$ = rule.enum_specifier__ENUM_LCB_enumerator_list_COMMA_RCB();}
	| ENUM IDENTIFIER '{' enumerator_list '}' {$$ = rule.enum_specifier__ENUM_IDENTIFIER_LCB_enumerator_list_RCB();}
	| ENUM IDENTIFIER '{' enumerator_list ',' '}' {$$ = rule.enum_specifier__ENUM_IDENTIFIER_LCB_enumerator_list_COMMA_RCB();}
	| ENUM IDENTIFIER {$$ = rule.enum_specifier__ENUM_IDENTIFIER();}
	;

enumerator_list
	: enumerator {$$ = rule.enumerator_list__enumerator();}
	| enumerator_list ',' enumerator {$$ = rule.enumerator_list__enumerator_list_COMMA_enumerator();}
	;

enumerator	
	: enumeration_constant '=' constant_expression {$$ = rule.enumerator__enumeration_constant_EQ_constant_expression();}
	| enumeration_constant {$$ = rule.enumerator__enumeration_constant();}
	;

atomic_type_specifier
	: ATOMIC '(' type_name ')' {$$ = rule.atomic_type_specifier__ATOMIC_LP_type_name_RP();}
	;

type_qualifier
	: CONST {$$ = rule.type_qualifier__CONST();}
	| RESTRICT {$$ = rule.type_qualifier__RESTRICT();}
	| VOLATILE {$$ = rule.type_qualifier__VOLATILE();}
	| ATOMIC {$$ = rule.type_qualifier__ATOMIC();}
	;

function_specifier
	: INLINE {$$ = rule.function_specifier__INLINE();}
	| NORETURN {$$ = rule.function_specifier__NORETURN();}
	;

alignment_specifier
	: ALIGNAS '(' type_name ')' {$$ = rule.alignment_specifier__ALIGNAS_LP_type_name_RP();}
	| ALIGNAS '(' constant_expression ')' {$$ = rule.alignment_specifier__ALIGNAS_LP_constant_expression_RP();}
	;

declarator
	: pointer direct_declarator {$$ = rule.declarator__pointer_direct_declarator();}
	| direct_declarator {$$ = rule.declarator__direct_declarator();}
	;

direct_declarator
	: IDENTIFIER {$$ = rule.direct_declarator__IDENTIFIER();}
	| '(' declarator ')' {$$ = rule.direct_declarator__LP_declarator_RP();}
	| direct_declarator '[' ']' {$$ = rule.direct_declarator__direct_declarator_LSB_RSB();}
	| direct_declarator '[' '*' ']' {$$ = rule.direct_declarator__direct_declarator_LSB_MULT_RSB();}
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']' {$$ = rule.direct_declarator__direct_declarator_LSB_STATIC_type_qualifier_list_assignment_expression_RSB();}
	| direct_declarator '[' STATIC assignment_expression ']' {$$ = rule.direct_declarator__direct_declarator_LSB_STATIC_assignment_expression_RSB();}
	| direct_declarator '[' type_qualifier_list '*' ']' {$$ = rule.direct_declarator__direct_declarator_LSB_type_qualifier_list_MULT_RSB();}
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']' {$$ = rule.direct_declarator__direct_declarator_LSB_type_qualifier_list_STATIC_assignment_expression_RSB();}
	| direct_declarator '[' type_qualifier_list assignment_expression ']' {$$ = rule.direct_declarator__direct_declarator_LSB_type_qualifier_list_assignment_expression_RSB();}
	| direct_declarator '[' type_qualifier_list ']' {$$ = rule.direct_declarator__direct_declarator_LSB_type_qualifier_list_RSB();}
	| direct_declarator '[' assignment_expression ']' {$$ = rule.direct_declarator__direct_declarator_LSB_assignment_expression_RSB();}
	| direct_declarator '(' parameter_type_list ')' {$$ = rule.direct_declarator__direct_declarator_LP_parameter_type_list_RP();}
	| direct_declarator '(' ')' {$$ = rule.direct_declarator__direct_declarator_LP_RP();}
	| direct_declarator '(' identifier_list ')' {$$ = rule.direct_declarator__direct_declarator_LP_identifier_list_RP();}
	;

pointer
	: '*' type_qualifier_list pointer {$$ = rule.pointer__MULT_type_qualifier_list_pointer();}
	| '*' type_qualifier_list {$$ = rule.pointer__MULT_type_qualifier_list();}
	| '*' pointer {$$ = rule.pointer__MULT_pointer();}
	| '*' {$$ = rule.pointer__MULT();}
	;

type_qualifier_list
	: type_qualifier {$$ = rule.type_qualifier_list__type_qualifier();}
	| type_qualifier_list type_qualifier {$$ = rule.type_qualifier_list__type_qualifier_list_type_qualifier();}
	;


parameter_type_list
	: parameter_list ',' ELLIPSIS {$$ = rule.parameter_type_list__parameter_list_COMMA_ELLIPSIS();}
	| parameter_list {$$ = rule.parameter_type_list__parameter_list();}
	;

parameter_list
	: parameter_declaration {$$ = rule.parameter_list__parameter_declaration();}
	| parameter_list ',' parameter_declaration {$$ = rule.parameter_list__parameter_list_COMMA_parameter_declaration();}
	;

parameter_declaration
	: declaration_specifiers declarator {$$ = rule.parameter_declaration__declaration_specifiers_declarator();}
	| declaration_specifiers abstract_declarator {$$ = rule.parameter_declaration__declaration_specifiers_abstract_declarator();}
	| declaration_specifiers {$$ = rule.parameter_declaration__declaration_specifiers();}
	;

identifier_list
	: IDENTIFIER {$$ = rule.identifier_list__IDENTIFIER();}
	| identifier_list ',' IDENTIFIER {$$ = rule.identifier_list__identifier_list_COMMA_IDENTIFIER();}
	;

type_name
	: specifier_qualifier_list abstract_declarator {$$ = rule.type_name__specifier_qualifier_list_abstract_declarator();}
	| specifier_qualifier_list {$$ = rule.type_name__specifier_qualifier_list();}
	;

abstract_declarator
	: pointer direct_abstract_declarator {$$ = rule.abstract_declarator__pointer_direct_abstract_declarator();}
	| pointer {$$ = rule.abstract_declarator__pointer();}
	| direct_abstract_declarator {$$ = rule.abstract_declarator__direct_abstract_declarator();}
	;

direct_abstract_declarator
	: '(' abstract_declarator ')' {$$ = rule.direct_abstract_declarator__LP_abstract_declarator_RP();}
	| '[' ']' {$$ = rule.direct_abstract_declarator__LSB_RSB();}
	| '[' '*' ']' {$$ = rule.direct_abstract_declarator__LSB_MULT_RSB();}
	| '[' STATIC type_qualifier_list assignment_expression ']' {$$ = rule.direct_abstract_declarator__LSB_STATIC_type_qualifier_list_assignment_expression_RSB();}
	| '[' STATIC assignment_expression ']' {$$ = rule.direct_abstract_declarator__LSB_STATIC_assignment_expression_RSB();}
	| '[' type_qualifier_list STATIC assignment_expression ']' {$$ = rule.direct_abstract_declarator__LSB_type_qualifier_list_STATIC_assignment_expression_RSB();}
	| '[' type_qualifier_list assignment_expression ']' {$$ = rule.direct_abstract_declarator__LSB_type_qualifier_list_assignment_expression_RSB();}
	| '[' type_qualifier_list ']' {$$ = rule.direct_abstract_declarator__LSB_type_qualifier_list_RSB();}
	| '[' assignment_expression ']' {$$ = rule.direct_abstract_declarator__LSB_assignment_expression_RSB();}
	| direct_abstract_declarator '[' ']' {$$ = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_RSB();}
	| direct_abstract_declarator '[' '*' ']' {$$ = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_MULT_RSB();}
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']' {$$ = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_STATIC_type_qualifier_list_assignment_expression_RSB();}
	| direct_abstract_declarator '[' STATIC assignment_expression ']' {$$ = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_STATIC_assignment_expression_RSB();}
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']' {$$ = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_type_qualifier_list_assignment_expression_RSB();}
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']' {$$ = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_type_qualifier_list_STATIC_assignment_expression_RSB();}
	| direct_abstract_declarator '[' type_qualifier_list ']' {$$ = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_type_qualifier_list_RSB();}
	| direct_abstract_declarator '[' assignment_expression ']' {$$ = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_assignment_expression_RSB();}
	| '(' ')' {$$ = rule.direct_abstract_declarator__LP_RP();}
	| '(' parameter_type_list ')' {$$ = rule.direct_abstract_declarator__LP_parameter_type_list_RP();}
	| direct_abstract_declarator '(' ')' {$$ = rule.direct_abstract_declarator__direct_abstract_declarator_LP_RP();}
	| direct_abstract_declarator '(' parameter_type_list ')' {$$ = rule.direct_abstract_declarator__direct_abstract_declarator_LP_parameter_type_list_RP();}
	;

initializer
	: '{' initializer_list '}' {$$ = rule.initializer__LCB_initializer_list_RCB();}
	| '{' initializer_list ',' '}' {$$ = rule.initializer__LCB_initializer_list_COMMA_RCB();}
	| assignment_expression {$$ = rule.initializer__assignment_expression();}
	;

initializer_list
	: designation initializer {$$ = rule.initializer_list__designation_initializer();}
	| initializer {$$ = rule.initializer_list__initializer();}
	| initializer_list ',' designation initializer {$$ = rule.initializer_list__initializer_list_COMMA_designation_initializer();}
	| initializer_list ',' initializer {$$ = rule.initializer_list__initializer_list_COMMA_initializer();}
	;

designation
	: designator_list '=' {$$ = rule.designation__designator_list_EQ();}
	;

designator_list
	: designator {$$ = rule.designator_list__designator();}
	| designator_list designator {$$ = rule.designator_list__designator_list_designator();}
	;

designator
	: '[' constant_expression ']' {$$ = rule.designator__LSB_constant_expression_RSB();}
	| '.' IDENTIFIER {$$ = rule.designator__DOT_IDENTIFIER();}
	;

static_assert_declaration
	: STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';' {$$ = rule.static_assert_declaration__STATIC_ASSERT_LP_constant_expression_COMMA_STRING_LITERAL_RP_SCOLON();}
	;

statement
	: labeled_statement {$$ = rule.statement__labeled_statement();}
	| compound_statement {$$ = rule.statement__compound_statement();}
	| expression_statement {$$ = rule.statement__expression_statement();}
	| selection_statement {$$ = rule.statement__selection_statement();}
	| iteration_statement {$$ = rule.statement__iteration_statement();}
	| jump_statement {$$ = rule.statement__jump_statement();}
	;

labeled_statement
	: IDENTIFIER ':' statement {$$ = rule.labeled_statement__IDENTIFIER_COLON_statement();}
	| CASE constant_expression ':' statement {$$ = rule.labeled_statement__CASE_constant_expression_COLON_statement();}
	| DEFAULT ':' statement {$$ = rule.labeled_statement__DEFAULT_COLON_statement();}
	;

compound_statement
	: '{' '}' {$$ = rule.compound_statement__LCB_RCB();}
	| '{'  block_item_list '}' {$$ = rule.compound_statement__LCB__block_item_list_RCB();}
	;

block_item_list
	: block_item {$$ = rule.block_item_list__block_item();}
	| block_item_list block_item {$$ = rule.block_item_list__block_item_list_block_item();}
	;

block_item
	: declaration {$$ = rule.block_item__declaration();}
	| statement {$$ = rule.block_item__statement();}
	;

expression_statement
	: ';' {$$ = rule.expression_statement__SCOLON();}
	| expression ';' {$$ = rule.expression_statement__expression_SCOLON();}
	;

selection_statement
	: IF '(' expression ')' statement ELSE statement {$$ = rule.selection_statement__IF_LP_expression_RP_statement_ELSE_statement();}
	| IF '(' expression ')' statement {$$ = rule.selection_statement__IF_LP_expression_RP_statement();}
	| SWITCH '(' expression ')' statement {$$ = rule.selection_statement__SWITCH_LP_expression_RP_statement();}
	;

iteration_statement
	: WHILE '(' expression ')' statement {$$ = rule.iteration_statement__WHILE_LP_expression_RP_statement();}
	| DO statement WHILE '(' expression ')' ';' {$$ = rule.iteration_statement__DO_statement_WHILE_LP_expression_RP_SCOLON();}
	| FOR '(' expression_statement expression_statement ')' statement {$$ = rule.iteration_statement__FOR_LP_expression_statement_expression_statement_RP_statement();}
	| FOR '(' expression_statement expression_statement expression ')' statement {$$ = rule.iteration_statement__FOR_LP_expression_statement_expression_statement_expression_RP_statement();}
	| FOR '(' declaration expression_statement ')' statement {$$ = rule.iteration_statement__FOR_LP_declaration_expression_statement_RP_statement();}
	| FOR '(' declaration expression_statement expression ')' statement {$$ = rule.iteration_statement__FOR_LP_declaration_expression_statement_expression_RP_statement();}
	;

jump_statement
	: GOTO IDENTIFIER ';' {$$ = rule.jump_statement__GOTO_IDENTIFIER_SCOLON();}
	| CONTINUE ';' {$$ = rule.jump_statement__CONTINUE_SCOLON();}
	| BREAK ';' {$$ = rule.jump_statement__BREAK_SCOLON();}
	| RETURN ';' {$$ = rule.jump_statement__RETURN_SCOLON();}
	| RETURN expression ';' {$$ = rule.jump_statement__RETURN_expression_SCOLON();}
	;

translation_unit
	: external_declaration {$$ = rule.translation_unit__external_declaration();}
	| translation_unit external_declaration {$$ = rule.translation_unit__translation_unit_external_declaration();}
	;

external_declaration
	: function_definition {$$ = rule.external_declaration__function_definition();}
	| declaration {$$ = rule.external_declaration__declaration();}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement {$$ = rule.function_definition__declaration_specifiers_declarator_declaration_list_compound_statement();}
	| declaration_specifiers declarator compound_statement {$$ = rule.function_definition__declaration_specifiers_declarator_compound_statement();}
	;

declaration_list
	: declaration {$$ = rule.declaration_list__declaration();}
	| declaration_list declaration {$$ = rule.declaration_list__declaration_list_declaration();}
	;

%%
#include <stdio.h>

void yyerror(const char *s)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", s);
}