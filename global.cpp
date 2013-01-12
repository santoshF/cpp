#include<iostream>

using namespace std;
int m=10;
int main(){
cout<<"Multiple declaration of a variable polymorphic variable \n"<<endl;
int m= 20;
cout<<"m in main = "<<m<<" is at address "<<&m<<endl;
{
 int m = 30;
cout<<"m in inner block = "<<m<<" is at address "<<&m<<endl;
++m;
cout<<"++m give "<<m<<endl; 
}
cout<<"m is out of inner block "<<m<<" is at address "<<&m<<endl;
cout<<"Scope Resolution"<<endl;
cout<<"::m in main " <<::m <<" is at address"<<&(::m)<<endl;
cout<<"End of job\n"<<endl;
}
