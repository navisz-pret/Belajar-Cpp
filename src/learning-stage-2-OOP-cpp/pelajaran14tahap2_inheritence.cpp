#include <iostream>
#include <string>

using namespace std;

// --- Base Class (Induk) ---
class Kapal {
protected:
    string nama;
    int hullIntegrity;

public:
    Kapal(string n, int h) : nama(n), hullIntegrity(h) {}

    // Fungsi 'virtual' memungkinkan kelas anak untuk mengganti/override perilaku ini
    virtual void kenaTembak(int damage) {
        hullIntegrity -= damage;
        cout << nama << " terkena damage! Sisa Hull: " << hullIntegrity << endl;
    }
};

// --- Derived Class (Anak) ---
class KapalPerang : public Kapal {
private:
    int armorPlating; // Fitur khusus hanya untuk kapal perang

public:
    KapalPerang(string n, int h, int armor) : Kapal(n, h), armorPlating(armor) {}

    // Melakukan Override
    void kenaTembak(int damage) override {
        // Logika kapal perang: Armor menyerap damage
        int damageSetelahArmor = damage - armorPlating;
        if (damageSetelahArmor < 0) damageSetelahArmor = 0;
        
        hullIntegrity -= damageSetelahArmor;
        cout << "[WARSHIP] " << nama << " menahan serangan dengan armor! Sisa Hull: " << hullIntegrity << endl;
    }
};

int main() {
    Kapal kargo("RFA War Nizam", 100);
    KapalPerang battleship("HMS Inflexible", 200, 20); // 20 adalah nilai armor

    kargo.kenaTembak(30);       // Output: damage normal
    battleship.kenaTembak(30);  // Output: damage berkurang karena armor

    return 0;
}