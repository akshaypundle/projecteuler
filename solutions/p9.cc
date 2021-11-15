#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

int main() {
  int maxp = 0;
  for(int a=1;a<998;a++) {
    for(int b=1;b<999-a;b++) {
      int c = 1000 - a - b;
      if(c > 0 && (a*a + b*b == c*c)) {
        maxp = max(maxp, a*b*c);
      }
    }
  }
  cout << maxp << "\n";
}
