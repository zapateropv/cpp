#include <iostream>

int main ()
{
    //ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

   int number = 10;
   number % 2 == 1 ? std::cout << "Odd" : std::cout << "Even";


    return 0;
}