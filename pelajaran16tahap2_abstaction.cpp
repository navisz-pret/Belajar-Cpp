#include <iostream>
#include <vector>

using namespace std;

// --- KONTRAK (Abstract Class) ---
class Imodul {
public:
    // "= 0" artinya: "Siapapun yang pakai kontrak ini, WAJIB punya fungsi modul!"
    virtual void aktifkan() = 0; 
    virtual ~Imodul() {}
};

// --- IMPLEMENTASI (Kapal Diesel) ---
class radar : public Imodul {
public:
    void aktifkan() override {
        cout << "radar kapal siap!!" << endl;
    }
};

// --- IMPLEMENTASI (Kapal Jet) ---
class meriam : public Imodul {
public:
    void aktifkan() override {
        cout << "meriam siap menembak!!" << endl;
    }
};

 class torpedo : public Imodul{
    public:
    void aktifkan() override {
        cout << "torpedo siap diluncurkan!" << endl;
    }
 };


int main() {
    // Kita bisa simpan berbagai jenis kapal dalam satu wadah
    vector<Imodul*> components;

    components.push_back(new radar());
    components.push_back(new meriam());
    components.push_back(new torpedo());

    // Eksekusi semua kapal tanpa peduli jenis mesinnya
    for (auto kapal : components) {
        kapal->aktifkan(); 
    }

    // Pembersihan (Nanti kita akan belajar cara otomatis di Memory Management)
    for (auto kapal : components) {
        delete kapal;
    }

    return 0;
}