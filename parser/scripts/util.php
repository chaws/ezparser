<?php 

require_once('config.php');

/**
 *	Read grammar.y and returns all the rules in an array
 */
function extract_grammar_rules()
{
	echo "Extraction grammar rules...\n";
	global $substitution_table;

	$rules = array();
	$content = file_get_contents(CGRAMMAR_TEMPLATE);
	preg_match_all(RGX_RULE, $content, $matches);

	foreach($matches[1] as $k => $match)
	{
		$subRules = array();
		$rules[$k]['name'] = $match;
		preg_match_all(RGX_SUBRULE, $matches[2][$k], $match2);

		foreach($match2[1] as $sub)
		{
			$treating = trim($sub);
			$treating = strtr($treating, $substitution_table);
			$subRules[] = $treating;
		}
		
		$rules[$k]['subrules'] = $subRules;
	}

	return $rules;
}

/**
 *	Given a rule and a subrule, returns its file_name in the form
 */
function extract_file_name($rule, $subrule)
{
	$file_name = str_replace(' ', '_', $rule . '__' . $subrule) . '.cpp';
	return $file_name;
}

/**
 *	Given the array of rules, extract dir and file names for the auto-generated cpp methods
 *	This means that there'll be a separated file for every rule-subrule in the grammar
 */
function generate_rules_files($rules)
{
	echo "Generating rules files (the ones not created already)...\n";
	$template_content_file = file_get_contents(RULE_TEMPLATE_CPP);

	// method list to fill up the header class
	$methods = "";

	foreach($rules as $rule)
	{
		$dir_name = RULE_DIR . $rule['name'] . '/';
		if(!is_dir($dir_name))
			mkdir($dir_name);

		foreach($rule['subrules'] as $subrule)
		{
			$file_name = extract_file_name($rule['name'], $subrule);
			if(!is_file($dir_name . $file_name))
				file_put_contents($dir_name . $file_name, $template_content_file);

			$methods .= "\tezast * " . str_replace('.cpp', '', $file_name) . "(%args%);\n\n";
		}
	}

	// Generate header file
	$header_file_name = RULE_DIR . RULE_CLASS . '.h';
	if(!is_file($header_file_name))
	{
		$header_contents = file_get_contents(RULE_CLASS_TEMPLATE_H);
		$header_contents = str_replace('%classifndef%', strtoupper(RULE_CLASS).'_H', $header_contents);
		$header_contents = str_replace('%class%', RULE_CLASS, $header_contents);
		$header_contents = str_replace('%methods%', $methods, $header_contents);
		file_put_contents($header_file_name, $header_contents);
	}
}

/**
 *	Given a subrule, extract its argument list as if we were to insert it in the
 *	rules implementation files
 */
function extract_arg_list($subrule)
{
	global $special_rules;
	$params = explode(' ', $subrule);

	foreach($params as $key => $param) 
	{
		if(ctype_upper(str_replace('_', '', $param)))
		{
			$found = false;
			foreach ($special_rules as $special_case)
			{
				if($param == $special_case)
				{
					$found = true;
					break;
				}
			}
			if(!$found)	
				unset($params[$key]);
			else
				$params[$key] = strtolower($param);
		}
	}

	// Helps prevent two params with same name
	$same_name = array();
	$args = "";
	foreach($params as $param)
	{	
		// ALL parameters have AST as type
		if(isset($same_name[$param]))
		{
			$args .= ", ezast * $param" . $same_name[$param];
			$same_name[$param]++;
		}
		else
		{
			$same_name[$param] = 1;
			$args .= ", ezast * $param";
		}
		$args .= " = NULL";
	}

	// Trim first ', ' of the string
	$args = substr($args, 2);
	if($args === false)
		return "";
	return $args;
}

/**
 *	Given a set of rules array, generates the scaffold cpp files contents
 */
function generate_rules_contents($rules)
{
	echo "Populating rules content methods...\n";

	// Also fill up header class, so it contains all arg list accordingly with the cpp files
	$header_file_name = RULE_DIR . RULE_CLASS . '.h';
	if(!is_file($header_file_name))
	{
		echo "Please, 'run generate_rules_files' first";
		return;
	}

	$header_contents = file_get_contents($header_file_name);

	foreach($rules as $rule)
	{
		$dir_name = RULE_DIR . $rule['name'] . '/';
		foreach($rule['subrules'] as $subrule)
		{
			$args = extract_arg_list($subrule);
			$file_name = $dir_name . extract_file_name($rule['name'], $subrule);
			$method_name = str_replace('.cpp', '', basename($file_name));
			
			$file_content = file_get_contents($file_name);
			$file_content = str_replace('%rule_class%', RULE_CLASS, $file_content);
			$file_content = str_replace('%method_name%', $method_name, $file_content);
			$file_content = str_replace('%args%', str_replace(' = NULL', '', $args), $file_content);
			file_put_contents($file_name, $file_content);

			$header_contents = str_replace($method_name.'(%args%)', $method_name . "($args)", $header_contents);
		}
	}

	file_put_contents($header_file_name, $header_contents);
}

