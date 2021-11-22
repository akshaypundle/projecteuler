#include <library.h>
#include <iostream>
#include <algorithm>

using namespace library;
using namespace std;

int main() {
  string s = "0123456789";
  for(int i=0;i<1e6-1;i++) next_permutation(s.begin(), s.end());
  cout << s << "\n";
}
