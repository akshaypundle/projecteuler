#include <library.h>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

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

  string AddNumbers(vector<string> nums) {
    bool shouldAdd = true;
    int i=0;
    int tsum = 0;
    string res =  "";
    while(shouldAdd) {
      shouldAdd = false;
      for(const string &num : nums) {
        if(num.size() > i) {
          tsum+= (num[num.size() - 1 - i] - '0');
          shouldAdd=true;
        }
      }
      if(shouldAdd || tsum > 0) {
        res = char((tsum % 10)+'0')+res;
      }
      tsum/=10;
      i++;
    }
    if(tsum > 0) res = char((tsum % 10)+'0')+res;
    return res;
  }

  vector<int> properDivisors(int n) {
    if(n == 1) return {1};
    vector<int> ret = {1};
    int e = sqrt(n);
    for(int i=2;i<=e; i++) {
      if(n%i==0) {
        ret.push_back(i);
        if( n/i != i) ret.push_back(n/i);
      }
    }
    sort(ret.begin(), ret.end());
    return ret;
  }
}
