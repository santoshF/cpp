#include<iostream>
using namespace std;
class Over{
private:
int i;
float j;
public:
Over(int p = 1, float q = 1.0){
i = p;
j = q;
}
Over(const Over &a){

i = a.i;
j = a.j; 
}
~Over(){
cout<<"Destroying "<<this<<endl;
}
void display(){
cout<< " i =  "<<i<<endl;
cout<< " j =  "<<j<<endl;
}
};



int main(){
Over o,b(2,5.6),a,c(b);

o.display();
b.display();
a.display();
c.display();
return 0;
}
