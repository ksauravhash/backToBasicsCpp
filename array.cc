#include <iostream>
#include <array>

int main()
{
    // Can work without the equal operator
    std::array<int, 3> myArr = {44, 2, 11};

    std::cout << myArr.at(0) << '\n';
    // First Element in the array
    std::cout << myArr.front() << '\n';
    // Second Element in the array

    // Fills every element with 33
    myArr.fill(33);

    std::cout << myArr.back() << '\n';

    std::cout << myArr.size() << '\n';

    return 0;
}