#include <iostream>
using namespace std;

int main ()
{
	int x,y,z;
	
	cout<<"---Program menentukan bilangan terbesar dari 3 bilangan by @ Zulfikar---"<<endl;
	
	cout << "\nMasukan bilangan pertama = ";
	cin >>x;
	
	cout << "\nMasukan bilangan Kedua = ";
	cin >>y;
	
	cout << "\nMasukan bilangan Ketiga = ";
	cin >>z;
	
	// Script Menentukan bilangan terbesar dari 3 bilangan
	
	if (x > y && x > z)
	{
		cout <<"Bilangan terbesar dari bilangan"<<x<<","<<y<<","<<z<<"tersebut adalah bilangan = "<<x;
	}
	else if (z > y && z > x)
	{
		cout <<"Bilangan terbesar dari bilangan"<<x<<","<<y<<","<<z<<"tersebut adalah bilangan = "<<z;
	}
	else
	{
		cout <<"Bilangan terbesar dari bilangan"<<x<<","<<y<<","<<z<<"tersebut adalah bilangan = "<<y;
	}
	return 0;
}
