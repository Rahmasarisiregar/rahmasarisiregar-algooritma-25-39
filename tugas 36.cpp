#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// Fungsi untuk menghitung gaji pokok
int pokok(int jam) {
    return jam * 2000;
}

// Fungsi untuk menghitung uang lembur
int lembur(int jam) {
    if (jam > 7)
        return (jam - 7) * 2000 * 1.5;
    return 0;
}

// Fungsi untuk menghitung uang makan
int makan(int jam) {
    if (jam > 8 && jam <= 10)
        return 1500;
    else if (jam > 10)
        return 2500;
    return 0;
}

// Fungsi untuk menghitung jasa lembur
int jasa(int jam) {
    if (jam >= 9)
        return 3000;
    return 0;
}

// Fungsi utama untuk menghitung total gaji
int totalGaji(int jam) {
    int gajiPokok = pokok(jam);
    int uangLembur = lembur(jam);
    int uangMakan = makan(jam);
    int jasaLembur = jasa(jam);

    return gajiPokok + uangLembur + uangMakan + jasaLembur;
}

// Fungsi utama program
int main() {
    int jamKerja;

    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    int gajiPokok = pokok(jamKerja);
    int uangLembur = lembur(jamKerja);
    int uangMakan = makan(jamKerja);
    int jasaLembur = jasa(jamKerja);
    int gajiTotal = totalGaji(jamKerja);

    cout << "Gaji Pokok      : Rp " << gajiPokok << endl;
    cout << "Uang Lembur     : Rp " << uangLembur << endl;
    cout << "Uang Makan      : Rp " << uangMakan << endl;
    cout << "Jasa Lembur     : Rp " << jasaLembur << endl;
    cout << "Total Gaji      : Rp " << gajiTotal << endl;

    return 0;
}
