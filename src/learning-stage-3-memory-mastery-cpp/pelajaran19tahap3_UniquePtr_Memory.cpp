#include <iostream>
#include <memory>
#include <string>

class MilitaryModule {
private:
    std::string moduleName;
public:
    MilitaryModule(std::string name) : moduleName(name) {
        std::cout << "[System] Modul " << moduleName << " aktif.\n";
    }
    ~MilitaryModule() {
        std::cout << "[System] Modul " << moduleName << " dimatikan & memori dibersihkan.\n";
    }
    void status() {
        std::cout << ">> " << moduleName << " berjalan dengan efisiensi tinggi.\n";
    }
};

int main() {
    // Membuat beberapa modul dengan unique_ptr
    std::unique_ptr<MilitaryModule> engine = std::make_unique<MilitaryModule>("Engine");
    std::unique_ptr<MilitaryModule> radar = std::make_unique<MilitaryModule>("Radar");
    std::unique_ptr<MilitaryModule> weapon = std::make_unique<MilitaryModule>("WeaponSystem");

    std::cout << "\n--- Simulasi Operasi Sistem ---\n";
    engine->status();
    radar->status();
    weapon->status();
    std::cout << "--- Akhir Simulasi ---\n\n";

    // Tidak perlu 'delete'. Saat keluar dari kurung kurawal 'main',
    // semua modul di atas akan otomatis hancur dengan urutan terbalik.
    return 0;
}