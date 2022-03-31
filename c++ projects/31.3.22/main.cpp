#include <iostream>
#include "module 1.h"

int main ()
{
    int b {get_user_input()};
    int c {get_user_input()};
    std::cout << b << " Divided by " << c << " is " << b / c;
    return 0;
}
