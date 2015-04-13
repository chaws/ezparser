#ifndef EZRULE_H
#define EZRULE_H

#include <ezutil.h>
#include <ezast.h>
#include <stdlib.h>

/**
 *	Keep the current line number, THIS IS DANGEROUS because it's global, but necessary =(
 */
extern int __current_line;

/**
 *	Keep the current column number, to keep things tracked, THIS IS DANGEROUS because it's global, but necessary =(
 */
extern int __current_column;

/**
 *	Keep the current scope, which means: scope is inscreased when theres '{' and decreasead when '}'
 */
extern int __current_scope;

/**
 *	Keep the last generated ast reference
 */
extern ezast * ast_root;

/**
 *	Responsible to manage grammar rules
 */
class ezrule : public ez
{
public:

	/**
	 *	Keeps the root of the ast being built
	 */
	ezast * root;

	void init();
	
	ezast * primary_expression__IDENTIFIER(char * identifier = NULL);

	ezast * primary_expression__constant(ezast * constant = NULL);

	ezast * primary_expression__string(ezast * string = NULL);

	ezast * primary_expression__LP_expression_RP(ezast * expression = NULL);

	ezast * primary_expression__generic_selection(ezast * generic_selection = NULL);

	ezast * constant__I_CONSTANT(double i_constant = NULL);

	ezast * constant__F_CONSTANT(double f_constant = NULL);

	ezast * constant__ENUMERATION_CONSTANT(ezast * enumeration_constant = NULL);

	ezast * enumeration_constant__IDENTIFIER(ezast * identifier = NULL);

	ezast * string__STRING_LITERAL(char * string_literal = NULL);

	ezast * string__FUNC_NAME(char * func_name = NULL);

	ezast * generic_selection__GENERIC_LP_assignment_expression_COMMA_generic_assoc_list_RP(ezast * assignment_expression = NULL, ezast * generic_assoc_list = NULL);

	ezast * generic_assoc_list__generic_association(ezast * generic_association = NULL);

	ezast * generic_assoc_list__generic_assoc_list_COMMA_generic_association(ezast * generic_assoc_list = NULL, ezast * generic_association = NULL);

	ezast * generic_association__type_name_COLON_assignment_expression(ezast * type_name = NULL, ezast * assignment_expression = NULL);

	ezast * generic_association__DEFAULT_COLON_assignment_expression(ezast * assignment_expression = NULL);

	ezast * postfix_expression__primary_expression(ezast * primary_expression = NULL);

	ezast * postfix_expression__postfix_expression_LSB_expression_RSB(ezast * postfix_expression = NULL, ezast * expression = NULL);

	ezast * postfix_expression__postfix_expression_LP_RP(ezast * postfix_expression = NULL);

	ezast * postfix_expression__postfix_expression_LP_argument_expression_list_RP(ezast * postfix_expression = NULL, ezast * argument_expression_list = NULL);

	ezast * postfix_expression__postfix_expression_DOT_IDENTIFIER(ezast * postfix_expression = NULL, ezast * identifier = NULL);

	ezast * postfix_expression__postfix_expression_PTR_OP_IDENTIFIER(ezast * postfix_expression = NULL, ezast * identifier = NULL);

	ezast * postfix_expression__postfix_expression_INC_OP(ezast * postfix_expression = NULL);

	ezast * postfix_expression__postfix_expression_DEC_OP(ezast * postfix_expression = NULL);

	ezast * postfix_expression__LP_type_name_RP_LCB_initializer_list_RCB(ezast * type_name = NULL, ezast * initializer_list = NULL);

	ezast * postfix_expression__LP_type_name_RP_LCB_initializer_list_COMMA_RCB(ezast * type_name = NULL, ezast * initializer_list = NULL);

	ezast * argument_expression_list__assignment_expression(ezast * assignment_expression = NULL);

	ezast * argument_expression_list__argument_expression_list_COMMA_assignment_expression(ezast * argument_expression_list = NULL, ezast * assignment_expression = NULL);

