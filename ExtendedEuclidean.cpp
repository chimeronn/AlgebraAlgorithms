#include <iostream>
using namespace std;

int extendedEuclidean(int, int, int&, int&);

int main() {
  int x, y;
  cout << extendedEuclidean(123, 45, x, y) << " " << x << " " << y;
}

int extendedEuclidean(int a, int b, int& x, int& y) {
  if(b == 0) {
    x = 1;
    y = 0;
    return a;
  }

  int  x1, y1;
  int gcd = extendedEuclidean(b, a % b, x1, y1);
  x = y1;
  y = x1 - y1 * (a / b);
  return gcd;
}
