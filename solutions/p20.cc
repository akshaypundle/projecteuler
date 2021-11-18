#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

int main() {
  string ans = "1";

  for(int i=2;i<=100;i++) {
    vector<string> nos;
    for(int j=0;j<i;j++) {
      nos.push_back(ans);
    }
    ans = AddNumbers(nos);
  }
  int ret=0;
  for(int i=0;i<ans.size();i++) {
    ret+=ans[i]-'0';
  }
  cout << ret <<"\n";

}
