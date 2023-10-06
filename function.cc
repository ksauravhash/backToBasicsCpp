#include <iostream>
#include <array>

int sum(std::array<int, 3> array)
{
    int sum = 0;
    for (int value : array)
    {
        sum += value;
    }
}

void print_array(std::array<int, 3> arr)
{
    for (int value : arr)
    {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::array<int, 3> my_array_1{1, 2, 3};
    print_array(my_array_1);
    std::array<int, 3> my_array_2{4, 5, 6};
    print_array(my_array_2);

    std::cout << "Sum: " << sum(my_array_1) << '\n';
}