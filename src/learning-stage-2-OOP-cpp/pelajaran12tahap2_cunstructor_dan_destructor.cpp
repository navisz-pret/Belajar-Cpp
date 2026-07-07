#include <iostream>
#include <string>

class Buku {
public:
    std::string judul;

    // Constructor: Dijalankan saat objek DIBUAT
    Buku(std::string namaBuku) {
        judul = namaBuku;
        std::cout << "Constructor: Buku '" << judul << "' telah dibuat." << std::endl;
    }

    // Destructor: Dijalankan saat objek DIHAPUS/KELUAR DARI SCOPE
    ~Buku() {
        std::cout << "Destructor: Buku '" << judul << "' dihapus dari memori." << std::endl;
    }
};

int main() {
    std::cout << "--- Awal program ---" << std::endl;

    {
        // Objek dibuat di sini
        Buku buku1("Pemrograman C++");
        std::cout << "Sedang membaca buku..." << std::endl;
    } // <--- Objek 'buku1' keluar dari lingkup (scope) kurung kurawal ini, Destructor otomatis jalan!

    std::cout << "--- Akhir program ---" << std::endl;

    return 0;
}