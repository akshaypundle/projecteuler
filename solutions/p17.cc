#include <library.h>
#include <iostream>

using namespace library;
using namespace std;


int numLetters(int n) {
  static int letters[] = {4,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8,6};
  static int letters20[] = {6,6,5,5,5,7,6,6};
  static int letter100 = 7;
  if(n==1000) {
    return 11;
  } else if(n >= 100) {
    int h = n/100;
    int rem = n % 100;

    return letters[h] + letter100 + (rem > 0 ? (3+numLetters(rem)) : 0);
  } else if(n<=20) {
    return letters[n];
  } else {
    int t = letters20[(n - 20)/10];
    int rem = n % 10;
    return t+ (rem > 0 ? letters[rem] : 0);
  }
}

int main() {
  int s=0;
  for(int i=1;i<=1000;i++) {
    s+=numLetters(i);
  }
  cout << s << "\n";
}
