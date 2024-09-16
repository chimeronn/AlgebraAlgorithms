#include <iostream>
#include <vector>
using namespace std;

vector<int> sieveOfEratosthenes(int);

int main() {
  for(int i : sieveOfEratosthenes(16)) {
    cout << i << " ";
  }
}

vector<int> sieveOfEratosthenes(int end) {
  vector<int> ans;
  vector<bool> isPrime(end + 1, true);

  isPrime[0] = isPrime[1] = false;
  for(int i = 2; i <= end; ++i) {
    if(isPrime[i] && (long long) i * i <= end) {
      for(int j = i * i; j <= end; j += i) {
        isPrime[j] = false;
      }
    }
  }

  for(int i = 2; i < isPrime.size(); ++i) {
    if(isPrime[i]) ans.push_back(i);
  }
  return ans;
}
