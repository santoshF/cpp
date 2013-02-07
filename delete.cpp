#include<iostream>
using namespace std;
class MSC{
private:
	int m;
	float f;
public:
	MSC(int p = 1, float q = 1.0){
	cout<<"Creating Object "<<this <<endl;
	m = p;
	f = q;	
	}
	MSC(const MSC &X){
	cout<<"Creating Object "<<this <<endl;	
	m = X.m;
	f = X.f;
	}
	~MSC(){
	cout<<"Destroying Object "<<this <<endl;
	}
	void display(){
	cout<<"Value of m = " << m<<endl;
	cout<<"Value of f = " << f<<endl;
	}
};

int main(){
	cout<<"New and Delete" <<endl;
	MSC *p ;
	p = new MSC[3];
	if(p == NULL)
	cout<<"No memory";
	for(int i = 0 ;i < 3;i++)
	  p[i].display();
	delete []p;
	
return 0;
}
