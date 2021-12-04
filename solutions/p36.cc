#include <library.h>
#include <iostream>

using namespace library;
using namespace std;

int main() {
  int count =0;
  for(int i=0;i<1e6;i++) {
    if(IsPalindrome(i) && IsPalindromeInBase(i,2)) count+=i;
  }
  cout << count << "\n";
}
