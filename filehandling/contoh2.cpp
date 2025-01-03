#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("contoh.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Gagal membuka file.\n";
    }
    return 0;
}
