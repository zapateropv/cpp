#include <iostream>


int main (){
    //cout << (insertion operator)
    //cin >> (extraction operator)

    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin  >> std::ws, name);
  

    int age;
    std::cout<< "What is your age? ";
    std:: cin >> age;


    return 0;
}