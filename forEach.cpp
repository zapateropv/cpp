#include <iostream>
using namespace std;

int main ()
{
    //foreach loop = loop that ease that traversal over an iterable data set

    int numbers[] = {1,2,3,4,5,6,7};
    
    for(int number : numbers){
        cout << number << '\n';
    }




    return 0;
}