#include<iostream>
using namespace std;
class ISSC{
private:
 int m;
 float f;
public:
 ISSC(int p = 1, float q = 1.0){
 cout<<"Creating object "<<this<<endl;
 m = p ;
 f = q ;
}
 ISSC(const ISSC &X){
 cout<<"Creating object "<<this<<endl;
 m = X.m;
 f = X.f;
} 
void display(){
 cout<<"Value of m = "<<m << endl;
 cout<<"Value of f = "<<f << endl;
}
~ISSC(){
cout<<"Destroing object at " <<this<<endl;
}
};
int main(){
ISSC a[3]={ ISSC(3,3.5) , ISSC( 4 , 4.5) , ISSC (5 , 5.5 ) };
ISSC B[3] ;
for(int i = 0 ; i < 3 ; i++)
 a[i].display();

for(int i =0;i < 3;  i++)
 B[i].display();

return 0;
}
