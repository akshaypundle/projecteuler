#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

int main() {
  vector<bool> primes = Primes(1e6);
  int n=10001;
  int i=0;
  while(n > 0) {
    if(primes[i]) { 
      n--;
      if(n == 0) {
        std::cout << i << "\n";
      }
    }
    i++;
  }
}
