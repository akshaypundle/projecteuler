#include <library.h>
#include <iostream>

using namespace library;
using namespace std;
int isPowerOf10(int i) {
  return
    i == 1 || i == 10 || i == 100 || i == 1000 || i == 10000 || i == 100000 || i == 1000000 || i == 10000000 || i == 100000000 || i == 1000000000; 
} 

int main() {
  int num=1;
  int d=0;
  long p=1;
  int lookingFor = 1;

  while(d < 1e6) {
    int ed = d+Digits(num).size();
    if(ed == lookingFor) {
      p*= (num % 10);
      lookingFor*=10;
    } else if(ed > lookingFor) {
      vector<int> digits = Digits(num);
      p*= digits[ed-lookingFor];
      lookingFor*=10;
    } else {
      d=ed;
      num++;
    }
  }
  cout << p << "\n";
}
