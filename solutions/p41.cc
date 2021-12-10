#include <library.h>
#include <iostream>
#include <algorithm>

using namespace library;
using namespace std;

long power10[] = {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000};
long largestPandPrime(int len) {
  long pand=0;
  int digits[len];
  for(int i=0;i<len;i++) {
    digits[i]=i+1;
  }


  do {
    long num = 0;
    for(int i=0;i<len;i++) {
      num+=digits[i]*power10[i];
    }
    if(IsPrime(num)) {
      if(num > pand) pand = num;
      cout << num << "\n";
    }
  } while ( next_permutation(digits, digits+len) );
  return pand;
}

int main() {
  long l = 0;
  for(int i=1;i<=9;i++) {
    long d = largestPandPrime(i);
   if(d > l) l = d; 
  }
  cout << l << "\n";
}
