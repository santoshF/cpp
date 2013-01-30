#include<iostream>
using namespace std;
int main(){
int s = 25 , w = 7;
//Reference of s and w is m and n resp.
int &m = s;
int &n = w;
cout<<"Value of referent s = "<<s<<" Value of reference m is "<<m<<endl;
cout<<"Address of referent s = "<<&s<<" Address of reference m is "<<&m<<endl;
//increment reference m
m++;
cout<<"Value of referent "<<s<<" Value of reference "<<m<<endl;
cout<<"Address of referent  s = "<<&s<<" Address of reference m is "<<&m<<endl;
//Different reference
int &f = s;
cout<<"Value of referent "<<s<<" Value of differenc reference "<<f<<endl;
cout<<"Address of referent  s = "<<&s<<" Address of reference f is "<<&f<<endl;
//Increment value
f++;
cout<<"Value of referent "<<s<<" Value of reference "<<f<<endl;
cout<<"Address of referent  s = "<<&s<<" Address of reference f is "<<&f<<endl;

return 0;
}
