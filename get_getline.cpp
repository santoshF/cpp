/*
 * =====================================================================================
 *
 *       Filename:  get_getline.cpp
 *
 *    Description:  To understand the functionality of get and getline functions
 *
 *        Version:  1.0
 *        Created:  Wednesday 06 March 2013 02:34:48  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Santosh  (), 
 *   Organization:  ISSC
 *
 * =====================================================================================
 */

#include	<iostream>
#include	<stdlib.h>
#include	<fstream>
using namespace std;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  Get and getline
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	system("clear");
	cout<<"Use of get and getline "<<endl;

	ofstream fout("BinFile");

	cout<<"Data stored in the file "<<endl;
	cout<<"Computer literacy $ is the second literacy"<<endl;
	fout<<"Computer literacy $ is the second literacy"<<endl;
	fout.close();
	
	/*-----------------------------------------------------------------------------
	 * istream & get( char * buffer ,int number ,char delimiter)
	 * It generates array of char of which one of it NULL  
	 *-----------------------------------------------------------------------------*/
	 
	 ifstream fin("BinFile");
	 if(fin == NULL) exit(0);
	  char * str ;	 
	 fin.get(str,80,'$');
         cout<<str<<endl;
	
         fin.get(str,80);
	 cout<<str<<endl;
	 
	 /*-----------------------------------------------------------------------------
	  * istream & getline( char * buffer,int streamsize, char delimiter)         
	  * It extracts the delimiter from the file
	  * -----------------------------------------------------------------------------*/
		
	 fin.seekg(0,ios::beg);
	 fin.getline(str,80,'$');
	 cout<<str<<endl; 
	
	 fin.getline(str,80);
	 cout<<str<<endl;
	
	 fin.close();

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
