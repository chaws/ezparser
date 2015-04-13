#ifndef EZEVAL_H
#define EZEVAL_H

#include <ezast.h>
#include <ezdb.h>
#include <string>

class ezeval
{
public:

	/**
	 *	The source connection to the database
	 */
	ezdb * db;

	/**
	 *	Evaluates an AST, saving the data into a database
	 */
	void * eval(ezast * ast, void * args = NULL);

	void * eval_IDENTIFIER(ezast_IDENTIFIER * ast, void * args = NULL);

	void * eval_primary_expression(ezast_primary_expression * ast, void * args = NULL);

	void * eval_constant(ezast_constant * ast, void * args = NULL);

	void * eval_enumeration_constant(ezast_enumeration_constant * ast, void * args = NULL);

	void * eval_string(ezast_string * ast, void * args = NULL);

	void * eval_generic_selection(ezast_generic_selection * ast, void * args = NULL);

	void * eval_generic_assoc_list(ezast_generic_assoc_list * ast, void * args = NULL);

	void * eval_generic_association(ezast_generic_association * ast, void * args = NULL);

	void * eval_postfix_expression(ezast_postfix_expression * ast, void * args = NULL);

	void * eval_argument_expression_list(ezast_argument_expression_list * ast, void * args = NULL);

	void * eval_unary_expression(ezast_unary_expression * ast, void * args = NULL);

	void * eval_unary_operator(ezast_unary_operator * ast, void * args = NULL);

	void * eval_cast_expression(ezast_cast_expression * ast, void * args = NULL);

	void * eval_multiplicative_expression(ezast_multiplicative_expression * ast, void * args = NULL);

	void * eval_additive_expression(ezast_additive_expression * ast, void * args = NULL);

	void * eval_shift_expression(ezast_shift_expression * ast, void * args = NULL);

	void * eval_relational_expression(ezast_relational_expression * ast, void * args = NULL);

	void * eval_equality_expression(ezast_equality_expression * ast, void * args = NULL);

	void * eval_and_expression(ezast_and_expression * ast, void * args = NULL);

	void * eval_exclusive_or_expression(ezast_exclusive_or_expression * ast, void * args = NULL);

	void * eval_inclusive_or_expression(ezast_inclusive_or_expression * ast, void * args = NULL);

	void * eval_logical_and_expression(ezast_logical_and_expression * ast, void * args = NULL);

	void * eval_logical_or_expression(ezast_logical_or_expression * ast, void * args = NULL);

	void * eval_conditional_expression(ezast_conditional_expression * ast, void * args = NULL);

	void * eval_assignment_expression(ezast_assignment_expression * ast, void * args = NULL);

	void * eval_assignment_operator(ezast_assignment_operator * ast, void * args = NULL);

	void * eval_expression(ezast_expression * ast, void * args = NULL);

	void * eval_constant_expression(ezast_constant_expression * ast, void * args = NULL);

	void * eval_declaration(ezast_declaration * ast, void * args = NULL);

	void * eval_declaration_specifiers(ezast_declaration_specifiers * ast, void * args = NULL);

	void * eval_init_declarator_list(ezast_init_declarator_list * ast, void * args = NULL);

	void * eval_init_declarator(ezast_init_declarator * ast, void * args = NULL);

	void * eval_storage_class_specifier(ezast_storage_class_specifier * ast, void * args = NULL);

	void * eval_type_specifier(ezast_type_specifier * ast, void * args = NULL);

	void * eval_struct_or_union_specifier(ezast_struct_or_union_specifier * ast, void * args = NULL);

	void * eval_struct_or_union(ezast_struct_or_union * ast, void * args = NULL);

	void * eval_struct_declaration_list(ezast_struct_declaration_list * ast, void * args = NULL);

	void * eval_struct_declaration(ezast_struct_declaration * ast, void * args = NULL);

	void * eval_specifier_qualifier_list(ezast_specifier_qualifier_list * ast, void * args = NULL);

	void * eval_struct_declarator_list(ezast_struct_declarator_list * ast, void * args = NULL);

	void * eval_struct_declarator(ezast_struct_declarator * ast, void * args = NULL);

	void * eval_enum_specifier(ezast_enum_specifier * ast, void * args = NULL);

	void * eval_enumerator_list(ezast_enumerator_list * ast, void * args = NULL);

	void * eval_enumerator(ezast_enumerator * ast, void * args = NULL);

	void * eval_atomic_type_specifier(ezast_atomic_type_specifier * ast, void * args = NULL);

	void * eval_type_qualifier(ezast_type_qualifier * ast, void * args = NULL);

	void * eval_function_specifier(ezast_function_specifier * ast, void * args = NULL);

	void * eval_alignment_specifier(ezast_alignment_specifier * ast, void * args = NULL);

	void * eval_declarator(ezast_declarator * ast, void * args = NULL);

	void * eval_direct_declarator(ezast_direct_declarator * ast, void * args = NULL);

	void * eval_pointer(ezast_pointer * ast, void * args = NULL);

	void * eval_type_qualifier_list(ezast_type_qualifier_list * ast, void * args = NULL);

	void * eval_parameter_type_list(ezast_parameter_type_list * ast, void * args = NULL);

	void * eval_parameter_list(ezast_parameter_list * ast, void * args = NULL);

	void * eval_parameter_declaration(ezast_parameter_declaration * ast, void * args = NULL);

	void * eval_identifier_list(ezast_identifier_list * ast, void * args = NULL);

	void * eval_type_name(ezast_type_name * ast, void * args = NULL);

	void * eval_abstract_declarator(ezast_abstract_declarator * ast, void * args = NULL);

	void * eval_direct_abstract_declarator(ezast_direct_abstract_declarator * ast, void * args = NULL);

	void * eval_initializer(ezast_initializer * ast, void * args = NULL);

	void * eval_initializer_list(ezast_initializer_list * ast, void * args = NULL);

	void * eval_designation(ezast_designation * ast, void * args = NULL);

	void * eval_designator_list(ezast_designator_list * ast, void * args = NULL);

	void * eval_designator(ezast_designator * ast, void * args = NULL);

	void * eval_static_assert_declaration(ezast_static_assert_declaration * ast, void * args = NULL);

	void * eval_statement(ezast_statement * ast, void * args = NULL);

	void * eval_labeled_statement(ezast_labeled_statement * ast, void * args = NULL);

	void * eval_compound_statement(ezast_compound_statement * ast, void * args = NULL);

	void * eval_block_item_list(ezast_block_item_list * ast, void * args = NULL);

	void * eval_block_item(ezast_block_item * ast, void * args = NULL);

	void * eval_expression_statement(ezast_expression_statement * ast, void * args = NULL);

	void * eval_selection_statement(ezast_selection_statement * ast, void * args = NULL);

	void * eval_iteration_statement(ezast_iteration_statement * ast, void * args = NULL);

	void * eval_jump_statement(ezast_jump_statement * ast, void * args = NULL);

	void * eval_translation_unit(ezast_translation_unit * ast, void * args = NULL);

	void * eval_external_declaration(ezast_external_declaration * ast, void * args = NULL);

	void * eval_function_definition(ezast_function_definition * ast, void * args = NULL);

	void * eval_declaration_list(ezast_declaration_list * ast, void * args = NULL);

};

#endif