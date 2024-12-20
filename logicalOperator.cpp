#include <iostream>


int main ()
{

    // && = check if two conditions are true
    // || = check if atleast one conditions are true
    // ! = reverses the logical state of its operand

    int temp;

    std:: cout << "Enter the temperature: ";
    std:: cin >> temp;

    if(temp <= 0 ||  temp >= 30)
    {
        std:: cout << "The temperature is bad ";
    }
    else
    {
        std:: cout << "The temperature is good ";
    }

    return 0;
}