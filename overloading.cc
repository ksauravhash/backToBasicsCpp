#include <iostream>
#include <array>

void print_array(std::array<int, 3> arr)
{
    for (auto value : arr)
    {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

void print_array(std::array<float, 3> arr)
{
    for (auto value : arr)
    {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::array<int, 3> my_array_1{1, 2, 3};
    print_array(my_array_1);
    std::array<float, 3> my_array_2{4.14, 5.1, 6.4};
    print_array(my_array_2);
}