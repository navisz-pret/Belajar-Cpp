#include <iostream>
#include <vector>
using namespace std;
// Kelas dasar (Base Class)
class Kapal {
public:
    // Gunakan 'virtual' agar fungsi ini bisa di-override oleh kelas anak
    virtual void tembakMeriam() {
        cout << "Kapal menembakkan meriam!" << ::endl;
    }
    virtual void karam() {
        cout << "Kapal karam!" << ::endl;
    }
    virtual ~Kapal() {} // Selalu gunakan virtual destructor
};

// Kelas turunan 1: Destroyer (Cepat tapi meriam kecil)
class Destroyer : public Kapal {
public:
    void karam() override {
        cout << "[Destroyer]: kapal karam!" << ::endl;
    }
};

// Kelas turunan 2: Battleship (Lambat tapi meriam raksasa)
class Battleship : public Kapal {
public:
    void tembakMeriam() override {
        cout << "[Battleship]: Menembakkan peluru 406mm yang menghancurkan kapal destroyer!" << ::endl;
    }
};

int main() {
    // Kita simpan pointer ke kelas dasar (Kapal)
    ::vector<Kapal*> armada;

    armada.push_back(new Destroyer());
    armada.push_back(new Battleship());

    // Polymorphism terjadi di sini:
    // Meskipun tipe pointer-nya sama (Kapal*), perilaku yang muncul berbeda-beda!
    for (Kapal* k : armada) {
        k->tembakMeriam();
        k->karam();
    }

    // Pembersihan memori (Penting!)
    for (Kapal* k : armada) {
        delete k;
    }

    return 0;
}