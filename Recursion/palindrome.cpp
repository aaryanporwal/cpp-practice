#include <iostream>
using namespace std;
// i/p: abba
// o/p: True

bool isPalindrome(string &str, int start, int end) {
  if (start >= end) {
    return true;
  } else {
    return (str[start] == str[end] && isPalindrome(str, start + 1, end - 1));
  }
}

int main() {
  string str = "TACOCAT";
  isPalindrome(str, 0, str.length() - 1) ? cout << "Is Palindrome"
                                         : cout << "Isn't Palindrome";
  return 0;
}