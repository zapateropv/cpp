#include <iostream>


int main ()
{

    //nested loop = loop inside another loop

    int rows;
    int columns;
    std::string symbol;

    std::cout << "How many rows: ";
    std::cin >> rows;

    std::cout << "How many columns: ";
    std::cin >> columns;

    std::cout << "Enter a symbol: ";
    std::cin >> symbol;





    for(int i = 1; i <= rows; i++)
    {

        for(int j = 1; j <= columns; j++)
        {
            std::cout << symbol <<  ' ';
        }

        std::cout << '\n';
    }

    return 0;
}