<?php 

// ****	Configuration for PHP scripting ****

/**
 *	Ezparser project directory
 */
define('PROJ_DIR', '../../'); // based we're on parser/scripts

/**
 *	EZCparser directory
 */
define('EZCPARSER_DIR', PROJ_DIR . 'parser/');

/**
 *	Template dir: Where are the CPP template classes
 */
define('TEMPLATE_DIR', 'templates/');

/**
 *	Rule dir: where are the rules implementation methods will be stored
 */
define('RULE_DIR', EZCPARSER_DIR . 'rules/');

/**
 *	Ast dir: where are the asts implementation classes will be stored
 */
define('AST_DIR', EZCPARSER_DIR . 'ast/');

/**
 *	Eval dir: where are the evals implementation methods will be stored
 */
define('EVAL_DIR', EZCPARSER_DIR . 'eval/');

/**
 *	Which CPP class to handle grammar rules (Just the name)
 */
define('RULE_CLASS', 'ezrule');

/**
 *	Which CPP class to handle grammar rules (Just the name) (instance)
 */
define('RULE_CLASS_INSTANCE', 'rule');

/**
 *	AST in the union to associate grammar tokens with CPP class
 */
define('AST_UNION_INSTANCE', 'ast');

/**
 *	Grammar filename: Which gramar to extract the methods from
 */
define('CGRAMMAR', EZCPARSER_DIR . 'c_grammar/c_grammar_2011.y');

/**
 *	Grammar filename: Which gramar to extract the methods from
 */
define('CGRAMMAR_TEMPLATE', TEMPLATE_DIR . 'c_grammar_2011.y.tpl');

/**
 *	Template file to stand for the implementation of a grammar rule
 *	These files implement the behavior of each one of the grammar rules
 */
define('RULE_TEMPLATE_CPP', TEMPLATE_DIR . 'generated-rule-method.cpp.tpl');
define('RULE_CLASS_TEMPLATE_H', TEMPLATE_DIR . 'generated-rule-class.h.tpl');

/**
 *	Template file to stand for the implementation of an ast
 *	These files implement the behavior of each one of the ast
 */
define('AST_TEMPLATE_CPP', TEMPLATE_DIR . 'generated-ezast.cpp.tpl');
define('AST_TEMPLATE_H', TEMPLATE_DIR . 'generated-ezast.h.tpl');

/**
 *	Template file to stand for the implementation of an eval
 *	These files implement the behavior of each one of the evaluation for the asts
 */
define('EVAL_TEMPLATE_CPP', TEMPLATE_DIR . 'generated-ezeval.cpp.tpl');
define('EVAL_TEMPLATE_H', TEMPLATE_DIR . 'generated-ezeval.h.tpl');

/**
 *	Regex to extract first level of rules: (rule: sub1 | sub 2 | ... ;)
 */
define('RGX_RULE', '%([a-zA-z_]+)\s*(\:.*?);\s%ms');

/**
 *	Regex to extract second level of rules: (sub1) | (sub 2) | (...) ;
 */
define('RGX_SUBRULE', '%^\s*(?:\||:)(.*?){}$%m');

/**
 *	There are some symbols that can't go in filenames, so they need to be
 *	replaced
 */
$substitution_table = array(
	"'('" => 'LP',   "')'" => 'RP',
	"'['" => 'LSB',  "']'" => 'RSB',
	"'{'" => 'LCB',  "'}'" => 'RCB',
	"'.'" => 'DOT',	 "','" => 'COMMA',	
	"':'" => 'COLON',"'^'" => 'XOR',
	"'&'" => 'AMP',  "'*'" => 'MULT', 
	"'+'" => 'PLUS', "'-'" => 'MINUS', 
	"'~'" => 'TILDE',"'!'" => 'EXM', 
	"'/'" => 'DIV',  "'%'" => 'MOD', 
	"'<'" => 'LT',   "'>'" => 'GT',
	"'|'" => 'OR',   "'?'" => 'QUM',
	"'='" => 'EQ',   "';'" => 'SCOLON'
);

/**
 * The generation of args will depend on how many lower case words there are in
 * that rule, some upper case words has to be treated as lower, that's the reason
 * of this array below
 */
$special_rules = array('IDENTIFIER', 'I_CONSTANT', 'F_CONSTANT', 'ENUMERATION_CONSTANT',
	'STRING_LITERAL', 'FUNC_NAME');

?>