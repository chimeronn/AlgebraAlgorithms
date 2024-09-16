#include <iostream>
using namespace std;

int numberOfDivisors(int);

int main() {
  cout << numberOfDivisors(100);
}

int numberOfDivisors(int num) {
  int total = 1;
  for(int i = 2; (long long) i * i <= num; ++i) {
    int power = 0;
    while(!(num % i)) {
      power++;
      num /= i;
    }
    total *= (power + 1);
  }

  if(num > 1) {
    total *= 2;
  }
  return total;
}
