#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

int main() {
  for(int num=11;num<99;num++) {
    for(int den=num+1;den<99;den++) {
      int n1=num/10; int n2 = num % 10;
      int d1 = den/10; int d2 = den % 10;

      if(d1 == n1 && d2*num == n2*den && d1 !=0 || 
          d2 == n2 && d1*num == n1*den && d2 != 0 ||
          d1 == n2 && d2*num == n1*den && d1 != 0||
          d2 == n1 && d1*num == n2*den && d2 != 0) {
        cout << num<< " / " << den << "\n";
      }
    }
  }
}
