#include <iostream>
using namespace std;

int main() {
    int nilai = 100;
    int nilai2 = 200;
    int *ptr = &nilai2; // pointer ptr untuk menyimpan alamat dari variabel nilai2.
    int *ptr2 = &nilai; // pointer ptr2 untuk menyimpan alamat dari variabel nilai.

    //tanda & (ampersand) digunakan untuk mengambil ALAMAT dari suatu variabel.
    cout << "nilai: " << nilai << endl;
    cout << "alamat memori dari 'nilai': " << &nilai << endl;
    cout << "nilai2: " << nilai2 << endl;
    cout << "alamat memori dari 'nilai2': " << &nilai2 << endl;
    //tanda * (asterisk) digunakan untuk mengambil NILAI yang ditunjuk oleh pointer.
    cout << "nilai yang ditunjuk oleh pointer: " << *ptr << endl;
    cout << "nilai yang ditunjuk oleh pointer2: " << *ptr2 << endl;

    *ptr = 999; // mengubah nilai yang ditunjuk oleh pointer ptr menjadi 999.
    cout << "nilai2 setelah diubah lewat pointer: " << nilai2 << endl;
    
return 0;
}