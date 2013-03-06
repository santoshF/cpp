/*
 * =====================================================================================
 *
 *       Filename:  matrix.cpp
 *
 *    Description:  Dynamic Matrix
 *
 *        Version:  1.0
 *        Created:  Tuesday 05 March 2013 12:58:25  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Santosh  (), 
 *   Organization:  ISSC
 *
 * =====================================================================================
 */
#include<iostream>
#include<cstdlib>

using namespace std;
class Matrix{
private: int row;
	int col;
	int ** matrix; 

public:
	/*-----------------------------------------------------------------------------
	 *  Constructor for Matrix class
	 *-----------------------------------------------------------------------------*/
       Matrix(int row, int col , int value ){
     	if(row < 1 || col < 1){
	 cout<<"Irregular Size" <<endl;
	 exit(0);
	}

	matrix = new int * [row];
	if(matrix == NULL){
	exit(0);
	}
	
	/*-----------------------------------------------------------------------------
	 *  for a paticular row the corresponding col
	 *-----------------------------------------------------------------------------*/
	for(int i = 0 ; i < row ; i++){
	 matrix[i] = new int [col];
	 if(matrix[i] == NULL){
		exit(0);
		}
	}

	
	/*-----------------------------------------------------------------------------
	 *  Add values in rows and columns
	 *-----------------------------------------------------------------------------*/
	
	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ;  j < col ;j++ ){
			matrix[i][j] = value++;
			}
		}	 
	}

	/* 
	 * ===  FUNCTION  ======================================================================
	 *         Name:  display
	 *  Description: Displays the Matrix  
	 * =====================================================================================
	 */
	void display  ( ) const 
	{
		cout<<"For Matrix  row" <<row<<endl;
		cout<<"For Matrix col " <<col<<endl;
		for(int i = 0; i < row ; i++ ) {
          		for(int j =0;  j < col ;j++){
			cout<<matrix[i][j]<<" \t ";
	        	}
			cout<<endl;
		} 		 
	return;
	}/* -----  end of function display  ----- */
	
	
	/*-----------------------------------------------------------------------------
	 *  Destructor
	 *-----------------------------------------------------------------------------*/
	~Matrix(){
		for(int j = 0 ; j < row ; j++ ){
		delete [] matrix[j];
		delete [] matrix;
	}
	}
	
 	

}; 





/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description: Create a dynamic Matrix   
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	Matrix m(2,3,1);
	m.display();
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
