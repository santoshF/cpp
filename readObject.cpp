/*
 * =====================================================================================
 *
 *       Filename:  readObject.cpp
 *
 *    Description:  Store Object in Binary File 
 *
 *        Version:  1.0
 *        Created:  03/06/2013 07:32:02 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include	<fstream>
#include	<iostream> 
#include	<stdlib.h>
using namespace std;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  Create object
 * =====================================================================================
 */

class MSC{
private:
	int m;
	float j;
public:
	MSC(int p = 1,float q = 1.0 ){
	m = p;
	j = q;
	}
	void display() const {
	cout<<" m = "<<m<<endl;
	cout<<" j = "<<j<<endl;
	}
	void adder() {
	m += 1;
	j += 1.0;
	}
	void store (ostream & fout){
	fout.write((char *) this , sizeof(*this));
	}
	void retrive( ifstream & fin){
	fin.read((char *) this ,sizeof(this));
	}
};


	int
main ( int argc, char *argv[] )
{
	cout<<"Binary I/O for object "<<endl;
	MSC a(2 , 3.0);
	ofstream fout("MyFile1");
	cout<<"Store Object "<<endl;
	a.store(fout);
	a.display();
	ifstream fin("MyFile1");
        if(fin == NULL){
	 cout<<"File Error"<<endl;
		exit(0);
	}
	

	while ( !fin.eof() ){
	cout<<"In Loop "<<endl;
        a.display();
	a.retrive(fin);

	}
	fin.close();
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
