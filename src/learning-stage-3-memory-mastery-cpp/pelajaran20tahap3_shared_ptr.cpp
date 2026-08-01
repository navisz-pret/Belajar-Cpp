#include <iostream>
#include <memory>
#include <string>

class TargetData {
private:
    std::string coordinates;
public:
    TargetData(std::string coord) : coordinates(coord) {
        std::cout << "[Target] Data koordinat " << coordinates << " dikunci di memori.\n";
    }
    ~TargetData() {
        std::cout << "[Target] Data koordinat dibersihkan dari memori.\n";
    }
    void showCoord() {
        std::cout << ">> Koordinat Target: " << coordinates << "\n";
    }
};

int main() {
    // Membuat shared_ptr dengan reference count = 1
    std::shared_ptr<TargetData> sharedTarget = std::make_shared<TargetData>("60°12'N 24°55'E");

    {
        // Radar ikut memegang data ini (reference count = 2)
        std::shared_ptr<TargetData> radarSystem = sharedTarget;
        std::cout << "Jumlah pemilik aktif (use_count): " << sharedTarget.use_count() << "\n";
        radarSystem->showCoord();
    } // radarSystem keluar scope, reference count kembali jadi 1. Memori BELUM dihapus.

    std::cout << "Keluar dari blok radar. use_count: " << sharedTarget.use_count() << "\n";
    
    sharedTarget->showCoord();

    // Saat main selesai, sharedTarget hancur (use_count = 0), memori otomatis bersih.
    return 0;
}