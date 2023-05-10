//*******************
//basic operations  *
//*******************
//functions         *
//*******************


#include <iostream>
#include <cmath>//it has standard library functions like sqrt(), abs()
using namespace std;

//user-defined function
void greet(){
  cout << "Hello world" << "\n";
}

//function with parameter
void num(int n){
  cout << n << "\n";
}
//add function
int add(int a, int b){
  //return type returns the value of the variables
  return (a+b);
}

//function prototype
int product(int, int);

//driver function
int main(){
  //calling a function
  greet();
  int n = 7;
  num(n);
  int a=5, b=7;
  cout << add(a,b) << "\n";
  cout << product(a,b) << "\n";
  cout << sqrt(49) << "\n";//stl library function
  return 0;
}

//function definition
int product(int a, int b){
  return (a * b);
}
