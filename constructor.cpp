#include<iostream>
using namespace std;
class ISSC {
private:
 int m;
 float f;
public:
 ISSC(int p  ,float q ){
 cout<<"Creating object "<<this <<endl;
 m = p;
 f = q;
 cout<<"Value of m "<<m<<endl;
 cout<<"Value of f "<<f<<endl;
}
 ISSC(int p ){
 m = p;
 cout<<"Creating object "<<this <<endl;
 f = 234.0; 
 cout<<"Value of m "<<m<<endl;
 cout<<"Value of f "<<f<<endl;

}
 ISSC(float q ){
 m = 234;
  cout<<"Creating object "<<this <<endl;
 f = q;
 cout<<"Value of m "<<m<<endl;
 cout<<"Value of f "<<f<<endl;
}
 ISSC(){
 m = 3;
 f = 4.0;
cout<<"Creating object "<<this<<endl;
 cout<<"Value of m "<<m<<endl;
 cout<<"Value of f "<<f<<endl;
 }
~ISSC(){
cout<<"Object to be destroyed " <<this<<endl;

}
};
int main(){
cout<<"Sequence of Constructor and Destructor "<<endl;
int a = 12 ;
float b = 15.0;
ISSC i(a);
ISSC f(b);
ISSC g(a,b);
ISSC h;

return 0;
}
