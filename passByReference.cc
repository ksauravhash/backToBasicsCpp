#include <iostream>
#include <vector>

void addElements(std::vector<int> &vect, int N)
{
    for (int i = 0; i < N; i++)
    {
        vect.push_back(i);
    }
}

int main()
{
    std::vector<int> vect;
    addElements(vect, 10);

    for(auto value: vect){
        std::cout << vect << ' ';
    }
    std::cout << '\n';
    return 0;
}