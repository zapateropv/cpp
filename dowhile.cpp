#include <iostream>

int main ()
{

    // do while loop = do block of code while the condition is true
    //                  THEN REPEAT AGAIN IF CONDITION IS TRUE 

    int number;

    do
    {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }
    while(number < 0);

    std::cout << "Result is: " << number;
    

    return 0;
}