//**********************
//basic operations     *
//**********************
//arithmetic operations*
//**********************


#include <iostream>
using namespace std;

//add, minus, multiply, divide, modulus

int add(int a, int b){
  return a+b;
}

int substract(int a, int b){
  return a - b;
}

int multiply(int a, int b){
  return a * b;
}

float divide(float a, int b){
  return a / b;
}

float mods(int a, int b){
  return a % b;
}

int main(){
  int a, b;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  cout << "ans = " << add(a, b) << "\n";
  cout << "ans = " << substract(a, b) << "\n";
  cout << "ans = " << multiply(a, b) << "\n";
  cout << "ans = " << divide(a, b) << "\n";
  cout << "ans = " << mods(a, b) << "\n";    
  return 0;
}
