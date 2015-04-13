#include <ezeval.h>

void * ezeval::eval(ezast * ast, void * args)
{
	switch(ast->type)
	{
		case ABSTRACT_DECLARATOR:
			return this->eval_abstract_declarator((ezast_abstract_declarator *) ast, args);

		case ADDITIVE_EXPRESSION:
			return this->eval_additive_expression((ezast_additive_expression *) ast, args);

		case ALIGNMENT_SPECIFIER:
			return this->eval_alignment_specifier((ezast_alignment_specifier *) ast, args);

		case AND_EXPRESSION:
			return this->eval_and_expression((ezast_and_expression *) ast, args);

		case ARGUMENT_EXPRESSION_LIST:
			return this->eval_argument_expression_list((ezast_argument_expression_list *) ast, args);

		case ASSIGNMENT_EXPRESSION:
			return this->eval_assignment_expression((ezast_assignment_expression *) ast, args);

		case ASSIGNMENT_OPERATOR:
			return this->eval_assignment_operator((ezast_assignment_operator *) ast, args);

		case ATOMIC_TYPE_SPECIFIER:
			return this->eval_atomic_type_specifier((ezast_atomic_type_specifier *) ast, args);

		case BLOCK_ITEM:
			return this->eval_block_item((ezast_block_item *) ast, args);

		case BLOCK_ITEM_LIST:
			return this->eval_block_item_list((ezast_block_item_list *) ast, args);

		case CAST_EXPRESSION:
			return this->eval_cast_expression((ezast_cast_expression *) ast, args);

		case COMPOUND_STATEMENT:
			return this->eval_compound_statement((ezast_compound_statement *) ast, args);

		case CONDITIONAL_EXPRESSION:
			return this->eval_conditional_expression((ezast_conditional_expression *) ast, args);

		case CONSTANT:
			return this->eval_constant((ezast_constant *) ast, args);

		case CONSTANT_EXPRESSION:
			return this->eval_constant_expression((ezast_constant_expression *) ast, args);

		case DECLARATION:
			return this->eval_declaration((ezast_declaration *) ast, args);

		case DECLARATION_LIST:
			return this->eval_declaration_list((ezast_declaration_list *) ast, args);

		case DECLARATION_SPECIFIERS:
			return this->eval_declaration_specifiers((ezast_declaration_specifiers *) ast, args);

		case DECLARATOR:
			return this->eval_declarator((ezast_declarator *) ast, args);

		case DESIGNATION:
			return this->eval_designation((ezast_designation *) ast, args);

		case DESIGNATOR:
			return this->eval_designator((ezast_designator *) ast, args);

		case DESIGNATOR_LIST:
			return this->eval_designator_list((ezast_designator_list *) ast, args);

		case DIRECT_ABSTRACT_DECLARATOR:
			return this->eval_direct_abstract_declarator((ezast_direct_abstract_declarator *) ast, args);

		case DIRECT_DECLARATOR:
			return this->eval_direct_declarator((ezast_direct_declarator *) ast, args);

		case ENUMERATOR:
			return this->eval_enumerator((ezast_enumerator *) ast, args);

		case ENUMERATOR_LIST:
			return this->eval_enumerator_list((ezast_enumerator_list *) ast, args);

		case ENUM_SPECIFIER:
			return this->eval_enum_specifier((ezast_enum_specifier *) ast, args);

		case EQUALITY_EXPRESSION:
			return this->eval_equality_expression((ezast_equality_expression *) ast, args);

		case EXCLUSIVE_OR_EXPRESSION:
			return this->eval_exclusive_or_expression((ezast_exclusive_or_expression *) ast, args);

		case EXPRESSION:
			return this->eval_expression((ezast_expression *) ast, args);

		case EXPRESSION_STATEMENT:
			return this->eval_expression_statement((ezast_expression_statement *) ast, args);

		case EXTERNAL_DECLARATION:
			return this->eval_external_declaration((ezast_external_declaration *) ast, args);

		case FUNCTION_DEFINITION:
			return this->eval_function_definition((ezast_function_definition *) ast, args);

		case FUNCTION_SPECIFIER:
			return this->eval_function_specifier((ezast_function_specifier *) ast, args);

		case GENERIC_ASSOCIATION:
			return this->eval_generic_association((ezast_generic_association *) ast, args);

		case GENERIC_ASSOC_LIST:
			return this->eval_generic_assoc_list((ezast_generic_assoc_list *) ast, args);

		case GENERIC_SELECTION:
			return this->eval_generic_selection((ezast_generic_selection *) ast, args);

		case IDENTIFIER_LIST:
			return this->eval_identifier_list((ezast_identifier_list *) ast, args);

		case INCLUSIVE_OR_EXPRESSION:
			return this->eval_inclusive_or_expression((ezast_inclusive_or_expression *) ast, args);

		case INITIALIZER:
			return this->eval_initializer((ezast_initializer *) ast, args);

		case INITIALIZER_LIST:
			return this->eval_initializer_list((ezast_initializer_list *) ast, args);

		case INIT_DECLARATOR:
			return this->eval_init_declarator((ezast_init_declarator *) ast, args);

		case INIT_DECLARATOR_LIST:
			return this->eval_init_declarator_list((ezast_init_declarator_list *) ast, args);

		case ITERATION_STATEMENT:
			return this->eval_iteration_statement((ezast_iteration_statement *) ast, args);

		case JUMP_STATEMENT:
			return this->eval_jump_statement((ezast_jump_statement *) ast, args);

		case LABELED_STATEMENT:
			return this->eval_labeled_statement((ezast_labeled_statement *) ast, args);

		case LOGICAL_AND_EXPRESSION:
			return this->eval_logical_and_expression((ezast_logical_and_expression *) ast, args);

		case LOGICAL_OR_EXPRESSION:
			return this->eval_logical_or_expression((ezast_logical_or_expression *) ast, args);

		case MULTIPLICATIVE_EXPRESSION:
			return this->eval_multiplicative_expression((ezast_multiplicative_expression *) ast, args);

		case PARAMETER_DECLARATION:
			return this->eval_parameter_declaration((ezast_parameter_declaration *) ast, args);

		case PARAMETER_LIST:
			return this->eval_parameter_list((ezast_parameter_list *) ast, args);

		case PARAMETER_TYPE_LIST:
			return this->eval_parameter_type_list((ezast_parameter_type_list *) ast, args);

		case POINTER:
			return this->eval_pointer((ezast_pointer *) ast, args);

		case POSTFIX_EXPRESSION:
			return this->eval_postfix_expression((ezast_postfix_expression *) ast, args);

		case PRIMARY_EXPRESSION:
			return this->eval_primary_expression((ezast_primary_expression *) ast, args);

		case RELATIONAL_EXPRESSION:
			return this->eval_relational_expression((ezast_relational_expression *) ast, args);

		case SELECTION_STATEMENT:
			return this->eval_selection_statement((ezast_selection_statement *) ast, args);

		case SHIFT_EXPRESSION:
			return this->eval_shift_expression((ezast_shift_expression *) ast, args);

		case SPECIFIER_QUALIFIER_LIST:
			return this->eval_specifier_qualifier_list((ezast_specifier_qualifier_list *) ast, args);

		case STATEMENT:
			return this->eval_statement((ezast_statement *) ast, args);

		case STATIC_ASSERT_DECLARATION:
			return this->eval_static_assert_declaration((ezast_static_assert_declaration *) ast, args);

		case STORAGE_CLASS_SPECIFIER:
			return this->eval_storage_class_specifier((ezast_storage_class_specifier *) ast, args);

		case STRING:
			return this->eval_string((ezast_string *) ast, args);

		case STRUCT_DECLARATION:
			return this->eval_struct_declaration((ezast_struct_declaration *) ast, args);

		case STRUCT_DECLARATION_LIST:
			return this->eval_struct_declaration_list((ezast_struct_declaration_list *) ast, args);

		case STRUCT_DECLARATOR:
			return this->eval_struct_declarator((ezast_struct_declarator *) ast, args);

		case STRUCT_DECLARATOR_LIST:
			return this->eval_struct_declarator_list((ezast_struct_declarator_list *) ast, args);

		case STRUCT_OR_UNION:
			return this->eval_struct_or_union((ezast_struct_or_union *) ast, args);

		case STRUCT_OR_UNION_SPECIFIER:
			return this->eval_struct_or_union_specifier((ezast_struct_or_union_specifier *) ast, args);

		case TRANSLATION_UNIT:
			return this->eval_translation_unit((ezast_translation_unit *) ast, args);

		case TYPE_NAME:
			return this->eval_type_name((ezast_type_name *) ast, args);

		case TYPE_QUALIFIER:
			return this->eval_type_qualifier((ezast_type_qualifier *) ast, args);

		case TYPE_QUALIFIER_LIST:
			return this->eval_type_qualifier_list((ezast_type_qualifier_list *) ast, args);

		case TYPE_SPECIFIER:
			return this->eval_type_specifier((ezast_type_specifier *) ast, args);

		case UNARY_EXPRESSION:
			return this->eval_unary_expression((ezast_unary_expression *) ast, args);

		case UNARY_OPERATOR:
			return this->eval_unary_operator((ezast_unary_operator *) ast, args);

		case _IDENTIFIER:
			return this->eval_IDENTIFIER((ezast_IDENTIFIER *) ast, args);

		default:
			ezlog::warn("Can't figure out ast of type " + string(ezast::ezasttype_str(ast)));
			return (void *)0;
	}
}