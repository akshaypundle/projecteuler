#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

long getChainLength(int n1) {
  long n = n1;
  if(n == 1) return 1;

  long l = 1;
  while(n > 1) {
    if(n % 2 == 1) {
      n= (3*n+1); 
      l++;
    } else {
      n=n/2;
      l++;
    }
  }
  return l;
}

int main() {
  long m =0;
  long n=0;

  for(int i=1;i<1e6;i++) {
    long c = getChainLength(i);
    if(c>m) {
      m=c;
      n=i;
    }
  }
  cout << n << "\n";
}
