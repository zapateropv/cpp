
#include <iostream>
#include <iomanip>

using namespace std;
int main() {
  //initializing the variables
  double weight;
  double height;
  double result;
  string name;
  
  //getting input from user
  cout << "Enter your name: ";
  cin >> name;
  
  cout << "Enter your height in meters: ";
  cin >> height;

  cout << "Enter your weight in kg: ";
  cin >> weight;
  //i use if statements because i dont want the user to enter an invalid input
  if(height <= 0 || weight <= 0){
    cout << "enter a valid height & weight !";
  }
  else {
  
  //calculating the bmi base on the formula
  result = weight / (height * height);
  
  //conditional statements & displaying the result base on the calculated bmi
  if(result <= 18.4){
    //I used the set precision to cap the decimal places into 2
      cout << "You are underweight and your bmi is: " << fixed << setprecision(2) << result;
  }
  
  else if(result >= 18.5 && result <= 24.9){
       cout << "You are on normal weight and your bmi is: " << fixed << setprecision(2) << result;
  }
  
  else if(result >= 25.0 && result <= 39.9){
       cout << "You are over weight and your bmi is: " << fixed << setprecision(2) << result;
  }
  else{
      cout << "You are obese and your bmi is: " << fixed << setprecision(2) <<result;
  }
  }
 
    return 0;
}