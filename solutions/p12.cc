#include <library.h>
#include <iostream>
#include <cmath>

using namespace library;
using namespace std;

int numDivisors(int n) {
  int c=0;
  int e = sqrt(n);
  for(int i=1;i<e; i++) {
    if(n%i==0) c+=2;
  }
  if(e*e == n) c++;
  return c;
}

int main() {
  int i=1;
  while(true) {
    int t = i*(i+1)/2;
    int nd = numDivisors(t);
    cout << t << "\n";
    if(nd > 500) {
      cout << t << "\n";
      break;
    }
    i++;
  }
}
