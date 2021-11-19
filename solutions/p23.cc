#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

bool isAbundant(int n) {
  int sum =0;
  for(auto num:properDivisors(n)) {
    sum+=num;
  }
  if(sum > n) {
    return true;
  }
  return false;
}


int main() {
  long tot;
  bool abundant[28124];
  vector<int> abundantVec;
  for(int i=1;i<=28123;i++) {
    if(isAbundant(i)) {
      abundant[i]=true;
      abundantVec.push_back(i);
    }
  }

  for(int i=1;i<=28123;i++) {
    for(auto abun : abundantVec)  {
      if(abun >= i) {tot+=i; break;}
      if(abundant[i - abun]) break;
    }
  }

  cout << tot << "\n";
}
