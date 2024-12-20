#include <iostream>


int main (){

    char operation;
    double firstNum;
    double secondNum;
    double result;

    std::cout << "Enter First Number: ";
    std::cin >> firstNum;

    std::cout << "Enter Second Number: ";
    std::cin >> secondNum;

    std::cout << "Enter Operator: + - / * ";
    std::cin >> operation;
  

    switch(operation)
    {
        case '+': result = firstNum + secondNum;
                  std::cout << result;  
        break;

        case '-': result = firstNum - secondNum;
                  std::cout << result;  
        break;

        case '/': result = firstNum / secondNum;
                  std::cout << result;  
        break;

        case '*': result = firstNum * secondNum;
                  std::cout << result;  
        break;

        default: 
        std::cout << "Enter a valid number or operator ! ";
    }







    return 0;
}