#include <iostream>

int main(void) {
  int n = 0, p = 0, q = 0;
  std::cin >> n;
  for (int i = 1; i <= (n - 1); ++i) {
    std::cin >> q;
    p ^= (i ^ q);
  }
  std::cout << (p ^ n) << "\n";
  return 0;
}
