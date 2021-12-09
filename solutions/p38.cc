#include <library.h>
#include <iostream>
#include <algorithm>

using namespace library;
using namespace std;

int main() {
  long max = 0;
  for(int i=2; i<49999; i++) {
    string ds = "";

    for(int j=1;j<=7;j++) {
      int p = i*j;
      ds +=to_string(p);
      if(ds.size() > 9) break;
      vector<int> d = Digits(stol(ds));
      if(d.size() == 9) {
        sort(d.begin(), d.end());
        bool pand = true;
        for(int t=0;t<d.size();t++) {
          if(d[t] != t+1) {
            pand=false;
            break;
          }
        }
        if(pand) {
          long num = stol(ds);
          if(num > max) max=num;

        }
      }
    }
  }
  cout << max << "\n";
}
