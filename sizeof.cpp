#include <iostream>
using namespace std;

int main ()
{

    //sizeof() = determines the size in bytes of a:
    //           variables, data types, class, objects, etc.

  double gpa = 2.5;
  string name = "Bro";
  char grades[] = {'A','B','C','D','E'};


  cout << sizeof(double) << " Bytes" <<'\n';
  cout << sizeof(name) << " Bytes" << '\n';
  cout << sizeof(grades)/sizeof(char) << " elements" << '\n';
 

 
    return 0;
}