#include<iostream>
#include<cstring>
using namespace std;
int main(){
string str("To find a needle in a haysack");
string str1("needle");

if(str.find(str1) != string::npos)
cout<<"found";

string str2="2011";
if(str.find(str2) != string::npos)
cout<<"found";
else
cout<<"not found";

return 0;
}
