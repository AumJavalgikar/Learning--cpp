#include <iostream>
#define my_name "Slim Shady"
#define JOE

int main()
{
    std::cout << "My name is huh\n" << "My name is what\n" << "My name is who\n";
    std::cout << "Chika Chika " << my_name;

    #ifdef JOE                                  //Check if JOE is defined, if true, execute block of code, else ignore
    std::cout << "\nJoe is defined";
    #endif

    #ifdef BOB                                  //Check if BOB is defined, if true, execute block of code, else ignore
    std::cout << "BOB is defined";
    #endif

    #ifndef BOB                                 //Check if BOB is not defined, if true, execute block of code, else ignore
    std::cout << "BOB is not defined\n";
    #endif
    return 0;
}
