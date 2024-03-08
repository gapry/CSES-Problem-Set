// Spec: https://cses.fi/problemset/task/1068

#include <cstdint>
#include <iostream>

int main(void) {
  uint64_t n = 0;
  std::cin >> n;
  while (n > 1) {
    std::cout << n << " ";
    n = !(n & 1) ? n >> 1 : n + (n << 1) + 1;
  }
  std::cout << n << "\n";
  return 0;
}
