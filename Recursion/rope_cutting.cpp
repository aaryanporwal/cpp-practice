#include <algorithm>
#include <iostream>
using namespace std;

// Rope cutting problem, return max number of cuts that can be made from int n.

// i/p: n=5 a=2,b=5,c=1
// o/p: 5 (we return 5 pieces (of length 1 each) )

// i/p: n=23 a=12,b=9,c=11
// o/p: 2

int fun(int n, int a, int b, int c) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  int res = max(fun(n - a, a, b, c), fun(n - b, a, b, c), fun(n - c, a, b, c));

  if (res == -1) {
    return -1;
  } else {
    return res + 1;
  }
}

int main() {
  fun(23, 11, 9, 12);
  return 0;
}