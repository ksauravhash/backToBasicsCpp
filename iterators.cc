#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> myArr = {2, 3, 4, 5, 6};
    for (auto itr = myArr.begin(); itr < myArr.end(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << '\n';
    // Iterating in reverse using rbegin and rend
    for (auto itr = myArr.rbegin(); itr < myArr.rend(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << "\n";
    // Iterating can also be offsetted
    for (auto itr = myArr.rbegin() + 2; itr < myArr.rend(); itr++)
    {
        std::cout << *itr << " ";
    }

    std::cout << "\n";

    return 0;
}