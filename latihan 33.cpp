#include <iostream>
#include <conio.h>

using namespace std;

float hitung(int s) ; //mendeklarasikan (prototype) fungsi yang tidak menghasilkan nilai

int main ()
{
	float volume,sisi;
	cout<<"\n menghitung volume kubus";
	cout<<"\n sisi kubus :";
	cin>>sisi;
	volume = hitung(sisi);
	cout<<"\n volume kubus yaitu :"<<volume;
}
float hitung (int s)
{
	return (s*s*s);
}
 
