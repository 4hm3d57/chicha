//********************
//basic operations   *
//********************
//loops:for/while    *
//********************

#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
  //for loop -> here iterations is known
  int n;
  cout << "Enter n: ";
  cin >> n;
  cout << "for loop" << "\n";
  for(int i=0; i<n; i++){
    cout << "n = " << i << "\n";
  }

  //while loop -> here iterations is unknown and the statement will run until the condition is proved false
  //while loop is entry control loop
  //if a condition is false in a while loop it breaks
  //if it is false it does not print anything
  cout << "while loop" << "\n";
  while(n < 20){
    cout << "n = " << n << "\n";
    ++n;
  }
  //do while loop is exit control loop
  cout << "do while loop" << "\n";
  do{
    cout << "n = " << n << "\n";
    ++n;
  }while(n <= 10);
  return 0;
}
