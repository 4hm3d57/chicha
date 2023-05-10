//*************************
//pointers and reference  *
//*************************
//reference               *
//*************************
#include <iostream>
using namespace std;

int main(){
  //this block of code prints the address of the variables a, b and c
  cout << "Address of variables" << "\n";
  int a = 2;
  int b = 5;
  int c = 7;
  cout << "address of a: " << &a << "\n";
  cout << "address of b: " << &b << "\n";
  cout << "address of c: " << &c << "\n";

  //reference
  cout << "reference" << "\n";
  int x = 20;
  //y is a reference to x
  int& y = x;
  y = 10;
  cout << "x = " << x << "\n";
  cout << "y = " << y << "\n";

  //smart pointer
  cout << "smart pointer" << "\n";
  
  return 0;
}

