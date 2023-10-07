#include <iostream>
#include <algorithm>
#include <array>

void printArray(auto arr)
{
    for (auto x : arr)
    {
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::array<int, 5> myArr = {44, 11, 20, 24, 10};
    std::array<int, 5> myArr2 = {50, 40, 22, 60, 5};
    printArray(myArr);
    // Requires first iterator and last iterator
    std::sort(myArr.begin(), myArr.end());

    printArray(myArr);

    printArray(myArr2);
    // Contrained algorithm
    // Doesn't require it to pass the range
    // c++ 20
    std::ranges::sort(myArr2);
    return 0;
}