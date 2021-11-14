#include <library.h>
#include <iostream>

using namespace library;

int main() {
  long ss = 0;
  for(int i=1;i<=100;i++) {
    ss += i*i;
  }
  std::cout << (50*50*101*101) - ss << "\n";
}
