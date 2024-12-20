#include <iostream>
using namespace std;

int main ()
{

    //fill() = Fills a range of elements with a specified value
    //         fill(begin, end, value)

    const int SIZE = 100;
    string foods[100];
    fill(foods, foods + (SIZE/2), "pizza");
    fill(foods + (SIZE/2),foods + SIZE, "hamburgers");


    for(string food : foods){
        cout << food <<  '\n';
    }


    return 0;
}