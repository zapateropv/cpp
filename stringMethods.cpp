#include <iostream>

int main ()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //name.length();
    //name.empty();
    //name.clear()
    //name.append("@gmail.com")
    //name.at(1)
    //name.insert(0,"@")
    //name.find("a")
    //name.erase(0, 3)

    std::cout << name.find("a");

    return 0;
}