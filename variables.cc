#include <iostream>

int main()
{
    // Bad practice to have uninitialized variables.
    // Compiler automically deducts the datatype

    // auto var; // wont't work
    auto var1 = 10.5;
    auto var2 = 20.7;
    auto var3 = var1 + var2;

    std::cout << var3 << '\n';
    return 0;
}