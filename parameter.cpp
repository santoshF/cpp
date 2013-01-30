#include<iostream>
using namespace std;

int absolute(int n){
cout<<"In Executing function of int "<<endl;
if(n < 0) n = -n;
return n;
}
float absolute(float n){

cout<<"In Executing function of float "<<endl;
if(n < 0) n = -n;
return n;
}
long absolute(long n){

cout<<"In Executing function of long "<<endl;
if(n < 0) n = -n;
return n;
}

int main(){
cout<<"Function overloading "<<endl;
int i = -5;
cout<<"Absolute value of int "<<i<<" is "<<absolute(i)<<endl;
float j = -6.9;
cout<<"Absolute value of float "<<j<<" is "<<absolute(j)<<endl;
long k = -232l;
cout<<"Absolute value of long "<<k<<" is "<<absolute(k)<<endl;  
cout<<"Ambiguity error: Logical Error : Type propotion error: int take instead of long  "<<absolute(-584l)<<endl;
cout<<"----The above error can be resolved by using Pointers to different form and overloading function ---"<<endl;
int (*f1)( int) ;
f1 = absolute;
cout<<"Absolute value of int "<<i<<" is "<<f1(-5)<<endl;
float (*f2) (float);
f2 = absolute;
//f2 = f1; invalid converstion from int to float
cout<<"Absolute value of float "<<j<<" is "<<f2(-6.9)<<endl;
long(*f3) (long);
f3 = absolute;
cout<<"Absolute value of long "<<i<<" is "<<f3(-232)<<endl;
return 0;
}
