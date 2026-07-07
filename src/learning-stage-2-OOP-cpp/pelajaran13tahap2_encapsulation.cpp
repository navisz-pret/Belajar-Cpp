#include <iostream>
#include <string>
using namespace std;

class Buku {
private:
    string judul; // Data tersembunyi

public:
    // SETTER: Hanya untuk mengisi
    void setJudul(string j) {
        judul = j;
    }

    // GETTER: Hanya untuk mengambil/menampilkan
    string getJudul() {
        return judul;
    }
};

int main() {
    Buku b;
    
    // Mengisi data
    b.setJudul("Pemrograman C++"); 
    
    // Mengambil data untuk ditampilkan
    cout << "Judul buku: " << b.getJudul() << endl; 
    
    return 0;
}
