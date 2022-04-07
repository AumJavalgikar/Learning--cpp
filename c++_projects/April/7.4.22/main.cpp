#include <iostream>

int main ()
{
    int x{1};
    std::cout << x << " ";
    x = x + 2;
    std::cout << x << " ";
    x = x + 10;
    std::cout << x << " ";
    return 0;
}
