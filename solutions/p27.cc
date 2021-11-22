#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

int numQuadraticPrimes(int a,int b, const vector<bool> & primes) {
  int f = b;
  int i=0;
  while(f > 1 && primes[f]) {
    i++;
    f=i*i+i*a+b;
  }
  return i;
}

int main() {
  vector<bool> primes = Primes(1e7);
  int m = 0;
  int mp = 0;
  for(int i=-999;i<1000;i++) {
    for(int j=-1000;j<=1000;j++) {
      int t = numQuadraticPrimes(i,j,primes);
      if(t>m) {
        m=t;
        mp=i*j;
        if(mp == -59231) {
          cout << "n^2 + " << i <<"n + "<<j<<"\n";
        }
      }
    }
  }
  cout << mp << "\n";
}
