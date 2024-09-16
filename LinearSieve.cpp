#include <iostream>
#include <vector>
using namespace std;

vector<int> linearSieve(int);

int main() {
  for(int i : linearSieve(16)) {
    cout << i << " ";
  }
}

vector<int> linearSieve(int end) {
  vector<int> nums(end + 1);
  vector<int> primes;
  
  for(int i = 2; i <= end; ++i) {
    if(nums[i] == 0) {
      nums[i] = i;
      primes.push_back(i);
    }

    for(int j = 0; i * primes[j] <= end; ++j)  {
      nums[i * primes[j]] = primes[j];
      if(primes[j] == nums[i]) {
        break;
      }
    }
  }
  return primes;
}
