#include<iostream>
using namespace std;
class ISSC{
private:
int m;
float f; 
public:
void assign(int p =2 ,float w = 2.0){
 this->m = p;
  this->f = w;
}
void display(){
 cout<<"The value of m = "<<m<<endl ;
 cout<<"The value of f = " << f <<endl;
}
void change( int p = 1 , float w = 1.0 ){
 this->m -= p;
 this->f -= w;
}
};


int main(){
ISSC i;
i.assign();
i.display();
i.change();
i.display();
return 0;
}