	ezast * unary_expression__postfix_expression(ezast * postfix_expression = NULL);

	ezast * unary_expression__INC_OP_unary_expression(ezast * unary_expression = NULL);

	ezast * unary_expression__DEC_OP_unary_expression(ezast * unary_expression = NULL);

	ezast * unary_expression__unary_operator_cast_expression(ezast * unary_operator = NULL, ezast * cast_expression = NULL);

	ezast * unary_expression__SIZEOF_unary_expression(ezast * unary_expression = NULL);

	ezast * unary_expression__SIZEOF_LP_type_name_RP(ezast * type_name = NULL);

	ezast * unary_expression__ALIGNOF_LP_type_name_RP(ezast * type_name = NULL);

	ezast * unary_operator__AMP();

	ezast * unary_operator__MULT();

	ezast * unary_operator__PLUS();

	ezast * unary_operator__MINUS();

	ezast * unary_operator__TILDE();

	ezast * unary_operator__EXM();

	ezast * cast_expression__unary_expression(ezast * unary_expression = NULL);

	ezast * cast_expression__LP_type_name_RP_cast_expression(ezast * type_name = NULL, ezast * cast_expression = NULL);

	ezast * multiplicative_expression__cast_expression(ezast * cast_expression = NULL);

	ezast * multiplicative_expression__multiplicative_expression_MULT_cast_expression(ezast * multiplicative_expression = NULL, ezast * cast_expression = NULL);

	ezast * multiplicative_expression__multiplicative_expression_DIV_cast_expression(ezast * multiplicative_expression = NULL, ezast * cast_expression = NULL);

	ezast * multiplicative_expression__multiplicative_expression_MOD_cast_expression(ezast * multiplicative_expression = NULL, ezast * cast_expression = NULL);

	ezast * additive_expression__multiplicative_expression(ezast * multiplicative_expression = NULL);

	ezast * additive_expression__additive_expression_PLUS_multiplicative_expression(ezast * additive_expression = NULL, ezast * multiplicative_expression = NULL);

	ezast * additive_expression__additive_expression_MINUS_multiplicative_expression(ezast * additive_expression = NULL, ezast * multiplicative_expression = NULL);

	ezast * shift_expression__additive_expression(ezast * additive_expression = NULL);

	ezast * shift_expression__shift_expression_LEFT_OP_additive_expression(ezast * shift_expression = NULL, ezast * additive_expression = NULL);

	ezast * shift_expression__shift_expression_RIGHT_OP_additive_expression(ezast * shift_expression = NULL, ezast * additive_expression = NULL);

	ezast * relational_expression__shift_expression(ezast * shift_expression = NULL);

	ezast * relational_expression__relational_expression_LT_shift_expression(ezast * relational_expression = NULL, ezast * shift_expression = NULL);

	ezast * relational_expression__relational_expression_GT_shift_expression(ezast * relational_expression = NULL, ezast * shift_expression = NULL);

	ezast * relational_expression__relational_expression_LE_OP_shift_expression(ezast * relational_expression = NULL, ezast * shift_expression = NULL);

	ezast * relational_expression__relational_expression_GE_OP_shift_expression(ezast * relational_expression = NULL, ezast * shift_expression = NULL);

	ezast * equality_expression__relational_expression(ezast * relational_expression = NULL);

	ezast * equality_expression__equality_expression_EQ_OP_relational_expression(ezast * equality_expression = NULL, ezast * relational_expression = NULL);

	ezast * equality_expression__equality_expression_NE_OP_relational_expression(ezast * equality_expression = NULL, ezast * relational_expression = NULL);

	ezast * and_expression__equality_expression(ezast * equality_expression = NULL);

	ezast * and_expression__and_expression_AMP_equality_expression(ezast * and_expression = NULL, ezast * equality_expression = NULL);

	ezast * exclusive_or_expression__and_expression(ezast * and_expression = NULL);

