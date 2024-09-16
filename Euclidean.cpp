#include <iostream>
using namespace std;

int euclidean(int, int);

int main() {
  cout << euclidean(123, 45);
}

int euclidean(int a, int b) {
  if(b == 0) return a;
  return euclidean(b, a % b);
}
