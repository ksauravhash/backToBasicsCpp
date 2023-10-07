#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int[]> ptr(new int[10]);
    auto ptr2 = ptr;
    auto ptr3 = ptr;
    // use_count returns the number of shared pointer co-managing the resource
    std::cout << "Reference count: " << ptr.use_count() << '\n';

    //Supported by the modern (c++ 20)
    auto ptr4 = std::make_shared<int[]>(10);
    auto ptr5  = ptr4;
    std::cout << "Reference count: " << ptr4.use_count() << '\n';
    
    return 0;
}