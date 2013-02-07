#include<iostream>
#include<cstdlib>
using namespace std;
class MSC{
private:
int size;
int *ptr;
public:
MSC(int many = 1){
if(many < 1){
 cerr<<"No Memory"<<endl;
 exit(0);
}
size = many;
ptr = new int[size];
if(ptr == NULL){
cerr<<"No Memory"<<endl;
exit(0);
}
for(int i = 0 ;i < size; i++)
 ptr[i] = i + 1;
}
MSC(const MSC &x){
 size = x.size;
 ptr = new int[size];
 if(ptr == NULL)
 exit(0);
 for(int i = 0 ; i < size; i++)
  ptr[i] = x.ptr[i];
}
~MSC(){
 delete []ptr;
}

void display(){
 for(int i =0; i < size;i++)
  cout<<ptr[i]<<endl;
}

};
int main(){
MSC s(5);
MSC a = s;
MSC d(s);
s.display();
a.display();
d.display();
return 0;
}
