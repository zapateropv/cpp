#include <iostream>
using namespace std;

void swap(string &x, string &y);

int main()
{

    string x = "water";
    string y = "fire";

    swap(x,y);
    cout << "x = " << y << '\n';
    cout << "y = " << x << '\n';

    return 0;
}


void swap(string &x, string &y)
{

    string temp;
    temp = x;
    x = y;
    y = temp;

}