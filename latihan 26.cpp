#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <windows.h>
#include <cstdlib>
using namespace std;

void gotoxy(int x, int y) {
	COORD coord;       // struktur untuk mengatur koordinat
	coord.X = x;       //KOORDINAT X
	coord.Y = y;       //KOORDINAT y
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE),coord);
}
struct pegawai
{
	char nik[9];
	char nama[29];
	char gol[3];
}   peg[20];
int main()
{
	char lg='y';
	int hasil,i, n=0;
	float gaji=0;
	while(lg=='y'  || lg=='y')

{
system("cls");
cout<<"input data pegawai\n";
cout<<"------------------------------------------------------------------\n";
n++;
cout<<"NIK : ";
gets(peg[n].nik);
cout<<"Nama : ";
gets(peg[n].nama);
cout<<"Gol [I,II] : ";
gets(peg[n].gol);
cout<<"------------------------------------------------------------------\n";
cout<<"input lagi[Y/T]:";
lg=getch();
}
system("cls");
gotoxy(5,3);cout<<"LAPORAN DATA PEGAWAI\n";
gotoxy(5,4);cout<<"-------------------------------------------------------\n";
gotoxy(5,5);cout<<"No     Nik     Nama      Gol    Gaji";
gotoxy(5,6);cout<<"-------------------------------------------------------\n";
for(i=1 ; i <=n ; i++)
{
gotoxy(6 ,6+1);cout<< i;
gotoxy(9 ,6+1);cout<< peg[i].nik;
gotoxy(17, 6+1);cout<< peg[i].nama;
gotoxy(38, 6+1);cout<< peg[i].gol;
hasil = strcmp(peg[i].gol,"I");
if (hasil==0)
gaji = 750000;
hasil = strcmp(peg[i].gol,"II");
if (hasil==0)
gaji = 1250000;
gotoxy(45,6+1);cout<< gaji;	
}
gotoxy(5,7+i);cout<<"-------------------------------------------------------\n";
return 0;
}
