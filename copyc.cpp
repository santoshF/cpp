#include<iostream>
using namespace std;
class CopyC{
private:
 int m;
 float f;
public:
  //Default Constructor
 CopyC(int g = 10,float h = 12.0){
  m = g ;  f = h;
  cout<<"Value of m = " <<m <<endl; 
  cout<<"Value of f = " <<f <<endl;
}
 CopyC(CopyC &x ) //Reference
 {
  m = x.m ;
  f = x.f ;
 cout<<"Value of m "<<m<<endl; 
 cout<<"Value of f "<<f<<endl;
 }
 ~CopyC(){
 cout<<"Destroyed !! "<<this<<endl;
}
 void display(){
  cout<<"For the object at "<<this<<endl;
  cout<<"m = "<<m <<" f = " <<f<<endl; 
}
};
int main(){
 cout<<"Copy Constructor "<<endl;
 CopyC a(3,3);
 CopyC b(a); 
 a.display();
 b.display();
 CopyC c = b;
 c.display();
return 0;
}

