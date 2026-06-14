#include <iostream>
#include <string>
using namespace std;

class Mobil {
    public:
        string nama;
        int kecepatan;

        //ini adalah constructor
        Mobil(string namabaru, int kecepatanbaru) {
            nama = namabaru;
            kecepatan = kecepatanbaru;
        }

        void  sapa() {
            cout << "halo ini mobil dari tim f1 " << nama << " dan kecepatannya " << kecepatan << endl;

        }
};
    int main () {
        // sekarang ini buat objek dan mengisi data biar bisa dibaca constructor, jadi 
        // kita buat objeknya dulu baru kita isi datanya dengan constructor, jadi kita buat objeknya dengan 
        // nama mobilpertama, mobilkedua, mobilketiga, mobilkeempat, dan mobilkelima, lalu kita isi datanya dengan
        // constructor yang sudah kita buat tadi
        Mobil mobilpertama("Ferrari", 200);
        Mobil mobilkedua("Audi", 220);
        Mobil mobilketiga("McLaren", 250);
        Mobil mobilkeempat("Redbull", 300);
        Mobil mobilkelima("Mercedes-benz", 400);

        mobilpertama.sapa();
        mobilkedua.sapa();
        mobilketiga.sapa();
        mobilkeempat.sapa();
        mobilkelima.sapa();// ini baru namanya MASTERPIECE.

        return 0;
    }
