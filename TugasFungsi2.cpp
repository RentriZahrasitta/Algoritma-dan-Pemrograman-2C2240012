#include <iostream>
using namespace std;

void tampilanMenu() {
    cout << "Menu Pilihan Jenis Nilai:" << endl;
    cout << "1. Tugas" << endl;
    cout << "2.  UTS" << endl;
    cout << "3.  UAS" << endl;
}

// Fungsi untuk menghitung nilai akhir berdasarkan bobot
float hitungNilaiAkhir (float nilaiTugas, float nilaiUTS, float nilaiUAS) {
    return (nilaiTugas * 0.3) + (nilaiUTS * 0.3) + (nilaiUAS * 0.4);
}

int main() {
    float nilaiTugas, nilaiUTS, nilaiUAS;

    // Menampilkan menu
    tampilanMenu();

    // Meminta pengguna memasukkan nilai
    cout << "Masukkan nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan nilai UAS: ";
    cin >> nilaiUAS;

    // Menghitung nilai akhir
    float nilaiAkhir = hitungNilaiAkhir(nilaiTugas, nilaiUTS, nilaiUAS);

    // Menampilkan nilai akhir
    cout << "Nilai Akhir: " << nilaiAkhir << endl;

    return 0;
}
