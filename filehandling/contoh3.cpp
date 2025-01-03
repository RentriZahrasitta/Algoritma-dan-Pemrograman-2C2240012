#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("contoh.txt", ios::app);
    if (outFile.is_open()) {
        outFile << "Menambahkan baris baru ke file.\n";
        outFile.close();
        cout << "Data berhasil ditambahkan ke file.\n";
    } else {
        cout << "Gagal membuka file.\n";
    }
    return 0;
}
