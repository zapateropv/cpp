#include <iostream>
#include <cmath>

int main (){
    
    double firstNum;
    double secondNum;
    std::cout << "Enter first Number ";
    std::cin >> firstNum;

    std::cout << "Enter second Number ";
    std::cin >> secondNum;

    double result = sqrt(pow(firstNum,2) + pow(secondNum,2));

    std::cout << "Result is " << result;

    return 0;
}