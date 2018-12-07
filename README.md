# praktikum8

**latihan1 : fungsi fibonacci dengan cara iteratif**
````
- mendeklarasikan fungsi fibonacci dengan int N,int U1=0,U2=1,U3
- dengan masukan rumus perulangan for (int i = 0; i<N; i++)
- dan rumus hasil U3= U1 + U2
- mendeklarasikan rumus if (i==0){
   cout<<U1;
  }
  else if (i==1){
   cout<<", "<<U2;
   }
   else{
    cout<<", "<<U3;
    U1 = U2;
    U2 = U3;
- masukan batasan terlebih dahulu untuk menampilkan deret fibo yang akan ditampilkan : cin>>a;
- mencetak di layar deret fibonacci(a)
````
**berikut programnya :**
````
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
````
**hasilnya**:
![img]https://raw.githubusercontent.com/RAIS14/praktikum8/master/hasil_program_lat1.png
**flowchartnya**:
![img]https://raw.githubusercontent.com/RAIS14/praktikum8/master/flowchart_lat1.jpg

**latihan2 :fungsi rekursif utk perkalian 2 buah bilangan dgn operator penjumlahan**
````
- mendeklarasikan int kali_rekursif,int a,int b
- memasukan rumus if (b==0)
return 0; // kasus basis
else if (b>0)
- pemanggilan rekursif dengan program
 return a + kali_rekursif(a,b-1);
else
return (-a) + kali_rekursif(a,b+1)
- jalankan programnya dan masukan bilangan pertama = cin>>a;
- masukan bilangan kedua = cin>>b;
- maka cout<<"hasil = "<< a <<"x"<< b <<"="<< (a*b)
````
**berikut program lengkapnya:**
````
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
````
**hasilnya:**
![img]https://raw.githubusercontent.com/RAIS14/praktikum8/master/hasil_program_lat2.png
**flowchartnya :**
![img]https://raw.githubusercontent.com/RAIS14/praktikum8/master/flowchart_lat2.jpg
 
**latihan3 :perkalian 2 bilangan dengan iteratif dan rekursif**
````
- cara iteratif
- mendeklarasikan fungsi int kali1,int a,int b,int hasil
- masukan rumus perulangan for(int i=0;i<b;i++)
- jadi rumus hasil=hasil+a
- cara rekursif
- mendeklarasikan fungsi int kali2,int a,int b
- dengan masukan rumus if(b==0)
 return 1;
 else if(b==1)
 return a;
 else
 return a+kali2(a,b-1)
- jalankan progarmnya dan masukan bilangan pertama = cin>>a
- masukan bilangan kedua = cin>>b
- secara iteratif = cout<<kali1(a,b)
- secara rekursif = cout<<kali2(a,b)
````
**berikut program lengkapnya:**
````
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
````
**hasilnya:**
![img]https://raw.githubusercontent.com/RAIS14/praktikum8/master/hasil_program_lat3.png