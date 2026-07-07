#include <iostream>
using namespace std;

int main() {
    // kita bikin buat nyimpen nilai siswa.
    int nilaisiswa[19] = {90, 85, 78, 92, 88, 76, 95, 89, 84, 91, 87, 82, 93, 86, 79, 94, 83, 96, 81};
     
    for (int i =0; i < 19; i++) {
        cout << "nilai siswa ke-" << i + 1 << ": " << nilaisiswa[i] << endl;
    }
    // ini buat ngitungnya ya ges ya.
    
    return 0;
}