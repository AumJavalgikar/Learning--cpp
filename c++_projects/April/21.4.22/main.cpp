#include <iostream>

bool isEqual(int a, int b)
{
    return (a == b);
}

int main()
{
    int a{};
    int b{};
    std::cout << std::boolalpha;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    std::cout << "Enter another integer: ";
    std::cin >> b;
    std::cout << a << " equals " << b << ": " << isEqual(a, b);
    return 0;
}
