#ifndef EZAST_H
#define EZAST_H

#include <ezutil.h>

/**
 *	Types of AST
 */
enum ezasttype
{
	// Symbols
	ABSTRACT_DECLARATOR,
	ADDITIVE_EXPRESSION,
	ALIGNMENT_SPECIFIER,
	AND_EXPRESSION,
	ARGUMENT_EXPRESSION_LIST,
	ASSIGNMENT_EXPRESSION,
	ASSIGNMENT_OPERATOR,
	ATOMIC_TYPE_SPECIFIER,
	BLOCK_ITEM,
	BLOCK_ITEM_LIST,
	CAST_EXPRESSION,
	COMPOUND_STATEMENT,
	CONDITIONAL_EXPRESSION,
	CONSTANT,
	CONSTANT_EXPRESSION,
	DECLARATION,
	DECLARATION_LIST,
	DECLARATION_SPECIFIERS,
	DECLARATOR,
	DESIGNATION,
	DESIGNATOR,
	DESIGNATOR_LIST,
	DIRECT_ABSTRACT_DECLARATOR,
	DIRECT_DECLARATOR,
	ENUMERATOR,
	ENUMERATOR_LIST,
	ENUM_SPECIFIER,
	EQUALITY_EXPRESSION,
	EXCLUSIVE_OR_EXPRESSION,
	EXPRESSION,
	EXPRESSION_STATEMENT,
	EXTERNAL_DECLARATION,
	FUNCTION_DEFINITION,
	FUNCTION_SPECIFIER,
	GENERIC_ASSOCIATION,
	GENERIC_ASSOC_LIST,
	GENERIC_SELECTION,
	IDENTIFIER_LIST,
	INCLUSIVE_OR_EXPRESSION,
	INITIALIZER,
	INITIALIZER_LIST,
	INIT_DECLARATOR,
	INIT_DECLARATOR_LIST,
	ITERATION_STATEMENT,
	JUMP_STATEMENT,
	LABELED_STATEMENT,
	LOGICAL_AND_EXPRESSION,
	LOGICAL_OR_EXPRESSION,
	MULTIPLICATIVE_EXPRESSION,
	PARAMETER_DECLARATION,
	PARAMETER_LIST,
	PARAMETER_TYPE_LIST,
	POINTER,
	POSTFIX_EXPRESSION,
	PRIMARY_EXPRESSION,
	RELATIONAL_EXPRESSION,
	SELECTION_STATEMENT,
	SHIFT_EXPRESSION,
	SPECIFIER_QUALIFIER_LIST,
	STATEMENT,
	STATIC_ASSERT_DECLARATION,
	STORAGE_CLASS_SPECIFIER,
	STRING,
	STRUCT_DECLARATION,
	STRUCT_DECLARATION_LIST,
	STRUCT_DECLARATOR,
	STRUCT_DECLARATOR_LIST,
	STRUCT_OR_UNION,
	STRUCT_OR_UNION_SPECIFIER,
	TRANSLATION_UNIT,
	TYPE_NAME,
	TYPE_QUALIFIER,
	TYPE_QUALIFIER_LIST,
	TYPE_SPECIFIER,
	UNARY_EXPRESSION,
	UNARY_OPERATOR,

	// Terminals
	_ENUMERATION_CONSTANT,
	_IDENTIFIER
};

/**
 *	Represents a location for specific ASTs, not every ezast has it
 */
struct __location
{
	int line;
	int column;
	int scope;
};

/**
 *	Make reference to external, global location vars
 */
extern int __current_line;
extern int __current_column;
extern int __current_scope;

/**
 *	Defines a generic Type of ast
 */
class ezast
{
public:

	/**
	 *	Type of this AST
	 */
	ezasttype type;

	/**
	 *	Keeps track of this AST in the code
	 */
	__location * location;

	/**
	 *	Generic constructor, make it with no parameters, so it's auto-invoked by subclasses
	 */
	ezast();

	/**
	 *	Get a string version of the ezasttype type
	 */
	static char * ezasttype_str(ezast * ast);
};

#include <ezast_abstract_declarator.h>
#include <ezast_additive_expression.h>
#include <ezast_alignment_specifier.h>
#include <ezast_and_expression.h>
#include <ezast_argument_expression_list.h>
#include <ezast_assignment_expression.h>
#include <ezast_assignment_operator.h>
#include <ezast_atomic_type_specifier.h>
#include <ezast_block_item.h>
#include <ezast_block_item_list.h>
#include <ezast_cast_expression.h>
#include <ezast_compound_statement.h>
#include <ezast_conditional_expression.h>
#include <ezast_constant_expression.h>
#include <ezast_constant.h>
#include <ezast_declaration.h>
#include <ezast_declaration_list.h>
#include <ezast_declaration_specifiers.h>
#include <ezast_declarator.h>
#include <ezast_designation.h>
#include <ezast_designator.h>
#include <ezast_designator_list.h>
#include <ezast_direct_abstract_declarator.h>
#include <ezast_direct_declarator.h>
#include <ezast_enumeration_constant.h>
#include <ezast_enumerator.h>
#include <ezast_enumerator_list.h>
#include <ezast_enum_specifier.h>
#include <ezast_equality_expression.h>
#include <ezast_exclusive_or_expression.h>
#include <ezast_expression.h>
#include <ezast_expression_statement.h>
#include <ezast_external_declaration.h>
#include <ezast_function_definition.h>
#include <ezast_function_specifier.h>
#include <ezast_generic_association.h>
#include <ezast_generic_assoc_list.h>
#include <ezast_generic_selection.h>
#include <ezast_identifier_list.h>
#include <ezast_inclusive_or_expression.h>
#include <ezast_init_declarator.h>
#include <ezast_init_declarator_list.h>
#include <ezast_initializer.h>
#include <ezast_initializer_list.h>
#include <ezast_iteration_statement.h>
#include <ezast_jump_statement.h>
#include <ezast_labeled_statement.h>
#include <ezast_logical_and_expression.h>
#include <ezast_logical_or_expression.h>
#include <ezast_multiplicative_expression.h>
#include <ezast_parameter_declaration.h>
#include <ezast_parameter_list.h>
#include <ezast_parameter_type_list.h>
#include <ezast_pointer.h>
#include <ezast_postfix_expression.h>
#include <ezast_primary_expression.h>
#include <ezast_relational_expression.h>
#include <ezast_selection_statement.h>
#include <ezast_shift_expression.h>
#include <ezast_specifier_qualifier_list.h>
#include <ezast_statement.h>
#include <ezast_static_assert_declaration.h>
#include <ezast_storage_class_specifier.h>
#include <ezast_string.h>
#include <ezast_struct_declaration.h>
#include <ezast_struct_declaration_list.h>
#include <ezast_struct_declarator.h>
#include <ezast_struct_declarator_list.h>
#include <ezast_struct_or_union.h>
#include <ezast_struct_or_union_specifier.h>
#include <ezast_translation_unit.h>
#include <ezast_type_name.h>
#include <ezast_type_qualifier.h>
#include <ezast_type_qualifier_list.h>
#include <ezast_type_specifier.h>
#include <ezast_unary_expression.h>
#include <ezast_unary_operator.h>
#include <ezast_IDENTIFIER.h>

#endif