	ezast * exclusive_or_expression__exclusive_or_expression_XOR_and_expression(ezast * exclusive_or_expression = NULL, ezast * and_expression = NULL);

	ezast * inclusive_or_expression__exclusive_or_expression(ezast * exclusive_or_expression = NULL);

	ezast * inclusive_or_expression__inclusive_or_expression_OR_exclusive_or_expression(ezast * inclusive_or_expression = NULL, ezast * exclusive_or_expression = NULL);

	ezast * logical_and_expression__inclusive_or_expression(ezast * inclusive_or_expression = NULL);

	ezast * logical_and_expression__logical_and_expression_AND_OP_inclusive_or_expression(ezast * logical_and_expression = NULL, ezast * inclusive_or_expression = NULL);

	ezast * logical_or_expression__logical_and_expression(ezast * logical_and_expression = NULL);

	ezast * logical_or_expression__logical_or_expression_OR_OP_logical_and_expression(ezast * logical_or_expression = NULL, ezast * logical_and_expression = NULL);

	ezast * conditional_expression__logical_or_expression(ezast * logical_or_expression = NULL);

	ezast * conditional_expression__logical_or_expression_QUM_expression_COLON_conditional_expression(ezast * logical_or_expression = NULL, ezast * expression = NULL, ezast * conditional_expression = NULL);

	ezast * assignment_expression__conditional_expression(ezast * conditional_expression = NULL);

	ezast * assignment_expression__unary_expression_assignment_operator_assignment_expression(ezast * unary_expression = NULL, ezast * assignment_operator = NULL, ezast * assignment_expression = NULL);

	ezast * assignment_operator__EQ();

	ezast * assignment_operator__MUL_ASSIGN();

	ezast * assignment_operator__DIV_ASSIGN();

	ezast * assignment_operator__MOD_ASSIGN();

	ezast * assignment_operator__ADD_ASSIGN();

	ezast * assignment_operator__SUB_ASSIGN();

	ezast * assignment_operator__LEFT_ASSIGN();

	ezast * assignment_operator__RIGHT_ASSIGN();

	ezast * assignment_operator__AND_ASSIGN();

	ezast * assignment_operator__XOR_ASSIGN();

	ezast * assignment_operator__OR_ASSIGN();

	ezast * expression__assignment_expression(ezast * assignment_expression = NULL);

	ezast * expression__expression_COMMA_assignment_expression(ezast * expression = NULL, ezast * assignment_expression = NULL);

	ezast * constant_expression__conditional_expression(ezast * conditional_expression = NULL);

	ezast * declaration__declaration_specifiers_SCOLON(ezast * declaration_specifiers = NULL);

	ezast * declaration__declaration_specifiers_init_declarator_list_SCOLON(ezast * declaration_specifiers = NULL, ezast * init_declarator_list = NULL);

	ezast * declaration__static_assert_declaration(ezast * static_assert_declaration = NULL);

	ezast * declaration_specifiers__storage_class_specifier_declaration_specifiers(ezast * storage_class_specifier = NULL, ezast * declaration_specifiers = NULL);

	ezast * declaration_specifiers__storage_class_specifier(ezast * storage_class_specifier = NULL);

	ezast * declaration_specifiers__type_specifier_declaration_specifiers(ezast * type_specifier = NULL, ezast * declaration_specifiers = NULL);

	ezast * declaration_specifiers__type_specifier(ezast * type_specifier = NULL);

	ezast * declaration_specifiers__type_qualifier_declaration_specifiers(ezast * type_qualifier = NULL, ezast * declaration_specifiers = NULL);

	ezast * declaration_specifiers__type_qualifier(ezast * type_qualifier = NULL);

	ezast * declaration_specifiers__function_specifier_declaration_specifiers(ezast * function_specifier = NULL, ezast * declaration_specifiers = NULL);

	ezast * declaration_specifiers__function_specifier(ezast * function_specifier = NULL);

	ezast * declaration_specifiers__alignment_specifier_declaration_specifiers(ezast * alignment_specifier = NULL, ezast * declaration_specifiers = NULL);

