#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("contoh.txt", ios::app);
    if (outFile.is_open()) {
        outFile << "Ini adalah contoh penulisan file dalam C++.\n";
        outFile << "Rentri.\n";
        outFile.close();
        cout << "Data berhasil ditulis ke file.\n";
    } else {
        cout << "Gagal membuka file.\n";
    }
    return 0; 
    }
