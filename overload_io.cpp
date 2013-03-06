#include<iostream>
#include<fstream>
using namespace std;

class MSC{
private:
	int m;
	float z;
public:
	MSC(int i = 1 , float j = 1.0){
	m = i;
	z = j;
	}
	
	friend istream & operator >> (istream & stream,MSC object);
	friend ostream & operator << (ostream & stream, const MSC object); 
};

istream & operator >> (istream & stream , MSC & object ) {
	cout<< "Enter the int and float value "<<endl;
	stream>>object.m>>object.z;
	return stream;
}

ostream & operator << (ostream & stream , MSC & object ) {
	stream << " m = " << object.m <<endl;
	stream << " z = " << object.z <<endl;
}

int main(){
MSC a(2,3.0), b (3 ,4.0), c ,d;
cout<<"For object A"<<endl;
cout<<a;
cout<<"For object B"<<endl;
cout<<b;
cout<<"Input for object c and d"<<endl;
//cout<<b

//cout<<"Display c and d " <<endl;
//cout<<c;
//cout<<d;

return 0;
}
