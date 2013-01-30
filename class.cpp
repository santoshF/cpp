#include<iostream>
using namespace std;
class Santosh{
private:
 int i;
 float f;
public:
 void assign(int m = 2,float n = 2.0 ){
 i = m;
 f = n;
}
 void display(){
 cout <<"The value of i "<<i <<endl;
 cout <<"The value of f "<<f <<endl;
}
 void change(int q = 1,float r = 1.0){
 i = i - q;
 f = f - r;
}
};



int main(){
Santosh s;
int x = 3;
float y = 3.0;
s.assign(x,y);
s.display();// 3 3 
s.change();
s.display();// 2 2 
s.assign(); 
s.display();// 2 2
s.change();
s.display();// 1 1
return 0;
}
