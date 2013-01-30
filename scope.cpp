#include<iostream>
using namespace std;

class ISSC {
private:
 int m;
 float f;
public:
 void assign(int ,float);
 void display();
 void change(int ,float);
};

void ISSC::assign(int p = 5,float q = 5.0){
m = p;
f = q;
}
void ISSC::change(int p = 2,float q = 2.0){
m -=  p;
f -=  q;
}
void ISSC::display(){
cout<<"The value of m ="<<m<<endl;
cout<<"The value of f ="<<f<<endl; 
}
int main(){
ISSC i;
int x = 21;
float  y = 25;
i.assign(x,y);
i.display();
i.change();
i.display();
return 0;
}
