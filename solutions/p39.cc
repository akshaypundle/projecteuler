#include <library.h>
#include <iostream>
using namespace library;
using namespace std;

int main() {
  int maxnum=0;;
  int maxx=0;
  for(int p=3;p<=1000;p++) {
    int num = 0;
    for(int i=1;i<=p;i++) {
      for(int j=i+1;j<=p;j++) {
        int r = p-i-j;
        int m1 = max(j,r);
        int m2 = min(j,r);
        if(r>0 && m1*m1 == m2*m2+i*i) {
          num++;
        }
        if(r < 0) break;
      }
    }
    if(num > maxnum) {
      maxnum=num;
      maxx=p;
    }
  }
  cout << maxx << "\n";
}
