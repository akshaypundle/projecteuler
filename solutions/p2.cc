#include <iostream>

int main() {
  long sum = 2;
  long fib0 = 1;
  long fib1 = 2;

  while(true) {
    long next = fib0 + fib1;
    if(next > 4e6) {
      break;
    }
    if( next % 2 == 0) {
      sum += next;
    }
    fib0 = fib1;
    fib1 = next;
  }
  std::cout << sum;
}
