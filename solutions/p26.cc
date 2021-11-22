#include <library.h>
#include <iostream>
#include <map>

using namespace library;
using namespace std;

int lengthOfRepeatingDecimal(int denominator) {
  bool debug = true;

  int numerator = 1;
  int current_index = 1;
  map<int,int> remainder_position;

  while(true) {
    int next_decimal = numerator/denominator;
    int remainder = numerator % denominator;

    if(remainder == 0 ) return 0; // non repeating

    if(next_decimal > 0) {
      if(remainder_position.find(remainder) != remainder_position.end()) {
        return current_index - remainder_position[remainder];
      } else {
        remainder_position[remainder] = current_index;
      }
    }
    numerator = remainder*10;
    current_index++;
  }
}

int main() {
  int l=0;
  int ret=0;
  for(int i=2;i<1000;i++) {
    int li = lengthOfRepeatingDecimal(i);
    if(li > l) {
      l = li;
      ret = i;
    }
  }
  cout << ret << "\n";
}
