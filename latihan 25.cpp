#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

struct data_mahasiswa 
{
char npm[9];
char nama[20];
int nilai;
};

int main()
{
	data_mahasiswa data_mhs;
	
	cout<<"input data mahasiswa\n";
	cout<<"-----------------------\n";
	cout<<"NPM :" ;
	cin >>data_mhs.npm;
	cout<<"Nama : " ;
	cin >>data_mhs.nama;
	cout<<"Nilai :" ;
	cin >>data_mhs.nilai;
	cout<<"-----------------------\n";
	cout<<"Data yang telah anda input\n";
	cout<<"-----------------------\n";
	cout<<"NPM :" <<  data_mhs.npm << endl;
	cout<<"Nama :" <<  data_mhs.nama << endl;
	cout<<"Nilai:" <<  data_mhs.nilai << endl;
	cout<<"-----------------------\n";

return 0;	
}
