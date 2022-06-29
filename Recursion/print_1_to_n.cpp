// i/p: n=5
// o/p: 1 2 3 4 5

#include <iostream>
using namespace std;

void fun(int n) {
  if (n == 0)
    return;
  fun(n - 1);
  cout << n << " ";
}

int main() {
  fun(5);
  return 0;
}
