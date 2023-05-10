//*******************
//basic operations  *
//*******************
//logical operations*
//*******************

#include <iostream>
using namespace std;

int main(){
  int a, b;
  cout <<" Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;

  cout << "&& operator -> " << ((a==5) && (a==b)) << "\n";
  cout << "|| operator -> " << ((a==5) || (a > b)) << "\n";
  cout << "! operator ->  " << !(a == 5) << "\n";
  
  return 0;
}
