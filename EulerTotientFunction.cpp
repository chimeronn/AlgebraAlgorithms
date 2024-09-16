#include <iostream>
#include <vector>
using namespace std;

vector<int> eulerTotientFunction(int);

int main() {
  for(int i : eulerTotientFunction(16)) {
    cout << i << " ";
  }
}

vector<int> eulerTotientFunction(int end) {
  vector<int> numCoprimes(end + 1);
  for(int i = 0; i <= end; ++i) {
    numCoprimes[i] = i;
  }

  for(int i = 2; i <= end; ++i) {
    if(numCoprimes[i] == i) {
      for(int j = i; j <= end; j += i) {
        numCoprimes[j] -= numCoprimes[j] / i;
      }
    }
  }
  return numCoprimes;
}
