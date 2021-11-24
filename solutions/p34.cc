#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

int main() {
  int tot=0;
  int fact[] = {1,1,2,6,24,120,720,5040,40320,362880};
  for(int i=10;i<1e7;i++) {
    int s=0;
    for(int d:Digits(i)) {
      s+=fact[d];
    }
    if(s == i) {
      tot+=s;
    }
  }
  cout << tot << "\n";
}
