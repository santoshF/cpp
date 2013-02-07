#include<iostream>
using namespace std;
class MSC{
private: int m ;
	 float f;
public:
	MSC(int p = 1,float q = 1.0){
	cout<<"Creating Object " <<this <<endl;
	m = p;
	f = q;
}
	~MSC(){
	cout<<"Destroying "<<this <<endl;
}

	void display(){
	cout<<"m = " <<m <<endl;
	cout<<"f = " <<f <<endl;
}
 };
int main(){
MSC *p = new MSC(4,4.0);
if(p == NULL) cout<<"No Memory"<<endl;
p->display();
p = new (p) MSC(6,6.0);
p->display();
p->~MSC();	 
delete p;

return 0;
}
