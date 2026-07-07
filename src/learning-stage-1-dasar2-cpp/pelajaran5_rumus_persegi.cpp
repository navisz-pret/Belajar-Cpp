#include <iostream>
using namespace std;

    void hitungLuasPersegi(int sisi) {
        int luas = sisi * sisi;
        cout << "Luas persegi dengan sisi " << sisi << " adalah " << luas << "cm2" << endl;
    }

    int main() {
        // buat manggil nama.
        hitungLuasPersegi(6);
        
        return 0;
    }
