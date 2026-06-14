#include <iostream> 
using namespace std;

int main() {
    int umur = 16;

    if (umur >= 18) {
        cout << "harus punya ktp" << endl;// jika punya ktp harus 18+
    } else {
        cout << "belum cukup umurnya mas" << endl;// kalo dibawah 18 tahun berarti belum bisa
    }
    return 0;
}
