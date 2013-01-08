#include<iostream>

using namespace std;

class CPP{
private:
int i;

public:
void read(int n){
this->i = n;

}
void print(){
int j = 4019 ,g=3 ;
//Binary of j = 4019 - 0000111110110011
cout<<i<<endl;
//right shift operator
cout<<(j>>g)<<endl;//502 -0000000111110110
//Left Shift operator
cout<<(j<<g)<<endl;//32152 -011111011011000
}

};

int main(){
CPP c;
c.read(5);
c.print();

return 0;
}
