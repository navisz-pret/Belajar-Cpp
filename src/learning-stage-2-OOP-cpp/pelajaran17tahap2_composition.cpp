#include <iostream>
#include <vector>
#include <memory>

using namespace std;

// Kontrak Komponen (Interface dari Pelajaran 16)
class IModul {
public:
    virtual void aktifkan() = 0;
    virtual ~IModul() {}
};

// Komponen-komponen
class Radar : public IModul {
public:
    void aktifkan() override { cout << "[Radar] Memindai radius 10km..." << endl; }
};

class Meriam : public IModul {
public:
    void aktifkan() override { cout << "[Meriam] Target terkunci, menembak!" << endl; }
};

 class mesin : public IModul {
    public:
    void aktifkan() override { cout << "[mesin] mesin menyala, kapal siap berlayar!" << endl; }
 };
// KELAS UTAMA: Kapal (Komposisi)
class Kapal {
private:
    // Kapal "memiliki" banyak modul (Komposisi)
    vector<unique_ptr<IModul>> gudangModul;

public:
    void pasangModul(unique_ptr<IModul> m) {
        gudangModul.push_back(move(m));
    }

    void jalankanSistem() {
        cout << "--- Sistem Kapal Aktif ---" << endl;
        for (auto& modul : gudangModul) {
            modul->aktifkan();
        }
    }
};

int main() {
    Kapal kapalPerang;

    // Perakitan: Kita pasang komponen ke kapal
    kapalPerang.pasangModul(make_unique<Radar>());
    kapalPerang.pasangModul(make_unique<Meriam>());
    kapalPerang.pasangModul(make_unique<mesin>());

    // Jalankan
    kapalPerang.jalankanSistem();

    return 0;
}