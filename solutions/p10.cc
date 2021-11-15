#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

int main() {
  vector<bool> p = Primes(2e6 - 1);
  long s=0;
  for(int i=0;i<2e6;i++) {
    if(p[i]) s+=i;
  }

  cout << s << "\n";
}
