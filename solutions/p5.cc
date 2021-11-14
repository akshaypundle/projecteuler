#include <library.h>
#include <iostream>

using namespace library;

int main() {
  int m=1;
  for(int i=1;i<=20;i++) {
    m = Lcm(m, i);
  }
  std::cout << m << "\n";
}
