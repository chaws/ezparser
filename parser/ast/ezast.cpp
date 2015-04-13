#include <ezast.h>
#include <string.h>

ezast::ezast()
{
	this->location = new __location;
	this->location->line = __current_line;
	this->location->column = __current_column;
	this->location->scope = __current_scope;
}

char * ezast::ezasttype_str(ezast * ast)
{
	switch(ast->type)
	{
		case ABSTRACT_DECLARATOR:
			return strdup("ABSTRACT_DECLARATOR");

		case ADDITIVE_EXPRESSION:
			return strdup("ADDITIVE_EXPRESSION");

		case ALIGNMENT_SPECIFIER:
			return strdup("ALIGNMENT_SPECIFIER");

		case AND_EXPRESSION:
			return strdup("AND_EXPRESSION");

		case ARGUMENT_EXPRESSION_LIST:
			return strdup("ARGUMENT_EXPRESSION_LIST");

		case ASSIGNMENT_EXPRESSION:
			return strdup("ASSIGNMENT_EXPRESSION");

		case ASSIGNMENT_OPERATOR:
			return strdup("ASSIGNMENT_OPERATOR");

		case ATOMIC_TYPE_SPECIFIER:
			return strdup("ATOMIC_TYPE_SPECIFIER");

		case BLOCK_ITEM:
			return strdup("BLOCK_ITEM");

		case BLOCK_ITEM_LIST:
			return strdup("BLOCK_ITEM_LIST");

		case CAST_EXPRESSION:
			return strdup("CAST_EXPRESSION");

		case COMPOUND_STATEMENT:
			return strdup("COMPOUND_STATEMENT");

		case CONDITIONAL_EXPRESSION:
			return strdup("CONDITIONAL_EXPRESSION");

		case CONSTANT:
			return strdup("CONSTANT");

		case CONSTANT_EXPRESSION:
			return strdup("CONSTANT_EXPRESSION");

		case DECLARATION:
			return strdup("DECLARATION");

		case DECLARATION_LIST:
			return strdup("DECLARATION_LIST");

		case DECLARATION_SPECIFIERS:
			return strdup("DECLARATION_SPECIFIERS");

		case DECLARATOR:
			return strdup("DECLARATOR");

		case DESIGNATION:
			return strdup("DESIGNATION");

		case DESIGNATOR:
			return strdup("DESIGNATOR");

		case DESIGNATOR_LIST:
			return strdup("DESIGNATOR_LIST");

		case DIRECT_ABSTRACT_DECLARATOR:
			return strdup("DIRECT_ABSTRACT_DECLARATOR");

		case DIRECT_DECLARATOR:
			return strdup("DIRECT_DECLARATOR");

		case ENUMERATOR:
			return strdup("ENUMERATOR");

		case ENUMERATOR_LIST:
			return strdup("ENUMERATOR_LIST");

		case ENUM_SPECIFIER:
			return strdup("ENUM_SPECIFIER");

		case EQUALITY_EXPRESSION:
			return strdup("EQUALITY_EXPRESSION");

		case EXCLUSIVE_OR_EXPRESSION:
			return strdup("EXCLUSIVE_OR_EXPRESSION");

		case EXPRESSION:
			return strdup("EXPRESSION");

		case EXPRESSION_STATEMENT:
			return strdup("EXPRESSION_STATEMENT");

		case EXTERNAL_DECLARATION:
			return strdup("EXTERNAL_DECLARATION");

		case FUNCTION_DEFINITION:
			return strdup("FUNCTION_DEFINITION");

		case FUNCTION_SPECIFIER:
			return strdup("FUNCTION_SPECIFIER");

		case GENERIC_ASSOCIATION:
			return strdup("GENERIC_ASSOCIATION");

		case GENERIC_ASSOC_LIST:
			return strdup("GENERIC_ASSOC_LIST");

		case GENERIC_SELECTION:
			return strdup("GENERIC_SELECTION");

		case IDENTIFIER_LIST:
			return strdup("IDENTIFIER_LIST");

		case INCLUSIVE_OR_EXPRESSION:
			return strdup("INCLUSIVE_OR_EXPRESSION");

		case INITIALIZER:
			return strdup("INITIALIZER");

		case INITIALIZER_LIST:
			return strdup("INITIALIZER_LIST");

		case INIT_DECLARATOR:
			return strdup("INIT_DECLARATOR");

		case INIT_DECLARATOR_LIST:
			return strdup("INIT_DECLARATOR_LIST");

		case ITERATION_STATEMENT:
			return strdup("ITERATION_STATEMENT");

		case JUMP_STATEMENT:
			return strdup("JUMP_STATEMENT");

		case LABELED_STATEMENT:
			return strdup("LABELED_STATEMENT");

		case LOGICAL_AND_EXPRESSION:
			return strdup("LOGICAL_AND_EXPRESSION");

		case LOGICAL_OR_EXPRESSION:
			return strdup("LOGICAL_OR_EXPRESSION");

		case MULTIPLICATIVE_EXPRESSION:
			return strdup("MULTIPLICATIVE_EXPRESSION");

		case PARAMETER_DECLARATION:
			return strdup("PARAMETER_DECLARATION");

		case PARAMETER_LIST:
			return strdup("PARAMETER_LIST");

		case PARAMETER_TYPE_LIST:
			return strdup("PARAMETER_TYPE_LIST");

		case POINTER:
			return strdup("POINTER");

		case POSTFIX_EXPRESSION:
			return strdup("POSTFIX_EXPRESSION");

		case PRIMARY_EXPRESSION:
			return strdup("PRIMARY_EXPRESSION");

		case RELATIONAL_EXPRESSION:
			return strdup("RELATIONAL_EXPRESSION");

		case SELECTION_STATEMENT:
			return strdup("SELECTION_STATEMENT");

		case SHIFT_EXPRESSION:
			return strdup("SHIFT_EXPRESSION");

		case SPECIFIER_QUALIFIER_LIST:
			return strdup("SPECIFIER_QUALIFIER_LIST");

		case STATEMENT:
			return strdup("STATEMENT");

		case STATIC_ASSERT_DECLARATION:
			return strdup("STATIC_ASSERT_DECLARATION");

		case STORAGE_CLASS_SPECIFIER:
			return strdup("STORAGE_CLASS_SPECIFIER");

		case STRING:
			return strdup("STRING");

		case STRUCT_DECLARATION:
			return strdup("STRUCT_DECLARATION");

		case STRUCT_DECLARATION_LIST:
			return strdup("STRUCT_DECLARATION_LIST");

		case STRUCT_DECLARATOR:
			return strdup("STRUCT_DECLARATOR");

		case STRUCT_DECLARATOR_LIST:
			return strdup("STRUCT_DECLARATOR_LIST");

		case STRUCT_OR_UNION:
			return strdup("STRUCT_OR_UNION");

		case STRUCT_OR_UNION_SPECIFIER:
			return strdup("STRUCT_OR_UNION_SPECIFIER");

		case TRANSLATION_UNIT:
			return strdup("TRANSLATION_UNIT");

		case TYPE_NAME:
			return strdup("TYPE_NAME");

		case TYPE_QUALIFIER:
			return strdup("TYPE_QUALIFIER");

		case TYPE_QUALIFIER_LIST:
			return strdup("TYPE_QUALIFIER_LIST");

		case TYPE_SPECIFIER:
			return strdup("TYPE_SPECIFIER");

		case UNARY_EXPRESSION:
			return strdup("UNARY_EXPRESSION");

		case UNARY_OPERATOR:
			return strdup("UNARY_OPERATOR");

		case _ENUMERATION_CONSTANT:
			return strdup("_ENUMERATION_CONSTANT");

		case _IDENTIFIER:
			return strdup("_IDENTIFIER");

		default:
			return strdup("UNKONW AST TYPE");
	}
}
