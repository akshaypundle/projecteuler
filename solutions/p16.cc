#include <library.h>
#include <iostream>
#include <vector>

using namespace library;
using namespace std;

int main() {
  string s = "1";
  for(int i=0;i<1000;i++) {
    s = AddNumbers(vector<string>({s,s}));
  }

  int sum = 0;
  for(int i=0;i<s.size();i++) {
    sum+=(s[i]-'0');
  }


  cout << sum << "\n";
}
