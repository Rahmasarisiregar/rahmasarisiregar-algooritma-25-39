#include <iostream>
#include <conio.h>

using namespace std;

float luas(float panjang,float lebar);
int main()
{
	float panjang_se,lebar_se,luas_se;
	cout<<"program menghitung luas segiempat \n";
	
	/*input panjang dan lebar*/   //(komentar atau keterangan)//
	cout<<"\n\t panjang:";
	cin>>panjang_se;
	cout<<"\n\t lebar :";;
	cin>>lebar_se;
	
	/*meghitung luas segiempat*/
	luas_se-luas(panjang_se,lebar_se);
	cout<<"\n\ luas segiempat-"<<luas_se;
}

float luas(float panjang,float lebar)
{
	return(panjang*lebar);
}
