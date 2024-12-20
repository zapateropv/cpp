#include <iostream>
using namespace std;


int main (){

string name;

cout << "What is your name? ";
cin >> name;

cout << "Hello there. " << name << '\n';

int num1 = 10;
int num2 = 5;
int shplus;

cout << "ARITHMETIC OPERATORS" << '\n';
cout << "Sum: " << num1 + num2 << '\n';
cout << "Difference: " << num1 - num2 << '\n';
cout << "Product: " << num1 * num2 << '\n';
cout << "Quotient: " << num1 / num2 << '\n';
cout << "Remainder: " << num1 % num2 << '\n';

num1 += 5;
num1 = num1 + 5;
num2 -= 5;

cout << "SHORTHAND ASSIGNMENT OPERATORS" << '\n';
cout << "Sh Plus: " << num1 << '\n';
cout << "Sh Minus: " << num2 << '\n';
cout << "Operator Precedence: " << 10/5+3*2 << '\n';




}