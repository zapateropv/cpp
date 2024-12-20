#include <iostream>

using namespace std;

int main ()
{

    //pointers = variables that stores a memory address of other variable
    //          sometimes it's easier to work with an address

    //          & address-of operator
    //          * dereference operator

    string name = "bro";
    string *pName = &name;

    int nums[5] = {1,2,3,4,5,};
    int *pNums = nums;


    cout << *pName;
    cout << pNums;


    return 0;
}