#include<iostream>
using namespace std;
template <class T>
//template <class T,class W>

T absolute (T n){
if(n < 0)
n = -n;
return n;
}

template <class T,class W>
T mixup (T a, W b) {
T temp;
temp =  a + b;
return temp;
}

int main(){
int i = -5;
cout<<"Absolute of int " <<absolute(i)<<endl;
float j = -2.3;
cout<<"Absolute of float "<<absolute(j)<<endl;
long l = -444;
cout<<"Absolute of long "<<absolute(l)<<endl;

cout<<"Add int to mix up"<<mixup(i,j)<<endl;
//-7
cout<<"Add int to mix up"<<mixup(j,i)<<endl;
//-7.3
cout<<"Add int to mix up"<<mixup(i,i)<<endl;
//-10
cout<<"Add int to mix up"<<mixup(j,j)<<endl;
//-4.6
return 0;
}
