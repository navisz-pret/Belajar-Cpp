#include <iostream>
using namespace std;

int main() {
    int pilihan, a, b; // kita bikin kalkulator sedernaha pake SWITCH-CASE.

    cout << "kalkulator sederhana 1.2" << endl;
    cout << "1. penjumlahan\n2. pengurangan\n3. perkalian\n4. pembagian\n5. keluar" << endl;
    cout << "masukan pilihan: ";
    cin >> pilihan;

    //ambil input angka sekali saja.
    cout << "masukan angka pertama: ";
    cin >> a;
    cout << "masukan angka kedua : ";
    cin >> b;

    switch (pilihan) {
        case 1:
            cout << "hasil penjumlahan: " << a + b << endl;
            break;
            case 2:
                cout << "hasil pengurangan: " << a - b << endl;
                break;
                case 3:
                    cout << "hasil perkalian: " << a * b << endl;
                    break;
                    case 4:
                    if (b != 0) {
                        cout << "hasil pembagian: " << a / b << endl;
                             }else {
                            cout << "error: tidak bisa dibagi nol." << endl
          << "silahkan masukan angka kedua yang bukan bilangan nol!!." << endl;
            }
        }      
    return 0;
    }