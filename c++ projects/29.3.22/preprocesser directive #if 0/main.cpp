#include <iostream>

int main()
{
    std::cout << "Still\n";
    #if 0                       //made mistake of using #if0 instead of #if 0 before!!
    std::cout << "not\m";
    #endif
    std::cout << "D.R.E\n";
    return 0;
}
