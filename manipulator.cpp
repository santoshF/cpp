/*
 * =====================================================================================
 *
 *       Filename:  manipulator.cpp
 *
 *    Description:  To Understand manipulator
 *
 *        Version:  1.0
 *        Created:  Wednesday 13 March 2013 03:32:25  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Santosh Fernandes (), s.is.santosh@gmail.com
 *   Organization:  ISSC
 *
 * =====================================================================================
 */

#include	<iostream>
#include	<stdlib.h>
using namespace std;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	cout<<"C++ manipulation values "<<endl;
	cout.setf(ios::oct |ios::showbase);
	cout<<"Showpoint "<<ios::showpoint<<endl;
	cout<<"Scientific"<<ios::scientific<<endl;
	cout<<"Uppercase "<<ios::uppercase<<endl;
	cout<<"Fixed "<<ios::fixed<<endl;
	cout<<"Show Base "<<ios::showbase<<endl;
	cout<<"Unit Buffer "<<ios::unitbuf<<endl;
	cout<<"Decimal "<<ios::dec<<endl;
	cout<<"Ocatal "<<ios::oct<<endl;
	cout<<"Hex "<<ios::hex<<endl;
	cout<<"Skip whitespace "<<ios::skipws<<endl;
	cout<<"Left "<<ios::left<<endl;
	cout<<"Right "<<ios::right<<endl;
	cout<<"Showbase "<<ios::showbase<<endl;
	cout<<"Internal "<<ios::internal<<endl;
	//cout<<"White space "<<ios::ws<<endl;
	//cout<<"Inserts null chac "<<ios::ends<<endl;
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
