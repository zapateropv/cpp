#include <iostream>
using namespace std;



int main ()
{

    string names[] = {"Spongebob","Patrick","Sandy"};
    char grades[] = {'A','B','C','D','F',};
  

    for(int i = 0; i < sizeof(names)/sizeof(names[0]); i++){
        cout << names[i] << " " << '\n';
    }

    for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
        cout << grades[i] << " ";
    }


    return 0;
}