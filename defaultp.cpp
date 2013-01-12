#include<iostream>
using namespace std;
class intCell{
private:
 int storeValue;
public:
 intCell() {//No parameter
 storeValue = 0;
}
 intCell(int initVal){
 storeValue = initVal;
}
void  read(){
 cout<<storeValue;
}
void write(int x){
 storeValue = x;
} 

};
int main(){
intCell i(2);
i.read();
i.write(4);
}
