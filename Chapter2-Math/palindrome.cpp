#include <iostream>
using namespace std;
  // LOGIC: We find the reverse of the number and then check if it's equal to the original number
  
  // To find reverse: traverse the digits from last to first

  // To store last digit: x%10
  // To remove last digit: x = x/10
   
  // n=363
  // rem = n%10 = 363%10 = 3
  // rev = rev*10+rem;
  // n=n/10;

int getReverse(int number){
  int rem = 0;
  int rev = 0;
  while(number !=0){
    rem = number % 10;
    rev = rev * 10 + rem;
    number /= 10;
  }
  // cout << "rev: " << rev;
  return rev;
}

bool checkPalindrome(int number){
  int rev = getReverse(number);
  return (rev == number);
}

int main() {
  int number;
  cout << "Enter the number you want to check palindrome of: ";
  cin >> number;
  cout << checkPalindrome(number);

}