#include <library.h>
#include <iostream>

using namespace library;
using namespace std;


bool isTruncatablePrime(int i, const vector<bool> & primes) {
  if(i<= 10) return false;

  int num = i;
  while(num>=1) {
    if(!primes[num]) return false;
    num/=10;
  }

  int tens = 10;
  while(tens < i) tens*=10;
  tens/=10;
  num=i;

  while(num >= 1) {
    if(!primes[num]) return false;
    num = num - (num / tens) * tens;
    tens /= 10;

  }
  return true;
}

int main() {
  vector<bool> is_prime = Primes(1e6);
  int count=0;
  for(int i=11; i < 1e6; i++) {
    if(is_prime[i] && isTruncatablePrime(i, is_prime)) {
      count+=i;
    }
  }
  cout << count << "\n";
}
