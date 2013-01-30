#include<iostream>
using namespace std;
bool isEven(int Value){
 if((Value % 2) == 0){
 return true;
}
return false;
}
int main(){
cout<<isEven(12);
return 0;
}
