#include <iostream>
#define my_name "Slim Shady"
#define JOE

int main()
{
    std::cout << "My name is huh\n" << "My name is what\n" << "My name is who\n";
    std::cout << "Chika Chika " << my_name;
    #ifdef JOE
    std::cout << "\nJoe is defined";
    #endif

    #ifdef BOB
    std::cout << "BOB is defined";
    #endif
    return 0;
}
