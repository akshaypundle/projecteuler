#include <library.h>
#include <iostream>
#include <algorithm>

using namespace library;
using namespace std;

long power10[] = {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000};
/*
 * d2d3d4=406 is divisible by 2
d3d4d5=063 is divisible by 3
d4d5d6=635 is divisible by 5
d5d6d7=357 is divisible by 7
d6d7d8=572 is divisible by 11
d7d8d9=728 is divisible by 13
d8d9d10=289 is divisible by 17
 */
long makeNum(long digits[10], long startIndex) {
  return 100*digits[startIndex]+10*digits[startIndex+1]+digits[startIndex+2];
}

bool hasProperty(long digits[10]) {
  return makeNum(digits,1) % 2 == 0 &&
    makeNum(digits,2) % 3 == 0 &&
    makeNum(digits,3) % 5 == 0 &&
    makeNum(digits,4) % 7 == 0 &&
    makeNum(digits,5) % 11 == 0 &&
    makeNum(digits,6) % 13 == 0 &&
    makeNum(digits,7) % 17 == 0;
}

long pandigitalWithProperty() {
  long digits[10];
  for(long i=0;i<10;i++) {
    digits[i]=i;
  }

  long sum= 0;
  do {
    if(hasProperty(digits) && digits[0]!=0) {

      for(long i=0;i<10;i++) {
        sum+=digits[i]*power10[9-i];
        cout << digits[i];
      }
      cout << "\n";
    }
  } while ( next_permutation(digits, digits+10) );
  return sum;
}

int main() {
  cout << pandigitalWithProperty() << "\n";
}
