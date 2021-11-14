#include <library.h>
#include <vector>
#include <cmath>

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

  long Gcd(long n1, long n2) {
    if(n1 == 0) {
      return n2;
    }
    return Gcd(n2 % n1, n1);
  }

  long Lcm(long n1, long n2) {
    long g = Gcd(n1,n2);
    return (n1/g)*n2;
  }

  vector<bool> Primes(int n) {
    vector<bool> ret(n+1,true);
    ret[0] = false; ret[1] = false;
    for(int i=2;i<int(sqrt(n))+1;i++) {
      if(ret[i]) {
        for(int j=i*i; j<=n; j+=i) {
          ret[j]=false;
        }
      }
    }
    return ret;
  }
}
