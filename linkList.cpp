/*
 * =====================================================================================
 *
 *       Filename:  linkList.cpp
 *
 *    Description:  Create a simple Link List
 *
 *        Version:  1.0
 *        Created:  Tuesday 05 March 2013 03:09:53  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Santosh  (PF), 
 *   Organization:  ISSC
 *
 * =====================================================================================
 */
#include<cstdlib>
class LinkList{
private:
	/*-----------------------------------------------------------------------------
	 *  create a node with data and link to next node
	 *-----------------------------------------------------------------------------*/
	
	int info;
	LinkList * next;

public: 	
	/*-----------------------------------------------------------------------------
	 *  create a null constructor
	 *-----------------------------------------------------------------------------*/
	LinkList() { }
	/*-----------------------------------------------------------------------------
	 *  List friend function for addition ,deletion ,priting of a list
	 *-----------------------------------------------------------------------------*/
	
	/* 
	 * ===  FUNCTION  ======================================================================
	 *         Name:  addNode
	 *  Description:  Add Node takes in the head ,tail and data as its functional Parameter
	 *  		and if List is empty add data as first node or if there are elements
	 *  		before it.It traveses to the last node and adds data at the end of the
	 *  		 Link List. 
	 * =====================================================================================
	 */
friend	void
		addNode ( LinkList * &H , LinkList * &T, int data )
		{
			LinkList * temp;
			temp = new LinkList;
			if(temp == NULL) exit(0);
			temp->info = data;
			temp->next = NULL;
			if(H == NULL)
				H = temp;
			else
				T->next = temp;
			T = temp;	
			return ;
		}		/* -----  end of function addNode  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  length
 *  Description:  To Find the length by Travesing Link List till it reaches the end 
 * =====================================================================================
 */
friend int
	length ( LinkList *H )
	{
		int number = 0;
		while ( H != NULL) {
		 ++number;
		 H = H -> next;
		}

		return number;
	}		/* -----  end of function length  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  deleted 
 *  Description:  To delete a node from the list 
 *  		 condition 1:if head is Null return
 *  		 condition 2:
 * =====================================================================================
 */
friend void
	deleted  ( LinkList * H , LinkList * T, int data )
	{
		LinkList *cur,*ref;
		if(H == NULL)
		  return ;
		cur = H;
		while((cur != NULL) && (cur->info != data)) {
		

		}
		if()
		return ;
	}		/* -----  end of function deleted <+LinkList * &H +>  ----- */

};

#include	<stdlib.h>
#include <iostream>

using namespace std;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  Create , Delete and Print a Node in Link List
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{ 
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