	ezast * declaration_specifiers__alignment_specifier(ezast * alignment_specifier = NULL);

	ezast * init_declarator_list__init_declarator(ezast * init_declarator = NULL);

	ezast * init_declarator_list__init_declarator_list_COMMA_init_declarator(ezast * init_declarator_list = NULL, ezast * init_declarator = NULL);

	ezast * init_declarator__declarator_EQ_initializer(ezast * declarator = NULL, ezast * initializer = NULL);

	ezast * init_declarator__declarator(ezast * declarator = NULL);

	ezast * storage_class_specifier__TYPEDEF();

	ezast * storage_class_specifier__EXTERN();

	ezast * storage_class_specifier__STATIC();

	ezast * storage_class_specifier__THREAD_LOCAL();

	ezast * storage_class_specifier__AUTO();

	ezast * storage_class_specifier__REGISTER();

	ezast * type_specifier__VOID();

	ezast * type_specifier__CHAR();

	ezast * type_specifier__SHORT();

	ezast * type_specifier__INT();

	ezast * type_specifier__LONG();

	ezast * type_specifier__FLOAT();

	ezast * type_specifier__DOUBLE();

	ezast * type_specifier__SIGNED();

	ezast * type_specifier__UNSIGNED();

	ezast * type_specifier__BOOL();

	ezast * type_specifier__COMPLEX();

	ezast * type_specifier__IMAGINARY();

	ezast * type_specifier__atomic_type_specifier(ezast * atomic_type_specifier = NULL);

	ezast * type_specifier__struct_or_union_specifier(ezast * struct_or_union_specifier = NULL);

	ezast * type_specifier__enum_specifier(ezast * enum_specifier = NULL);

	ezast * type_specifier__TYPEDEF_NAME(char * type_def = NULL);

	ezast * struct_or_union_specifier__struct_or_union_LCB_struct_declaration_list_RCB(ezast * struct_or_union = NULL, ezast * struct_declaration_list = NULL);

	ezast * struct_or_union_specifier__struct_or_union_IDENTIFIER_LCB_struct_declaration_list_RCB(ezast * struct_or_union = NULL, ezast * identifier = NULL, ezast * struct_declaration_list = NULL);

	ezast * struct_or_union_specifier__struct_or_union_IDENTIFIER(ezast * struct_or_union = NULL, ezast * identifier = NULL);

	ezast * struct_or_union__STRUCT();

	ezast * struct_or_union__UNION();

	ezast * struct_declaration_list__struct_declaration(ezast * struct_declaration = NULL);

	ezast * struct_declaration_list__struct_declaration_list_struct_declaration(ezast * struct_declaration_list = NULL, ezast * struct_declaration = NULL);

	ezast * struct_declaration__specifier_qualifier_list_SCOLON(ezast * specifier_qualifier_list = NULL);

	ezast * struct_declaration__specifier_qualifier_list_struct_declarator_list_SCOLON(ezast * specifier_qualifier_list = NULL, ezast * struct_declarator_list = NULL);

	ezast * struct_declaration__static_assert_declaration(ezast * static_assert_declaration = NULL);

	ezast * specifier_qualifier_list__type_specifier_specifier_qualifier_list(ezast * type_specifier = NULL, ezast * specifier_qualifier_list = NULL);

	ezast * specifier_qualifier_list__type_specifier(ezast * type_specifier = NULL);

	ezast * specifier_qualifier_list__type_qualifier_specifier_qualifier_list(ezast * type_qualifier = NULL, ezast * specifier_qualifier_list = NULL);

	ezast * specifier_qualifier_list__type_qualifier(ezast * type_qualifier = NULL);

	ezast * struct_declarator_list__struct_declarator(ezast * struct_declarator = NULL);

	ezast * struct_declarator_list__struct_declarator_list_COMMA_struct_declarator(ezast * struct_declarator_list = NULL, ezast * struct_declarator = NULL);

	ezast * struct_declarator__COLON_constant_expression(ezast * constant_expression = NULL);

