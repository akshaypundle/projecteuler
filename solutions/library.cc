#include <library.h>
#include <vector>

namespace library {

  using namespace std;

  bool IsPalindrome(long n) {
    if(n<0) return false;
    vector<int> digits;
    while(n>0) {
      digits.push_back(n % 10);
      n=n/10;
    }

    for(int i=0;i<digits.size();i++) {
      if(digits[i] != digits[digits.size() - 1 -i]) {
        return false;
      }
    }
    return true;
  }

  long gcd(long n1, long n2) {
    if(n1 == 0) {
      return n2;
    }
    return gcd(n2 % n1, n1);
  }

  long lcm(long n1, long n2) {
    long g = gcd(n1,n2);
    return (n1/g)*n2;
  }

}
