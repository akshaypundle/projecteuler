#include <library.h>
#include <iostream>

using namespace library;

int main() {
  int max=0;
  for(int i=100;i<1000;i++) {
    for(int j=100;j<1000;j++) {
      int num = i*j;
      if(IsPalindrome(num) && num > max) {
        max=num;
      }
    }
  }
  std::cout << max << "/n";
}
