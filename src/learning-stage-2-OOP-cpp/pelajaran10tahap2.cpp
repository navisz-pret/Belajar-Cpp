#include <iostream>
#include <string>
using namespace std;

// ini adalah class
class mobil {
    public:
     string nama;
     int kecepatan;

        void info() {
            cout << "Nama mobil: " << nama << endl;
            cout << "Kecepatan mobil: " << kecepatan << " km/h" << endl;
        }       
};
 int main() {
    // membuat objek dari class mobil
    mobil mobil1;
    mobil1.nama = "Toyota";
    mobil1.kecepatan = 120;

    // memanggil method info untuk menampilkan informasi mobil
    mobil1.info();

    return 0;
}