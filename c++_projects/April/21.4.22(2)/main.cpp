#include <iostream>

int main()
{
    int a{ };
    std::cout << "Please Enter a number below 10: ";
    std::cin >> a;
    if (a>=10)
    {
        std::cout << "You knobhead!";
    }
    else
    {
        std::cout << "Thanks!";
    }
    return 0;
}
