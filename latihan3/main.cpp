#include <iostream>

using namespace std;

 int kali1(int a, int b){
 int hasil =0;
 for(int i=0;i<b;i++){
 hasil=hasil+a;
 }
 return hasil;
 }
 int kali2(int a, int b){
 if(b==0)
 return 1;
 else if(b==1)
 return a;
 else
 return a+kali2(a,b-1);
 }
 int main(int argc, char *argv[])
 {
 int a,b;
 cout<<"=====================================\n";
 cout<<"|         PROGRAM PERKALIAN          |\n";
 cout<<"|         REKURSIF & ITERATIF        |\n";
 cout<<"=====================================\n\n";
 cout<<"masukkan bilangan pertama :";
 cin>>a;
 cout<<"masukkan bilangan kedua :";
 cin>>b;
 cout<<"secara ITERATIF :"<<endl;
 cout<<kali1(a,b)<<endl;
 cout<<"secara REKURSIF :"<<endl;
 cout<<kali2(a,b)<<endl;
 return 0 ;
 }
