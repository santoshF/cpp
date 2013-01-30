#include<iostream>

//Collection of std input output
using namespace std;

int n = 6;
//Add default 
int add(int a,int b=3,int c=5){
return (a+b+c);
}
/*Error Fuctions
int addE(int a,int b = a,int c){
return (a+b+c);
}
*/
int addG(int a,int b = n,int c = 6){
return (b+b);
}
int main(){
cout<<"Add 5,6,7 "<<add(5,6,7)<<endl;
cout<<"Add 5,6,7 "<<add(5,7)<<endl; 
cout<<"Add 5,6,7 "<<add(5)<<endl;

for(int i=0;i <5;i++){
cout<<"Add Global 5 ,6 ,7 "<<addG(3)<<endl;
++n;

}
}
