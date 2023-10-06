#include <iostream>

/*
   iostream - Input Output Stream
   cout - Characters out

   https://en.cppreference.com/w/cpp/io/cout
*/

int main()
{
   std::cout << "Hello, World!\n";
   return 0;
}

/*
   g++ -E print.c -o print.ii
   Doesn't compile, assemble or link. Only preprocesses.
*/