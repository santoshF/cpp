#include<iostream>
#include<cstdlib>
using namespace std;
class ISSC{
private: int size;
 int * ptr;
public:
 ISSC(int many = 1){
   if (many < 1) {
  cerr<<"No Memory"<<endl;
  exit(0);
 }
 size = many;
 ptr = new int[size];
if(ptr == NULL){
 cerr<<"No Memory"<<endl;
}
 for(int i = 0; i < size; i++)
  ptr[i] = i+1;
}
 ~ISSC(){
 delete []ptr;
 }
void display(){
 cout<<"For array of size "<<size<<endl;
 for(int i = 0 ; i < size;i++) 
  cout<<ptr[i]<<endl;
}
};


int main(){
cout<<"Dynamic Constructor and destructor "<<endl;
ISSC a(5);
a.display();
cout<<"End of job!"<<endl;
return 0;
}
