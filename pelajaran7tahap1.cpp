#include <iostream>
#include <string> // buat menggunakan string.
using namespace std;

int main() {
    string nama;
    int umur;

    cout << "masukan nama anda: " ;
    getline(cin, nama); // untuk membaca input nama yang mungkin menggunakan spasi.
    cin.ignore()//membersihkan sisa enter di memori
    cout << "masukan umur anda: ";
    cin >> umur; // untuk membaca input umur.

    cout << "halo " << nama << ", umur mu " << umur << " tahun." << endl; // untuk menampilkan output dengan format yang benar.
  
    return 0;
}
