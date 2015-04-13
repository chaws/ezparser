<?php 

/**
 *	This script was create by Charles Oliveira <18oliveira.charles@gmail.com>
 *	On May 10th 2014
 */

// ****** STEPS ********
// Firstly, this will read the grammar file and add cpp methods for every rule
// Secondly, there's going to be a file containing only one method for every rule in the grammar
// Fourthy, all rules are going to be casted into AST format, simple string values 
// Finaly, the eval task is going to insert all information into a database
// *********************

/**
 *	Require fundamental directory settings, file names and needed functions
 */
require_once('util.php');

// Extract grammar.y rules
$rules = extract_grammar_rules();

// Build dir and file names
generate_rules_files($rules);

// Fill up the generated files with method names ang args
generate_rules_contents($rules);

// For last, fill up grammar file with its specific methods to be called
populate_grammar($rules);

// Generate ASTs
generate_asts($rules);

// Generate evals methods
generate_evals($rules);

//foreach($rules as $rule)
//	echo $rule["name"] . "\n";
//var_dump($rules);

?>