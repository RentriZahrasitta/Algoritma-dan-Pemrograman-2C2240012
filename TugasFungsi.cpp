#include <iostream>
using namespace std;

// Fungsi untuk menghitung a^b (a pangkat b)
int f (int x) {
    int hasil = x * x - 2 * x + 5;
    return hasil;
}

int main() {
    int A, B;

    // Meminta input dari pengguna
    cout << "Masukkan A: ";
    cin >> A;
    cout << "Masukkan B: ";
    cin >> B;

    // Memanggil fungsi hitungPangkat dan menampilkan hasilnya
   for ( int x =A; x <= B; x++) {
       cout << "f("<< x <<") =" << f(x) << endl;
   }
    return 0;
}
