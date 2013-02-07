#include<iostream>
using namespace std;
void display();
class CallFunc{
private:
 int m;
public:
void displayA();
void displayB();
};
void CallFunc::displayA(){
this-> m = 5;
cout<<"The value of m = "<<m<<endl;
display();
}
void CallFunc::displayB(){
cout<<"Hello India " <<endl;
}
void display(){
cout<<"I have been called "<<endl;
}

int main(){
CallFunc c;
c.displayA();
c.displayB();
return 0;
}
