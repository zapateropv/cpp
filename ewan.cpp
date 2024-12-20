#include <iostream>

using namespace std;
int main() {
   //declaration
    int num1;
    int num2;
    int num3;
    int result;
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Enter third number: ";
    cin >> num3;
    //process
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }
    //output
    cout << "largest number is: " << result;
    
    
    return 0;
}