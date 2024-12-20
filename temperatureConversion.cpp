#include <iostream>

int main ()
{

    double temp;
    std::string unit;
    double result;

   
    std::cout << "F = Fahrenheit \n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: \n";
    std::cin >> unit;

    if(unit == "f" || unit == "F")
    {
      std::cout << "Enter a temperature: ";
      std::cin >> temp;

      double result = (temp * 9/5) + 32;  
      std::cout << "The result is: " << result << " F ";
    }
    else if(unit == "c" || unit == "C")
    {
      std::cout << "Enter a temperature: ";
      std::cin >> temp;

      int result = (temp - 32) * 9/5;  
      std::cout << "The result is: " << result << " C ";  
    }
    else{
        std::cout << "Enter a valid unit ! ";
    }



    



    return 0;
}