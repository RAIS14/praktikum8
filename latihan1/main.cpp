#include <iostream>

using namespace std;

void fibonacci(int N){
 int U1 = 0, U2 = 1, U3;
 for (int i = 0; i<N; i++){
  U3 = U1 + U2;
  if (i==0){
   cout<<U1;
  }
  else if (i==1){
   cout<<", "<<U2;
   }
   else{
    cout<<", "<<U3;
    U1 = U2;
    U2 = U3;
   }
 }
}
int main(int argc, char *argv[]) {
 int a;
 cout<<"===========================================\n";
 cout<<"|         PROGRAM DERET FIBONACCI         |\n";
 cout<<"|           DENGAN ITERATIF               |\n";
 cout<<"===========================================\n\n";
 cout<<"Masukkan batas : ";
 cin>>a;
 cout<<"Deret Fibonacci : ";
 fibonacci(a);
 cout<<"\n\n";
 return 0;
 }
