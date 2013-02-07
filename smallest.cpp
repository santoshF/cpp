#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
long long int i ;
int count ;
for(i =20; i < 1000000000 ;i++ ){
 count = 0;
// cout<<i<<endl;
 for(int j =1  ; j <= 20  ; j++ ){
    if(i % j == 0)
     count++;
// cout<<j<<endl;
} 
//cout<<count<<endl;
if(count == 20){
  cout<<" ok "<<i<<endl;
  exit(0);
}

}

// if(count == 11)
// cout<<i<<endl;
return 0;
}