	ezast * struct_declarator__declarator_COLON_constant_expression(ezast * declarator = NULL, ezast * constant_expression = NULL);

	ezast * struct_declarator__declarator(ezast * declarator = NULL);

	ezast * enum_specifier__ENUM_LCB_enumerator_list_RCB(ezast * enumerator_list = NULL);

	ezast * enum_specifier__ENUM_LCB_enumerator_list_COMMA_RCB(ezast * enumerator_list = NULL);

	ezast * enum_specifier__ENUM_IDENTIFIER_LCB_enumerator_list_RCB(ezast * identifier = NULL, ezast * enumerator_list = NULL);

	ezast * enum_specifier__ENUM_IDENTIFIER_LCB_enumerator_list_COMMA_RCB(ezast * identifier = NULL, ezast * enumerator_list = NULL);

	ezast * enum_specifier__ENUM_IDENTIFIER(ezast * identifier = NULL);

	ezast * enumerator_list__enumerator(ezast * enumerator = NULL);

	ezast * enumerator_list__enumerator_list_COMMA_enumerator(ezast * enumerator_list = NULL, ezast * enumerator = NULL);

	ezast * enumerator__enumeration_constant_EQ_constant_expression(ezast * enumeration_constant = NULL, ezast * constant_expression = NULL);

	ezast * enumerator__enumeration_constant(ezast * enumeration_constant = NULL);

	ezast * atomic_type_specifier__ATOMIC_LP_type_name_RP(ezast * type_name = NULL);

	ezast * type_qualifier__CONST();

	ezast * type_qualifier__RESTRICT();

	ezast * type_qualifier__VOLATILE();

	ezast * type_qualifier__ATOMIC();

	ezast * function_specifier__INLINE();

	ezast * function_specifier__NORETURN();

	ezast * alignment_specifier__ALIGNAS_LP_type_name_RP(ezast * type_name = NULL);

	ezast * alignment_specifier__ALIGNAS_LP_constant_expression_RP(ezast * constant_expression = NULL);

	ezast * declarator__pointer_direct_declarator(ezast * pointer = NULL, ezast * direct_declarator = NULL);

	ezast * declarator__direct_declarator(ezast * direct_declarator = NULL);

	ezast * direct_declarator__IDENTIFIER(char * identifier = NULL);

	ezast * direct_declarator__LP_declarator_RP(ezast * declarator = NULL);

	ezast * direct_declarator__direct_declarator_LSB_RSB(ezast * direct_declarator = NULL);

	ezast * direct_declarator__direct_declarator_LSB_MULT_RSB(ezast * direct_declarator = NULL);

	ezast * direct_declarator__direct_declarator_LSB_STATIC_type_qualifier_list_assignment_expression_RSB(ezast * direct_declarator = NULL, ezast * type_qualifier_list = NULL, ezast * assignment_expression = NULL);

	ezast * direct_declarator__direct_declarator_LSB_STATIC_assignment_expression_RSB(ezast * direct_declarator = NULL, ezast * assignment_expression = NULL);

	ezast * direct_declarator__direct_declarator_LSB_type_qualifier_list_MULT_RSB(ezast * direct_declarator = NULL, ezast * type_qualifier_list = NULL);

	ezast * direct_declarator__direct_declarator_LSB_type_qualifier_list_STATIC_assignment_expression_RSB(ezast * direct_declarator = NULL, ezast * type_qualifier_list = NULL, ezast * assignment_expression = NULL);

	ezast * direct_declarator__direct_declarator_LSB_type_qualifier_list_assignment_expression_RSB(ezast * direct_declarator = NULL, ezast * type_qualifier_list = NULL, ezast * assignment_expression = NULL);

	ezast * direct_declarator__direct_declarator_LSB_type_qualifier_list_RSB(ezast * direct_declarator = NULL, ezast * type_qualifier_list = NULL);

	ezast * direct_declarator__direct_declarator_LSB_assignment_expression_RSB(ezast * direct_declarator = NULL, ezast * assignment_expression = NULL);

