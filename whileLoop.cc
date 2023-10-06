#include <iostream>
#include <array>

int main()
{
    int work_items = 10;
    while (work_items > 0)
    {
        std::cout << "Work items: " << work_items << '\n';
        work_items--;
    }

    work_items = 10;
    do
    {
        std::cout << "Work items: " << work_items << '\n';
    } while (work_items > 0);

    return 0;
}