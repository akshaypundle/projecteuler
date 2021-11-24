#include <library.h>
#include <iostream>
#include <cmath>

using namespace library;
using namespace std;

int main() {
  long sum = 0;
  for(int i=2;i<=999999;i++) {
    vector<int> digits = Digits(i);
    long ans=0;
    for(int i=0;i<digits.size();i++) {
      ans += pow(digits[i], 5);
    }
    if(ans == i) sum+=i;
  }
  cout << sum << "\n";
}
