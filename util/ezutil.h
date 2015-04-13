#ifndef UTIL_H
#define UTIL_H
#include <map>
#include <string>

/**
 *	Create a super global variable to be used throughout ezparser modules
 *	Be reeeeally carefull while using it!!!
 */
extern std::map<std::string, std::string> EZENV;

/**
 * Just in case someone wants to include the whole util module
 */
#include <ezerror.h>
#include <ezini.h>
#include <ezlog.h>
#include <ezopt.h>

#endif