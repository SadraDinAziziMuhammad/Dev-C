#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[]="HALO";
	char str2[]="halo";
	char str3[]="HALO";
	cout<<"Perbandingan "<<str1<<" dan "<<str2<<" adalah "<<strcmp(str1, str2)<<endl;
	cout<<"Perbandingan "<<str1<<" dan "<<str3<<" adalah "<<strcmp(str1, str3)<<endl;
	cout<<"Perbandingan "<<str2<<" dan "<<str1<<" adalah "<<strcmp(str2, str1)<<endl;
	return 0;
}
