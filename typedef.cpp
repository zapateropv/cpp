#include <iostream>

//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main (){

    //typedef = reserved keyword used to create an additional name 
    //          (alias) for another data type.
    //          New identifier for an existing type
    //          Helps with readability and reduces typos

    text_t firstName = "Bro";
    number_t age = 10;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}