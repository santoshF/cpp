#include<iostream>
using namespace std;
class Address{
public:
void pos();
};
void Address::pos(){
cout<<"We are here in class "<<this<<endl;
}



int main(){
cout<<"In C++ Main "<<endl;
Address a;
cout<<"Address of A "<<&a<<endl;
a.pos();

return 0;
}
