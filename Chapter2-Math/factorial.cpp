#include <iostream>
using namespace std;

// Factorial using iterative solution is better because the space complexity in iterative is O(1); whereas space complexity in recursive solution is O(n).


int factorial(int n) {
  int fact = 1;
  if(n>1){
    return n*factorial(n-1);
  } else{
    return 1;
  }
}



int main(){
  int number;
  cout << "Enter the number to find factorial of: ";
  cin >> number;

  cout << "fact: " << factorial(number);

}