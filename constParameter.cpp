#include <iostream>

using namespace std;

void printInfo(const string name,const int age);
int main ()
{

    //const parameter = parameter that is effectively read only 
    //                  code is more secure & conveys intent
    //                  useful for references and pointers

    string name = "bro";
    int age = 5;

    printInfo(name, age);

    return 0;
}

void printInfo(const string name,const int age)
{
    cout << name << '\n';
    cout << age;
}