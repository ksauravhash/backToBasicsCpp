#include <iostream>
#include <array>

int main()
{
    // Basic for loop
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Iteration: " << i << '\n';
    }

    std::array<int, 5> myArr = {42, 3, 1, 63, 12};

    // Ranged based for loop
    for (int value : myArr)
    {
        std::cout << value << '\n';
    }

    return 0;
}