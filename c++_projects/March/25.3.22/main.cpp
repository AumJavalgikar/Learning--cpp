#include <iostream>

int timestwo(int a)
{
    return a*2;
}

int main()
{
    int a{ };
    std::cout << "Please Enter an Integer:\n";
    std::cin >> a;
    //std::cout << a << " times 2 is " << timestwo(a);
    std::cout << "%d times 2 is %d", a, timestwo(a);
    return 0;
}
