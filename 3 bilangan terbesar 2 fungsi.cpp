#include <iostream>
using namespace std;


int biltk(int a,int b ,int c){
	int terkecil;
		
	if (a < b && a < c)
	{
		cout <<"Bilangan terkecil dari bilangan"<<a<<","<<b<<","<<c<<"tersebut adalah bilangan = "<<a;
	}
	else if (b < a && b < c)
	{
		cout <<"Bilangan terkecil dari bilangan"<<a<<","<<b<<","<<c<<"tersebut adalah bilangan = "<<b;
	}
	else
	{
		cout <<"Bilangan terkecil dari bilangan"<<a<<","<<b<<","<<c<<"tersebut adalah bilangan = "<<c;
	}
	return terkecil;
}


int main ()
{
	int x,y,z,hasil;
	
	cout<<"---Program menentukan bilangan terbesar dari 3 bilangan by @ Zulfikar---"<<endl;
	
	cout << "\nMasukan bilangan pertama = ";
	cin >>x;
	
	cout << "\nMasukan bilangan Kedua = ";
	cin >>y;
	
	cout << "\nMasukan bilangan Ketiga = ";
	cin >>z;
	
	hasil = biltk(x,y,z);
}
	
	// Script Menentukan bilangan terbesar dari 3 bilangan

