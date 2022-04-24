#include <iostream>
#include <string>

int main()
{
    std::string MyName{};
    std::string MyAge{};
    std::cout << "Enter your full name:\n";
    std::cin >> MyName;
    std::cout << "Enter your age:\n";
    std::cin >> MyAge;
    std::cout << "Hello " << MyName << " You are " << MyAge << " years old.";
    return 0;
}
