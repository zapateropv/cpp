#include <iostream>

void printNum(int num);

int main ()
{
    //Local Variables = declared inside a function or block {}
    //Global Variables = declared outside of all functions

    int num = 1123123123;

    printNum(num);


    return 0;
}


void printNum(int num)
{
    std::cout << num;
}