#include <library.h>
#include <iostream>

using namespace library;
using namespace std;



int main() {
  int i=3;
  string f1="1";
  string f2="1";
  while(true) {
    string t = AddNumbers(vector<string>({f1,f2}));
    if(t.size() == 1000) {
      cout << i << "\n";
      break;
    } else {
      f1=f2;
      f2=t;
      i++;
    }
  }
}
