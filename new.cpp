#include<iostream>
using namespace std;
class MSC{
private: int m;
 	 float f;

public: MSC(int p = 1 , float q = 1.0){//Default 
 	cout<<"Creating  Object "<<this<<endl;
 	m = p;
	f = q;
	}
	MSC(const MSC &X){//Copy Constructor
	cout<<"Creating Object " <<this << endl;
	m = X.m;
	f = X.f;
	}
	~MSC(){
	cout<<"Destroying Object " <<this << endl; 
	}
	void display(){
	cout<<"Value of m = "<<m<<endl;
	cout<<"Value of f = "<<f<<endl;

	}
};



int main(){
	cout<<"New and Delete "<<endl;
	MSC a(5,5.5f);
	a.display();
	
  	MSC *p = new MSC;//Creating Object using new

	if(p  <= NULL)
 	cout<<"Memory error"<<endl;
        p->display();
 	delete p;

	p = new MSC(6,6.6f);
	if(p <= NULL)
	cout<<"No Memory"<<endl;
	p->display();
	delete p;	

	p = new MSC(a);
	if(p <= NULL)
	cout<<"No Memory"<<endl;
	p->display();
	delete p;
	
return 0;
}
