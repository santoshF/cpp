#include<iostream>
using namespace std;
class MSC{
private: int m;
	float f;
public:MSC(int p = 1, float q = 1.0){
		cout<<"Creating Object " <<this <<endl;
		m = p ;
		f = q ;
		}

	~MSC(){
		cout<<"Destrooying "<<this <<endl;
		}
	void display(){
	cout<<" m = "<<m <<endl;

}

int main(){
cout<<"Placement Destructor "<<endl;
float g = 5.5;
cout<<" g = " <<g << "is at "<<&g <<endl;
char  * ch ;
ch = new (&g) MSC[4];
cout<<"Memory allocated for character placed "<<endl;
ch -> ~MSC();
cout<<"g = " <<&g;
return 0;
}