	ezast * direct_declarator__direct_declarator_LP_parameter_type_list_RP(ezast * direct_declarator = NULL, ezast * parameter_type_list = NULL);

	ezast * direct_declarator__direct_declarator_LP_RP(ezast * direct_declarator = NULL);

	ezast * direct_declarator__direct_declarator_LP_identifier_list_RP(ezast * direct_declarator = NULL, ezast * identifier_list = NULL);

	ezast * pointer__MULT_type_qualifier_list_pointer(ezast * type_qualifier_list = NULL, ezast * pointer = NULL);

	ezast * pointer__MULT_type_qualifier_list(ezast * type_qualifier_list = NULL);

	ezast * pointer__MULT_pointer(ezast * pointer = NULL);

	ezast * pointer__MULT();

	ezast * type_qualifier_list__type_qualifier(ezast * type_qualifier = NULL);

	ezast * type_qualifier_list__type_qualifier_list_type_qualifier(ezast * type_qualifier_list = NULL, ezast * type_qualifier = NULL);

	ezast * parameter_type_list__parameter_list_COMMA_ELLIPSIS(ezast * parameter_list = NULL);

	ezast * parameter_type_list__parameter_list(ezast * parameter_list = NULL);

	ezast * parameter_list__parameter_declaration(ezast * parameter_declaration = NULL);

	ezast * parameter_list__parameter_list_COMMA_parameter_declaration(ezast * parameter_list = NULL, ezast * parameter_declaration = NULL);

	ezast * parameter_declaration__declaration_specifiers_declarator(ezast * declaration_specifiers = NULL, ezast * declarator = NULL);

	ezast * parameter_declaration__declaration_specifiers_abstract_declarator(ezast * declaration_specifiers = NULL, ezast * abstract_declarator = NULL);

	ezast * parameter_declaration__declaration_specifiers(ezast * declaration_specifiers = NULL);

	ezast * identifier_list__IDENTIFIER(ezast * identifier = NULL);

	ezast * identifier_list__identifier_list_COMMA_IDENTIFIER(ezast * identifier_list = NULL, ezast * identifier = NULL);

	ezast * type_name__specifier_qualifier_list_abstract_declarator(ezast * specifier_qualifier_list = NULL, ezast * abstract_declarator = NULL);

	ezast * type_name__specifier_qualifier_list(ezast * specifier_qualifier_list = NULL);

	ezast * abstract_declarator__pointer_direct_abstract_declarator(ezast * pointer = NULL, ezast * direct_abstract_declarator = NULL);

	ezast * abstract_declarator__pointer(ezast * pointer = NULL);

	ezast * abstract_declarator__direct_abstract_declarator(ezast * direct_abstract_declarator = NULL);

	ezast * direct_abstract_declarator__LP_abstract_declarator_RP(ezast * abstract_declarator = NULL);

	ezast * direct_abstract_declarator__LSB_RSB();

	ezast * direct_abstract_declarator__LSB_MULT_RSB();

	ezast * direct_abstract_declarator__LSB_STATIC_type_qualifier_list_assignment_expression_RSB(ezast * type_qualifier_list = NULL, ezast * assignment_expression = NULL);

	ezast * direct_abstract_declarator__LSB_STATIC_assignment_expression_RSB(ezast * assignment_expression = NULL);

	ezast * direct_abstract_declarator__LSB_type_qualifier_list_STATIC_assignment_expression_RSB(ezast * type_qualifier_list = NULL, ezast * assignment_expression = NULL);

	ezast * direct_abstract_declarator__LSB_type_qualifier_list_assignment_expression_RSB(ezast * type_qualifier_list = NULL, ezast * assignment_expression = NULL);

	ezast * direct_abstract_declarator__LSB_type_qualifier_list_RSB(ezast * type_qualifier_list = NULL);

	ezast * direct_abstract_declarator__LSB_assignment_expression_RSB(ezast * assignment_expression = NULL);

