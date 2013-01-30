#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

/*
changed string line to 
char for error cannot convert ‘std::string {aka std::basic_string<char>}’ to ‘const char*’
*/

int main(){
char arr[] = "2012";
char line[2000];
int totalUser = 0;
ifstream fin("username.txt");
if(fin.is_open()){
 while( fin.good()){
 totalUser++;
 fin.getline(line,2000);
 if(line.find(arr) !=  string:: npos)
 cout<<line;
}
 cout <<totalUser;
 fin.close();
}
else cout<<"Unable to open file"<<endl;
return 0;
}
