#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
int Rseri, Rbesar, Rkecil, R1, R2, R3, rangkaian;
cout<<"=============Menghitung RangkaianSeri============="<<endl;
cout<<"[1] Menghitung total Rangkaian Seri"<<endl;
cout<<"[2] Menghitung Hambatan (R) terbesar"<<endl;
cout<<"[3] Menghitung Hambatan (R) terkecil"<<endl;
cout<<"==================================================="<<endl;
cout<<"Masukkan R1 : ";
cin>>R1;
cout<<"Masukkan R2 : ";
cin>>R2;
cout<<"Masukkan R3 : ";
cin>>R3;
cout<<"Masukkan pilihan anda : ";
cin>>rangkaian;
switch(rangkaian)
{
case 1:
Rseri = R1 + R2 + R3;
cout<<"Hasil Penjumlahan dari"<<R1<<"+"<<R2<<"+"<<R3<<"="<<Rseri;
break;
case 2:
if (R1>R2)
Rbesar=R2;
else
Rbesar=R1;
if (R3>Rbesar)
Rbesar=R3;
cout<<"Hambatan (R) terbesar adalah : "<<Rbesar;
break;
case 3:
if (R1<R2)
Rkecil=R2;
else
Rkecil=R1;
if (R3<Rkecil)
Rkecil=R3;
cout<<"Hambatan (R) terkecil adalah : "<<Rkecil;
break;
default :
cout<<"pilihan anda salah";
}
}
