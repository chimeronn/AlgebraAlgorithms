#include <iostream>
using namespace std;

int binaryExponentiation(int, int);

int main() {
  cout << binaryExponentiation(3, 8);
}

int binaryExponentiation(int base, int exponent) {
  if(exponent == 0) return 1;
  int res = binaryExponentiation(base, exponent / 2);
  return exponent % 2 ? res * res * base : res * res;
}
