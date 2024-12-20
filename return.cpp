#include <iostream>

double square (double length);
double cube (double length);

int main () 
{

    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << area << '\n';
    std::cout << volume << '\n';


    return 0;
}

double square (double length)
{
    
    return length * length;
}

double cube (double length)
{
    
    return length * length * length;
}