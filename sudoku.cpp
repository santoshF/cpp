#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

class Sudoku{
private:
 int m[10][10];
 int no[9][9];
public:
void input();
void display();
void convertToCNF();
void interpret();
};
void Sudoku::input(){
//Read Input from file
ifstream fin("sudoku.txt");
 for(int i = 1 ;i <= 9; i++)
 {
 for(int j = 1; j <= 9;j++)
	fin>>m[i][j];

 }
}
void Sudoku::display(){

for(int i = 1; i <= 9;i++)
    {
	for(int j =1 ;j <= 9 ;j ++ ){
	cout<<m[i][j]<<"\t";
    }
	cout<<endl;	
   }

}

void Sudoku::convertToCNF(){
ofstream fout("cnf.txt");
fout<<"c \nc Sudoku to CNF \nc \np cnf 999 8861"<<endl;
//Notation i = row , j = column , k = number
//Atleast one entry in cell
//^x[1..9] ^y[1..9] V z[1..9] Sxyz
for(int x = 1 ; x <= 9 ; x++){

 for(int y = 1 ; y <= 9 ;y++){

 	for(int z = 1; z <= 9 ; z++){ 
 	fout<<x<<y<<z<<"\t ";
   }
fout<<"0"<<endl;
 }
}
//Unique entry in a row cell
//^y[1..9] ^z[1..9] ^x[1..8] ^ i=x+1[1..9] -Sxyz V -Siyz
for(int y = 1 ; y <= 9 ; y++){

 for(int z = 1 ; z <= 9 ;z++){
	for(int x = 1; x <= 8 ; x++){
           for(int i = x+1;i <= 9;i++)
          fout<<"-"<<x<<y<<z<<"\t"<<"-"<<i<<y<<z<<"\t0"<<endl;
   }
 }
}
//Unique  entry in column cell
//^x[1..9] ^z[1..9] ^y[1..8] ^i=y+1[1..9] -Sxyz V -Sxiz 
for(int k = 1 ; k <= 9 ; k++){

 for(int i = 1 ; i <= 9 ;i++){
	for(int j = 1; j <= 8 ; j++){
           for(int l = j+1;l <= 9;l++)
          fout<<"-"<<k<<j<<i<<"\t"<<"-"<<k<<l<<i<<"\t0"<<endl;
   }
 }
}
//Unique entry in block
//^z[1..9] ^i[0..2] ^j[0..2] ^x[1..3] ^ y[1..3] ^ k=y+1[1..3] 
//-S(3i+x)(3j+y)z V -S(3i+x)(3j+k)z
// ^z[1..9] ^i[0..2] ^j[0..2] ^x[1..3] ^y[1..3] ^k=x+1[1..3] ^ l[1..3]
// -S(3i+x)(3j+y)z V -S(3i+k)(3j+l)z
for(int z = 1 ; z <= 9 ; z++){
 for(int i = 0 ; i <= 2 ;i++)  {
	for(int j = 0; j <= 2 ; j++){
           for(int x = 1;x <= 3;x++) {
              for(int y  = 1 ; y <=3;y++){
		 for(int k = y+1;k <=3 ;k++){       
    fout<<"-"<<(3*i+x)<<(3*j+y)<<z<<"\t"<<"-"<<(3*i+x)<<(3*j+k)<<z<<"\t0"<<endl;
                 }
         }
       }
   }
 }
}

for(int z = 1 ; z <= 9 ; z++){
 for(int i = 0 ; i <= 2 ;i++)  {
	for(int j = 0; j <= 2 ; j++){
           for(int x = 1;x <= 3;x++) {
              for(int y  = 1 ; y <=3;y++){
		 for(int k = x+1;k <=3 ;k++){ 
			for(int l= 1 ; l <=3;l++){      
    fout<<"-"<<(3*i+x)<<(3*j+y)<<z<<"\t"<<"-"<<(3*i+k)<<(3*j+l)<<z<<"\t0"<<endl;
                 }
		}
         }
       }
   }
 }
}

for(int i = 1 ; i <= 9 ; i++){
 for(int j = 1 ; j <= 9 ; j++){
  if(m[i][j] != 0){
 fout<<i<<j<<m[i][j]<<"\t 0"<<endl;
   }
  }
 }

}

void Sudoku::interpret(){
ifstream fin("out.txt");
ofstream fout("number.txt");
int n  = 0;
int value = 0;
string num;

for(int i = 0 ; i < 9;i++){
 for(int j = 0 ; j < 9 ; j++){
	 no[i][j] = 0;
 }
}
while(fin>>num){
 value = atoi(num.c_str());
 if(value > 0){

   n = value % 10;
  fout>>n;


  }
 }

}
// cout<<value<<endl;
}
for(int i = 0 ; i < 9;i++){
 for(int j = 0 ; j < 9 ; j++){
    cout<<no[i][j]<<"\t";
 }
 cout<<endl;
}
}

int main(){
Sudoku s;
s.input();
s.display();
s.convertToCNF();
s.interpret();
//s.display();
return 0;
}
