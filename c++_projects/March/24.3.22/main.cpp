#include <iostream>

int add(int a, int b);

int main()
{
    int a{ };
    int b{ };
    std::cout << "Please Enter two values:\n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "addition of numbers is = " << add(a, b);
    return 0;
}
