#include <iostream>
// Go to Debug->Step into to start debugging, when yellow arrow appears, keep stepping into to move to the next
// part of the program, do not go to next line, use step into. Also, if debugger says "file" or something, make sure your
// file path has no spaces in it ex- ./git project/project/file.cpp will not work but ./git_project/project/file.cpp will work!
void Print_int(int a)
{
    std::cout << a;
    return;
}

int main ()
{
    Print_int(5);
    return 0;
}
