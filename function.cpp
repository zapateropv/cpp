#include <iostream>

void happyBirthday(std::string name);

int main ()
{

    //function = a block of reusable code
    std::string name = "Bro";
    happyBirthday(name);



    return 0;
}

void happyBirthday(std::string name)
{
    std::cout << "Happy Birthday " << name << '\n';
    std::cout << "Happy Birthday \n";
    std::cout << "Happy Birthday \n";
}