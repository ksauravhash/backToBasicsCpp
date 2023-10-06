#include <iostream>
#include <array>

/*
    Newer versions (c++ 20) support auto instead of the template
*/
template <typename T>
void print_array(T arr)
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
    std::array<float, 3> my_array_2{4.14, 5.1, 6.4};
    print_array<std::array<int, 3>>(my_array_1);
    // No need to specify it's type
    print_array(my_array_2);
    return 0;
}