#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int[]> ptr(new int[10]);
    for(int i = 0;i<10;i++) {
        ptr[i] = i*i;
    }
    std::cout << ptr[4] << '\n';
    std::cout << ptr[7] << '\n';

    // Returns a unique pointer 
    // Requires the number of elements
    auto ptr2 = std::make_unique<int[]>(10);
    for(int i = 0;i<10;i++) {
        ptr2[i] = i*i*i;
    }

    std::cout << ptr2[3] << '\n';
    std::cout << ptr2[5] << '\n';

    return 0;
}