#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std; //contoh mennggunakan multi fungsi, dan multi parametrik

float gaji_pk(char gol), pajak (float gaji);
float tunjang (float gaji, char status, int anak );
void garis ();

int main()
{
	int anak ;
	char golong,stat;
	float gaji, gajipokok,tnj,pjk;
	while (1)// (while1) adalah bernilai true atau benar
	{
		/*cetak judul program */
		cout <<"\n\n Program untuk menhitung gaji karyawan " ;
		cout <<"\n\n Untuk menghitung program ketik x pada Golongan \n" ;
		
		garis();
		
		/*input data */
		cout <<"\n Golongan Karyawan ( A-C & X untuk selesai) : ";
		golong = getche();
		if (golong == 'x'||golong=='X') break;
		
		cout <<"\n Status Karyawan (N=Nikah & B= Belum) : ";
		stat = getche();
		if(stat =='N'|| stat =='n')
		{
			cout <<"\n\tJumlah anak : ";
			cin >> anak;
		}else 
		cout << "\n\t";
		/*Menghitung  Gaji bersih */
		gajipokok =gaji_pk(golong);
		tnj =tunjang(gajipokok, stat,anak);
		pjk =pajak(gajipokok);
		gaji= gajipokok+tnj-pjk;
		
		/*cetak output*/
		
		cout  <<"\n\n";
		cout << "\nGaji Pokok = Rp. "<< gajipokok ;
		cout <<"\nTunjangan =   Rp. "<<tnj;
		cout <<"\n-----------------------------------------------------------------------------------+";
		cout <<"\nTotal       = Rp. "<< gajipokok+tnj;
		cout <<"\nPajak       = Rp. "<< pjk;
		cout <<"\n-----------------------------------------------------------------------------------+";
		cout <<"\nGaji Bersih = Rp. "<< gaji;
		cout <<"\n-----------------------------------------------------------------------------------+";
		cout <<"\n\n Tekan Sembarang Tombol ";
		getch() ;
		
	}
}
void garis() /*menggambar garis*/
{
	cout <<"\n"; 
	for (int i=1 ;i<=50; ++i)
	cout << "\xB1";
}/* menghitung gaji poko*/
float gaji_pk (char gol)
{
	switch (gol)
	{case 'A':
		case'a':
		return(50000.00);
	case'B':
	case'b':
	return (100000.00);
	case'C':
		case'c':
			return(150000.00);
	default :
		return(0.00);
		}
}
/*Menghitung tunjangan */
float tunjang(float gaji,char status,int anak)
{
	float ta, ti;
	if (status =='B'||status =='b')
	{
		ta =0;
		ti =0;
	}
	else if (status == 'N'||status=='n')
	{
		ta=0,15 *gaji;
		ti= anak >3 ? 3* .1 *gaji : anak * .1 *gaji; //? adalah wild chart atau penggati if
	}
	return (ta +ti);
}
/*menghitung pajak*/
float pajak (float gaji)
{
	float pjk;
	pjk = gaji <=96000 ? 0 : .15 * (gaji-96000);
	return (pjk) ;
}
