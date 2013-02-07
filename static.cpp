#include<iostream>
using namespace std;
class MSC{
private: static int m;
	 float f;
public:MSC(int p = 1, float q =1.0){
	cout<<"Creating Object "<<this<<endl;
	 m = p;
	 f = q; 
	} 	

	~MSC(){
	cout<<"Destroying "<<this <<endl;

}	
      void display(){
	cout<<"Static member m = " << m << endl;
	cout<<"Non static member is "<< f<<endl;
	}
};
int MSC::m = 3;

int main(){
MSC a;
a.display();
}
