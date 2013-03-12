/*
 * =====================================================================================
 *
 *       Filename:  complex.cpp
 *
 *    Description:  To understand complex classes
 *
 *        Version:  1.0
 *        Created:  03/12/2013 07:34:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Santosh Fernandes(P.F.), 
 *   Organization:  ISSC
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdlib>

using namespace std;
class COMPLEX {
 private: float real;
	  float  img;
 public: COMPLEX( float realPart = 1.1 , float imgPart = 2.2 ){
	  real = realPart;
           img = imgPart;
	}	 
	
	 COMPLEX (const COMPLEX &a){
	  real = a.real;
	  img = a.img;
	}
	
	void display() const {
         cout<<" ( " <<real <<","<<img<<" ) "<<endl;
	}

   inline friend COMPLEX  conjugate (const COMPLEX & A);
   inline friend COMPLEX  sum( const COMPLEX & A, const COMPLEX &B);
   inline friend COMPLEX subtract( const COMPLEX & A,const COMPLEX &B );
};

COMPLEX  conjugate(const COMPLEX & A){
  COMPLEX  temp;

   temp.real = A.real;
   temp.img = -A.img;
	
   return temp; 
}

COMPLEX sum (const COMPLEX &A ,const COMPLEX &B){
COMPLEX temp;
temp.real = A.real + B.real;
temp.img = A.img + B.img;
return temp;
}

COMPLEX subtract (const COMPLEX &A ,const COMPLEX &B){
COMPLEX temp;
temp.real = A.real - B.real;
temp.img = A.img - B.img;
return temp;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	COMPLEX a,b,c(2.2,3.3),d(1.1,2.2),e;
	a.display();
        b = conjugate(a);
	b.display();
	e = sum(c,d);
	e.display();
	e = subtract(c,d);
	e.display();	
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
