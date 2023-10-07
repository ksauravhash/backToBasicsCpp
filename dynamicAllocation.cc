#include <iostream>

int main() {
    int *int_ptr = new int[10];
    int_ptr[0] = 242;
    std::cout << "Value: " << *int_ptr << "\n"; 
    std::cout << "Address: " << int_ptr << "\n"; 
    delete int_ptr;
    return 0;
}