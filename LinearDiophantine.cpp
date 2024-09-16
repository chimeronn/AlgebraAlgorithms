#include <iostream>
using namespace std;

int extendedEuclidean(int, int, int&, int&);

bool linearDiophantine(int, int, int, int&, int&, int&);

int main() {
  int x, y, g;
  cout << linearDiophantine(123, 45, 9, x, y, g) << " " << x << " " << y;
}

int extendedEuclidean(int a, int b, int& x, int& y) {
  if(b == 0) {
    x = 1;
    y = 0;
    return a;
  }

  int x1, y1;
  int gcd = extendedEuclidean(b, a % b, x1, y1);
  x = y1;
  y = x1 - y1 * (a / b);
  return gcd;
}

bool linearDiophantine(int a, int b, int c, int& x, int& y, int& g) {
  g = extendedEuclidean(a, b, x, y);
  if(c % g) return false;

  x *= c / g;
  y *= c / g;
  return true;
}
