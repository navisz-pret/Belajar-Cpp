#include <iostream>
#include <memory>

class meriam {
public:
    meriam() { std::cout << "Meriam aktif !" << std::endl; }
    ~meriam() { std::cout << "meriam menembak !" << std::endl; }
};

int main() {
    {
        auto m = std::make_unique<meriam>();
        std::cout << "meriam reload !" << std::endl;
    } // Di sini m akan mati otomatis
    
    std::cout << "tembakan selesai." << std::endl;
    return 0;
}