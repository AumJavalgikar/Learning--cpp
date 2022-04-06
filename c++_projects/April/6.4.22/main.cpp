#include <iostream>
// Right click anywhere on a statement in your code and click run to cursor
// Set breakpoints and then debug->Start/Continue
void Print_int(int a)
{
    std::cout << a;
    return;
}

int main ()
{
    Print_int(5);
    Print_int(6);
    Print_int(7);
    return 0;
}
