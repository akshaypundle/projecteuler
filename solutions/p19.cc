#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

int main() {
  int ans=0;
  int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

  int y = 1900;
  int m = 0;
  int d = 7;

  while(y <= 2000) {
    if(y % 4 == 0 && y != 1900) {
      days[1]=29;
    } else {
      days[1] = 28;
    }

    d+=7;
    if(d > days[m]) {
      d-=days[m++];
      if(m > 11) {
        m=0;
        y++;
      }
    }
    if(d == 1 && y>=1901 && y<=2000) ans++;


  }


  cout << ans << "\n";
}


