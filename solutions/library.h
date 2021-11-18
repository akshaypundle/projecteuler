#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <string>

namespace library {

  // returns if a positive integer is a palindrome e.g. 9009
  bool IsPalindrome(long n);
  // returns the greatest common divisor of 2 numbers
  long Gcd(long n1, long n2);
  // returns the least common multiple of 2 numbers
  long Lcm(long n1, long n2);
  // returns a vector of size n+1 where a[i] is true iff i is prime
  std::vector<bool> Primes(int n);
  // adds numbers given as a string
  std::string AddNumbers(std::vector<std::string> nums);
  // returs proper divisors of n. 
  // e.g n=6 returns 1,2,3
  std::vector<int> properDivisors(int n);

}

#endif
