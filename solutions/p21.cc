#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

int sumOfProperDivisors(int n) {
  int sum=0;
  for(auto i:properDivisors(n)) sum+=i;
  return sum;
}

int main() {
  cout << "\n";
  vector<int> sums;
  for(int i=0;i<10000;i++) {
    sums.push_back(sumOfProperDivisors(i));
  }
  int ret = 0;
  for(int i=0;i<10000;i++) {
    int j=sums[i];
    if(sums[j] == i && j > i) {
      ret +=i;
      ret +=j;
      cout << i<< " and " << j <<"\n";
    }
  }
  cout << ret << "\n";
}

