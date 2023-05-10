#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
  int n;
  cin >> n;
  if(n==1){
    cout << "That is the correct answer" << "\n";
  }
  else
    throw invalid_argument("the answer is 1");
  return 0;
}
