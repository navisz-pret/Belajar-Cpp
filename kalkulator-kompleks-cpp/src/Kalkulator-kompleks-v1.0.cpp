#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double a, b;// agar bisa mengitung desimal

    cout << "___ kalkulator sederhana 1.2 ---" << endl;
    cout << "1. penjumlahan\n2. pengurangan\n3. perkalian\n4. pembagian\n5. keluar" << endl;
    cout << "masukan pilihan: ";
    cin >> pilihan;
    

    if (pilihan >= 1 && pilihan <= 4) {
        cout << "masukan angka pertama : ";
        cin >> a;
        cout << "masukan angka kedua : ";
        cin >> b;
    }

    switch (pilihan) {
        case 1: cout << "hasil penjumlahan :  " << a + b << endl; break;
        case 2: cout << "hasil pengurangan : " << a - b << endl; break;
        case 3: cout << "hasil perkalian : " << a * b << endl; break;// ini untuk penjumlahan, pembagian, pengurangan, dan perkalian.
        case 4:
         if (b != 0) {cout << " hasil pembagian : " << a / b << endl; break;
         }else{ cout << "error: tidak bisa dibagi 0" << endl; break;//agar tidak error saat di bagi nol
         }
        case 5: cout << "terimakasih" << endl; break;
        default: cout << "pilihan tidak valid" << endl;// agar saat user mengetik angka selain 1-5, program tidak stuck

    }
    return 0;
}
