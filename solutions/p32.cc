#include <library.h>
#include <iostream>
#include <set>
#include <algorithm>

using namespace library;
using namespace std;

int main() {
  set<int> pandigital;
  for(int i=1;i<999;i++) {
    for(int j=1;j<9999;j++) {
      int k=i*j;
      if(k > 9999) break;
      vector<int> di = Digits(i);
      vector<int> dj = Digits(j);
      vector<int> dk = Digits(k);
      di.insert(di.end(), dj.begin(), dj.end());
      di.insert(di.end(), dk.begin(), dk.end());
      sort(di.begin(), di.end());
      if(di.size() == 9) {
        bool pand = true;
        for(int t=0;t<di.size();t++) {
          if(di[t] != t+1) {
            pand=false;
            break;
          }
        }
        if(pand) {
          //cout << i<<" "<<j<<" "<<k<<"\n";
          pandigital.insert(k);
        }
      }
    }
  }
  int sum=0;
  for(int x : pandigital) sum+=x;
  cout << sum << "\n";
}
