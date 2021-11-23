#include <library.h>
#include <iostream>
#include <set>

using namespace library;
using namespace std;

int main() {
  set<string> res;
  for(int a=2;a<=100;a++) {
    for(int b=2;b<=100;b++) {
      res.insert(Pow(to_string(a), b));
    }
  }
  cout << res.size() << "\n";
}
