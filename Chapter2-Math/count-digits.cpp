#include <iostream>
using namespace std;

int countDigits(int number){
  int count=1;

  while (number != 0)
  {
    number = number / 10;
    count++;
  }
  return count;
}

int main() {
  int number;
  cout << "Enter the number you want to count digits of: \n";
  cin >> number;

  cout << countDigits(number);

}

