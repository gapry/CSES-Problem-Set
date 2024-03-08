// Task: https://cses.fi/problemset/task/1094

#include <iostream>
#include <cstdint>

int main(void) {
  int n = 0;
  std::cin >> n;

  uint64_t previous = 0, current = 0, moves = 0;
  std::cin >> previous;
  for (int i = 1; i < n; ++i) {
    std::cin >> current;
    if (current < previous) {
      moves += (previous - current);
      current = previous;
    }
    previous = current;
  }
  std::cout << moves << "\n";
  return 0;
}
