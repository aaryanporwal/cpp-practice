#include <iostream>
// i/p: 1234
// o/p: 10
using namespace std;

int sum(int n) {
  if (n == 0) {
    return 0;
  }
  return (n % 10 + sum(n / 10));
}

int main() {
  int n = 1234;
  cout << sum(n);
}