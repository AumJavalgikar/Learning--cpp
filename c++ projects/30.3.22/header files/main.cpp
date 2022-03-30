#include <iostream>
#include "add.h"


int main ()
{
    int a{ };
    int b{ };
    std::cout << "Please enter a number\n";
    std::cin >> a;
    std::cout << "Please enter another number:\n";
    std::cin >> b;
    int addition = add(a, b);
    std::cout << "Addition is : " << addition << "\n";
    return 0;
}
