/*
 * =====================================================================================
 *
 *       Filename:  binaryIO.cpp
 *
 *    Description:  Binary Based File IO in C++
 *    		    Store int,float,double char and string in a file and copy it back to
 *    		    variables	
 *
 *        Version:  1.0
 *        Created:  Wednesday 06 March 2013 01:04:26  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Santosh  (), 
 *   Organization:  ISSC
 *
 * =====================================================================================
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(){
	cout<<"Binary File Based IO in C++"<<endl;
	int j1 = 1234 , j2 ;
	float w1 = 12.3434 ,w2 ;
	double d1[3]={ 1.32 , 2.45 ,5.64642676} ,d2[3];
	char str1[80],str2[80]="";
	strcpy(str1,"Hello World!");
	ofstream fout("Buffy");
	
	system("clear");
	/*-----------------------------------------------------------------------------
	 *  Data to be written
	 *-----------------------------------------------------------------------------*/
	cout<<endl<<"Data in Binary File"<<endl;
	cout<<j1 <<endl;
	cout<<w1 <<endl;
	cout<<str1<<endl;
	for(int i = 0 ; i < 3 ; i++)
	cout<<d1[i]<<endl;

	/*-----------------------------------------------------------------------------
	 *  ostream & write (const char * s ,streamsize n) Write block of data
	 *-----------------------------------------------------------------------------*/
	fout.write(  (char *) &j1,sizeof(j1) );
	fout.write(  (char *) &w1,sizeof(w1) );
	fout.write(  (char *) d1,sizeof(d1) );
	fout.write(  str1,strlen(str1));
	
	fout.close();
			
	/*-----------------------------------------------------------------------------
	 * istream &read (char *s ,streamsize n) Read block of data  
	 *-----------------------------------------------------------------------------*/
        
	ifstream fin("Buffy");
	if(fin == NULL) exit(0);
	cout<<endl<<"Data Read from Binary File " <<endl;

	fin.read((char *) &j2,sizeof(int));
	cout<<j2<< " Bytes Read " <<fin.gcount()<<endl;

	fin.read((char *) &w2,sizeof(float));
	cout<<w2<< " Bytes Read " <<fin.gcount()<<endl;

        fin.read((char *) d2,sizeof(d1));
	for(int i=0 ; i < 3 ; i++)
	cout<<d2[i]<<endl;
        cout<< "Bytes Read " <<fin.gcount()<<endl;

        fin.read(str2,strlen(str1));	
	cout<<str2<< "Bytes Read " <<fin.gcount()<<endl;

	fin.close();
	
	return 0;
}
