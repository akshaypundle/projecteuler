#include <library.h>
#include <iostream>

using namespace library;
using namespace std;


bool isCircularPrime(int i, const vector<bool> & primes) {
  if(!primes[i]) return false;

  int tens = 10;
  while(tens < i) tens*=10;
  tens/=10;
  int j=i/10;
  j+=tens*(i%10);
  while(j != i) {
    if(!primes[j]) return false;
    int r = j%10;
    j=j/10;
    j+=tens*r;
  }
  return true;
}

int main() {
  vector<bool> is_prime = Primes(1e6);
  int count=0;
  for(int i=2; i < 1e6; i++) {
    if(is_prime[i] && isCircularPrime(i, is_prime)) {
      count++;
    }
  }
  cout << count << "\n";
}