	ezast * direct_abstract_declarator__direct_abstract_declarator_LSB_RSB(ezast * direct_abstract_declarator = NULL);

	ezast * direct_abstract_declarator__direct_abstract_declarator_LSB_MULT_RSB(ezast * direct_abstract_declarator = NULL);

	ezast * direct_abstract_declarator__direct_abstract_declarator_LSB_STATIC_type_qualifier_list_assignment_expression_RSB(ezast * direct_abstract_declarator = NULL, ezast * type_qualifier_list = NULL, ezast * assignment_expression = NULL);

	ezast * direct_abstract_declarator__direct_abstract_declarator_LSB_STATIC_assignment_expression_RSB(ezast * direct_abstract_declarator = NULL, ezast * assignment_expression = NULL);

	ezast * direct_abstract_declarator__direct_abstract_declarator_LSB_type_qualifier_list_assignment_expression_RSB(ezast * direct_abstract_declarator = NULL, ezast * type_qualifier_list = NULL, ezast * assignment_expression = NULL);

	ezast * direct_abstract_declarator__direct_abstract_declarator_LSB_type_qualifier_list_STATIC_assignment_expression_RSB(ezast * direct_abstract_declarator = NULL, ezast * type_qualifier_list = NULL, ezast * assignment_expression = NULL);

	ezast * direct_abstract_declarator__direct_abstract_declarator_LSB_type_qualifier_list_RSB(ezast * direct_abstract_declarator = NULL, ezast * type_qualifier_list = NULL);

	ezast * direct_abstract_declarator__direct_abstract_declarator_LSB_assignment_expression_RSB(ezast * direct_abstract_declarator = NULL, ezast * assignment_expression = NULL);

	ezast * direct_abstract_declarator__LP_RP();

	ezast * direct_abstract_declarator__LP_parameter_type_list_RP(ezast * parameter_type_list = NULL);

	ezast * direct_abstract_declarator__direct_abstract_declarator_LP_RP(ezast * direct_abstract_declarator = NULL);

	ezast * direct_abstract_declarator__direct_abstract_declarator_LP_parameter_type_list_RP(ezast * direct_abstract_declarator = NULL, ezast * parameter_type_list = NULL);

	ezast * initializer__LCB_initializer_list_RCB(ezast * initializer_list = NULL);

	ezast * initializer__LCB_initializer_list_COMMA_RCB(ezast * initializer_list = NULL);

	ezast * initializer__assignment_expression(ezast * assignment_expression = NULL);

	ezast * initializer_list__designation_initializer(ezast * designation = NULL, ezast * initializer = NULL);

	ezast * initializer_list__initializer(ezast * initializer = NULL);

	ezast * initializer_list__initializer_list_COMMA_designation_initializer(ezast * initializer_list = NULL, ezast * designation = NULL, ezast * initializer = NULL);

	ezast * initializer_list__initializer_list_COMMA_initializer(ezast * initializer_list = NULL, ezast * initializer = NULL);

	ezast * designation__designator_list_EQ(ezast * designator_list = NULL);

	ezast * designator_list__designator(ezast * designator = NULL);

	ezast * designator_list__designator_list_designator(ezast * designator_list = NULL, ezast * designator = NULL);

	ezast * designator__LSB_constant_expression_RSB(ezast * constant_expression = NULL);

	ezast * designator__DOT_IDENTIFIER(ezast * identifier = NULL);

	ezast * static_assert_declaration__STATIC_ASSERT_LP_constant_expression_COMMA_STRING_LITERAL_RP_SCOLON(ezast * constant_expression = NULL, ezast * string_literal = NULL);

	ezast * statement__labeled_statement(ezast * labeled_statement = NULL);

	ezast * statement__compound_statement(ezast * compound_statement = NULL);

	ezast * statement__expression_statement(ezast * expression_statement = NULL);

	ezast * statement__selection_statement(ezast * selection_statement = NULL);

	ezast * statement__iteration_statement(ezast * iteration_statement = NULL);

