#include <iostream>


int main ()
{

     //  while loop = do block of code while the condition is true


    std::string name;

    while(name.empty())
    {
        std::cout<< "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << name;

    return 0;
}