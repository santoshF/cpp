#include<iostream>
using namespace std;
class MSC{
private: int m;
	float f;
public:
	MSC(int p = 1, float q =1.0){
	cout<<"creating object "<<this<<endl;
	  m = p;
	  f=  q;
	}
	~MSC(){
	cout<<"destroying object "<<this <<endl;
	}
	void display(){
	cout<<"m = " <<m <<endl;	
	cout<<"f = " <<f <<endl;
}

};

int main(){
cout<<"New Placement and delete"<<endl;
MSC a(5,5.0);
a.display();
MSC *p = new (&a) MSC(3,3.0);
//p->~MSC();	
cout<<"Allocated object created at "<<endl;
p -> display();
p->~MSC();	
return 0;
}
