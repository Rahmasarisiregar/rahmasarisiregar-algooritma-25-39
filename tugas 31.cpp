#include <iostream>
#include <string>
using namespace std;

struct Pegawai {
    string nama;
    int golongan;
    string kodeJabatan;
    int pinjaman;
};

void calculateSalary(int golongan, string kodeJbtn, int pinjaman) {
    int gaji, tunjangan, totalGjiktr, totalGjibrsh, pajak;

    switch (golongan) {
        case 1: gaji = 500000; break;
        case 2: gaji = 750000; break;
        case 3: gaji = 1000000; break;
        case 4: gaji = 1500000; break;
        case 5: gaji = 1750000; break;
        case 6: gaji = 2500000; break;
        default: gaji = 0; break;
    }

    if (kodeJbtn == "Dir") {
        tunjangan = 450000;
    } else if (kodeJbtn == "Sek") {
        tunjangan = 300000;
    } else if (kodeJbtn == "Wak") {
        tunjangan = 375000;
    } else if (kodeJbtn == "Stf") {
        tunjangan = 200000;
    } else {
        tunjangan = 0;
    }

    totalGjiktr = gaji + tunjangan;

    pajak = totalGjiktr * 0.05;

    totalGjibrsh = totalGjiktr - pajak - pinjaman;

    cout << "Gaji: Rp " << gaji << endl;
    cout << "Tunjangan: Rp " << tunjangan << endl;
    cout << "Pinjaman: Rp " << pinjaman << endl;
    cout << "Pajak: Rp " << pajak << endl;
    cout << "Total Gaji Kotor: Rp " << totalGjiktr << endl;
    cout << "Total Gaji Bersih: Rp " << totalGjibrsh << endl;
}

int main() {
    string namaPegawai, kodeJabatan;
    int golongan, pinjaman;

    cout << "Masukkan Nama Pegawai: ";
    getline(cin, namaPegawai);
    cout << "Masukkan Golongan (1-6): ";
    cin >> golongan;
    cout << "Masukkan Kode Jabatan (Dir, Sek, Wak, Stf): ";
    cin >> kodeJabatan;
    cout << "Masukkan Jumlah Pinjaman: ";
    cin >> pinjaman;

    cout << "\nGaji Pegawai PT. TELKOM\n";
    cout << "Nama Pegawai: " << namaPegawai << endl;
    cout << "Golongan: " << golongan << endl;
    cout << "Kode Jabatan: " << kodeJabatan << endl;

    calculateSalary(golongan, kodeJabatan, pinjaman);

    return 0;
}
