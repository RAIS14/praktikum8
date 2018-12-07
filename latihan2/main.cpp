#include <iostream>

using namespace std;

int kali_rekursif(int a,int b)
{
if (b==0)
return 0; // kasus basis
else if (b>0)
return a + kali_rekursif(a,b-1); // pemanggilan rekursif
else
return (-a) + kali_rekursif(a,b+1); // pemanggilan rekursif
}

main() {
 int a,b;
 cout<<"perkalian secara rekursif"<<endl;
 cout<<"===========================\n\n";
 cout<<"masukkan bilangan pertama : ";
 cin>>a;
 cout<<"masukkan bilangan kedua : ";
 cin>>b;
 cout<<"hasil = "<< a <<"x"<< b <<"="<< (a*b)<<endl;

 return 0;
}