/**
 *	Insert each ezrule methods in the specific rule at the '.y' file
 *	And insert '%type' for all the rules
 */
function populate_grammar($rules)
{
	echo "Populating template grammar and creating a new one...\n";
	
	// Also fill up header class, so it contains all arg list accordingly with the cpp files
	$header_file_name = RULE_DIR . RULE_CLASS . '.h';
	if(!is_file($header_file_name))
	{
		echo "Please, 'run generate_rules_files' first!\n";
		return;
	}

	// Make sure we're not overwritting any existant file
	if(is_file(CGRAMMAR))
	{
		echo "*** CAUTION *** The grammar file already exists!\n";
		echo "Please remove it and run this script again, don't lose work!\n";
		return;
	}

	// Get grammar template file
	$grammar_content = file_get_contents(CGRAMMAR_TEMPLATE);
	$tokens = "/* AUTO-GENERATED TYPES */\n";

	foreach($rules as $rule)
	{
		$dir_name = RULE_DIR . $rule['name'] . '/';
		$tokens .= "%type <". AST_UNION_INSTANCE ."> " . $rule['name'] . "\n";

		foreach($rule['subrules'] as $subrule)
		{
			$file_name = $dir_name . extract_file_name($rule['name'], $subrule);
			$method_name = str_replace('.cpp', '', basename($file_name));
			$method_call =  "$$ = " . RULE_CLASS_INSTANCE . ".$method_name" . "();";

			$pos = strpos($grammar_content, '{}');
			$grammar_content = substr_replace($grammar_content, $method_call, $pos + 1, 0);
		}
	}
	
	$grammar_content = str_replace('%generated_tokens%', $tokens, $grammar_content);
	file_put_contents(CGRAMMAR, $grammar_content);

	echo "Done adding rules tokens, now you need to add specific tokens for strings and numbers!\n";
}

/**
 *	Generate a bunch of ast, really helpfull while creating the whole AST
 */
function generate_asts($rules)
{
	$header = file_get_contents(AST_TEMPLATE_H);
	$cpp = file_get_contents(AST_TEMPLATE_CPP);

	foreach($rules as $rule)
	{
		$filename_h   = AST_DIR . 'ezast_' . $rule["name"] . '.h';
		$filename_cpp = AST_DIR . 'ezast_' . $rule["name"] . '.cpp';

		$content_h = str_replace('%upper_case_ast_name%', strtoupper($rule["name"]), $header);
		$content_h = str_replace('%ast_name%', $rule["name"], $content_h);

		$content_cpp = str_replace('%upper_case_ast_name%', strtoupper($rule["name"]), $cpp);
		$content_cpp = str_replace('%ast_name%', $rule["name"], $content_cpp);

		if(is_file($filename_h))
		{
			echo "*** CAUTION *** This AST already exist!\n";	
		}
		else
		{
			file_put_contents($filename_h, $content_h);
		}

		if(is_file($filename_cpp))
		{
			echo "*** CAUTION *** This AST{$filename_cpp} already exist!\n";	
		}
		else
		{
			file_put_contents($filename_cpp, $content_cpp);
		}
	}
}


/**
 *	Generate a bunch of evals, really helpfull to generate an eval for every ezast type
 */
function generate_evals($rules)
{
	$cpp = file_get_contents(EVAL_TEMPLATE_CPP);
	$header = file_get_contents(EVAL_TEMPLATE_H);
	$generated_methods = '';

	foreach($rules as $rule)
	{
		$generated_methods .= "\tvoid * eval_" . $rule["name"] . "(ezast_" . $rule["name"] . " * ast);\n\n";

		$filename_cpp = EVAL_DIR . 'eval_' . $rule["name"] . '.cpp';
		$content_cpp = str_replace('%ast_name%', $rule["name"], $cpp);

		if(is_file($filename_cpp))
		{
			echo "*** CAUTION *** This EVAL{$filename_cpp} already exist!\n";	
		}
		else
		{
			file_put_contents($filename_cpp, $content_cpp);
		}
	}

	if(is_file(EVAL_DIR . 'ezeval.h'))
	{
		echo "*** ezeval.h already exists, skipping ***"; 
	}
	else
	{
		$header = str_replace('%generated_methods%', $generated_methods, $header);
		file_put_contents(EVAL_DIR . 'ezeval.h', $header);
	}
}

?>