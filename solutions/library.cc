#include <library.h>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <iostream>

namespace library {

  using namespace std;

  vector<int> Digits(long n) {
    return DigitsInBase(n, 10);
  }
  
  vector<int> DigitsInBase(long n, int base) {
    vector<int> digits;
    while(n>0) {
      digits.push_back(n % base);
      n=n/base;
    }
    return digits;
  }

  bool IsPalindrome(long n) {
    return IsPalindromeInBase(n, 10);
  }

  bool IsPalindromeInBase(long n, int base) {
    if(n<0) return false;
    vector<int> digits = DigitsInBase(n, base);

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

  string MultiplyNumbers(string a, string b) {
    vector<string> intermediates;
    string ans_tmpl="";
    for(int i=b.size()-1;i>=0;--i) {
      int d = b[i]-'0';
      string ans=ans_tmpl;
      ans_tmpl.push_back('0');
      int rem = 0;
      for(int ai=a.size()-1;ai>=0;ai--){
        int new_num = (a[ai]-'0')*d+rem;
        ans.push_back(new_num %10 + '0');
        rem = new_num/10;
      }
      if(rem > 0) {
        ans.push_back(rem+'0');
      }
      reverse(ans.begin(),ans.end());
      intermediates.push_back(ans);
    }
    return AddNumbers(intermediates);
  }

  string Pow(string a, int b) {
    if(b == 0) return "1";
    else if(b % 2 == 0) {
      return Pow(MultiplyNumbers(a,a), b/2);
    } else {
      return MultiplyNumbers(a, Pow(a, b-1));
    }
  }

  vector<int> properDivisors(int n) {
    if(n == 1) return {1};
    vector<int> ret;
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
