/*
 * =====================================================================================
 *
 *       Filename:  formating.cpp
 *
 *    Description:  To understand left and right formating
 *
 *        Version:  1.0
 *        Created:  Wednesday 13 March 2013 03:49:38  IST
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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */

using namespace std;
	int
main ( int argc, char *argv[] )
{
	cout<<"C++ function for formation"<<endl;
	cout.width(10);
	cout.fill('#');
	cout.setf(ios::left);
	cout<<"ISSC"<<endl;
	cout.unsetf(ios::left);
	cout.setf(ios::right);
	cout<<"ISSC"<<endl;
	cout.unsetf(ios::right);
	 cout<<"Built-In precision "<<cout.precision()<<endl;
	
       cout<<1146161616<<endl;
	cout.setf(ios::showpos);
	 cout<<123<<endl;
	cout.setf(ios::scientific | ios::uppercase);
	cout<<"Default value "<<4/3<<endl;
	cout.setf(ios::showpoint);
	cout<<"With show point "<<4/3<<endl; 
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
