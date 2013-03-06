/*
 * =====================================================================================
 *
 *       Filename:  putback.cpp
 *
 *    Description:  To understand the working of putback function in c++
 *
 *        Version:  1.0
 *        Created:  Wednesday 06 March 2013 04:14:20  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Santosh  (), 
 *   Organization:  ISSC
 *
 * =====================================================================================
 */

#include 	<iostream>
#include	<fstream>
#include	<stdlib.h>

using namespace std;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  To read the text and putback the pointer to read it again
 *  		  ABCD putback on B 
 *		  reads  ABBCD	
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	cout<<"Use of putback in c++"<<endl;
	ofstream fout("MyFile1");
	fout<<"ABCDE";
	fout.close();
	
	ifstream fin("MyFile1");
	if(fin == NULL) exit(0);

	char ch;
	fin.get(ch);
	
	cout<<"Data read in "<<ch;
	cout<<"Data read is "<<ch <<endl;

	/*-----------------------------------------------------------------------------
	 *  istream & putback (char ch) - It move the get pointer backward by one move
	 *-----------------------------------------------------------------------------*/
	fin.putback(ch);
	cout<<"After putback "<<ch;
	
	/*-----------------------------------------------------------------------------
	 *  putback has no effect if current value is not given
	 *-----------------------------------------------------------------------------*/
	fin.putback('#');
	cout<<"After putback "<<ch<<endl;

	fin.get(ch);

	cout<<"Data read "<<ch;	
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
