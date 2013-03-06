/*
 * =====================================================================================
 *
 *       Filename:  boolean.cpp
 *
 *    Description:  To test boolean operator
 *
 *        Version:  1.0
 *        Created:  Tuesday 05 March 2013 03:03:05  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Santosh  (), 
 *   Organization:  ISSC
 *
 * =====================================================================================
 */

#include <iostream>
#include	<stdlib.h>
using namespace std;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  Test boolean operator
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	bool result;
	result = 2 < 1;
	cout<<boolalpha<<result<<endl;

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

