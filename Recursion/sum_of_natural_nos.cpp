#include <iostream>
using namespace std;

int fun(int n) {
  if (n == 0) {
    return 0;
  }
  return n + fun(n - 1);
}

int main() {
  for (int i = 0; i < 10; i++) {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << fun(n) << "\n";
  }
  return 0;
}