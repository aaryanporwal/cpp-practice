#include <iostream>
using namespace std;

// i/p: 5
// o/p: 5 4 3 2 1

void fun(int n) {
  if (n == 0)
    return;
  cout << n << " ";
  return fun(n - 1);
}

int main() {
  fun(5);
  return 0;
} 