	ezast * statement__jump_statement(ezast * jump_statement = NULL);

	ezast * labeled_statement__IDENTIFIER_COLON_statement(ezast * identifier = NULL, ezast * statement = NULL);

	ezast * labeled_statement__CASE_constant_expression_COLON_statement(ezast * constant_expression = NULL, ezast * statement = NULL);

	ezast * labeled_statement__DEFAULT_COLON_statement(ezast * statement = NULL);

	ezast * compound_statement__LCB_RCB();

	ezast * compound_statement__LCB__block_item_list_RCB(ezast *  = NULL, ezast * block_item_list = NULL);

	ezast * block_item_list__block_item(ezast * block_item = NULL);

	ezast * block_item_list__block_item_list_block_item(ezast * block_item_list = NULL, ezast * block_item = NULL);

	ezast * block_item__declaration(ezast * declaration = NULL);

	ezast * block_item__statement(ezast * statement = NULL);

	ezast * expression_statement__SCOLON();

	ezast * expression_statement__expression_SCOLON(ezast * expression = NULL);

	ezast * selection_statement__IF_LP_expression_RP_statement_ELSE_statement(ezast * expression = NULL, ezast * statement = NULL, ezast * statement1 = NULL);

	ezast * selection_statement__IF_LP_expression_RP_statement(ezast * expression = NULL, ezast * statement = NULL);

	ezast * selection_statement__SWITCH_LP_expression_RP_statement(ezast * expression = NULL, ezast * statement = NULL);

	ezast * iteration_statement__WHILE_LP_expression_RP_statement(ezast * expression = NULL, ezast * statement = NULL);

	ezast * iteration_statement__DO_statement_WHILE_LP_expression_RP_SCOLON(ezast * statement = NULL, ezast * expression = NULL);

	ezast * iteration_statement__FOR_LP_expression_statement_expression_statement_RP_statement(ezast * expression_statement = NULL, ezast * expression_statement1 = NULL, ezast * statement = NULL);

	ezast * iteration_statement__FOR_LP_expression_statement_expression_statement_expression_RP_statement(ezast * expression_statement = NULL, ezast * expression_statement1 = NULL, ezast * expression = NULL, ezast * statement = NULL);

	ezast * iteration_statement__FOR_LP_declaration_expression_statement_RP_statement(ezast * declaration = NULL, ezast * expression_statement = NULL, ezast * statement = NULL);

	ezast * iteration_statement__FOR_LP_declaration_expression_statement_expression_RP_statement(ezast * declaration = NULL, ezast * expression_statement = NULL, ezast * expression = NULL, ezast * statement = NULL);

	ezast * jump_statement__GOTO_IDENTIFIER_SCOLON(ezast * identifier = NULL);

	ezast * jump_statement__CONTINUE_SCOLON();

	ezast * jump_statement__BREAK_SCOLON();

	ezast * jump_statement__RETURN_SCOLON();

	ezast * jump_statement__RETURN_expression_SCOLON(ezast * expression = NULL);

	ezast * translation_unit__external_declaration(ezast * external_declaration = NULL);

	ezast * translation_unit__translation_unit_external_declaration(ezast * translation_unit = NULL, ezast * external_declaration = NULL);

	ezast * external_declaration__function_definition(ezast * function_definition = NULL);

	ezast * external_declaration__declaration(ezast * declaration = NULL);

	ezast * function_definition__declaration_specifiers_declarator_declaration_list_compound_statement(ezast * declaration_specifiers = NULL, ezast * declarator = NULL, ezast * declaration_list = NULL, ezast * compound_statement = NULL);

	ezast * function_definition__declaration_specifiers_declarator_compound_statement(ezast * declaration_specifiers = NULL, ezast * declarator = NULL, ezast * compound_statement = NULL);

	ezast * declaration_list__declaration(ezast * declaration = NULL);

	ezast * declaration_list__declaration_list_declaration(ezast * declaration_list = NULL, ezast * declaration = NULL);
};

#endif