#include <iostream>
#include <vector>

void print(std::vector<int> arr)
{
    for (auto value : arr)
    {
        std::cout << value << ' ';
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> myVect{1, 2, 3, 4, 5};
    print(myVect);
    myVect.push_back(6);

    print(myVect);
    myVect.pop_back();

    print(myVect);

    std::vector<int> myVect2;
    // Reserves space for 10 elements ahead of time
    myVect2.reserve(10);
    // Capacity doubles whenever it runs out of space
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Size: " << myVect2.size() << '\n';
        std::cout << "Capacity:" << myVect2.capacity() << '\n';
        myVect2.push_back(i);
    }

    // Can also shrink to the amount of memory taken by the elements
    // Use - shrink_to_fit
    return 0;
}