#include <iostream>
using namespace std;

int main ()
{

    string cars[3][3] = {{"Mustang","Escape","F-150"},
                       {"Corvette","Equinox","Silverado"},
                        {"Challenger","Durango","Ram 1500"}};

    //cout << cars[0][1];
   
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for(int i = 0;  i < 3; i++)
    {
       for(int j = 0; j < 3; j++){
        cout << cars[i][j] << " ";
       }
       cout << '\n';
    }


    int numbers[3][3] = {{0,1,2},
                        {3,4,5},
                        {6,7,8}};

    for(int k = 0; k < 3; k++){
        for(int l =0; l < 3; l++){
            cout << numbers[k][l];
        }
         cout << '\n';
    }
    


    return 0;
}