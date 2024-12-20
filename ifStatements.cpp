#include <iostream>

int main (){

    //if statements = do something if a condition is true; 
    //                if not, then don't do it.

    int age;
    std::cout << "Enter You age: ";
    std::cin >> age;

    if(age >= 18)
    {
        std::cout << "You are legal age ";
    }
    else
    {
        std::cout << "You are a minor "; 
    }


    return 0;
}