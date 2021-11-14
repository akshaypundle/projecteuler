#include <iostream>
#include <math.h>

int main() {
  long n = 600851475143;
  for(int i=2;i<int(sqrt(n))+1;i++) {
    while(n % i == 0) {
      n = n /i;
    }
  }
  std::cout << n << "\n";
}

