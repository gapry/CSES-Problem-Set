// Task: https://cses.fi/problemset/task/1070

#define GAPRY_CSES_PRINT(p) for (int i = p; i <= n; i += 2) std::cout << i << " ";

#include <iostream>

int main(void) {
  int n = 0; 
  std::cin >> n;

  if      (n == 1) std::cout << n;
  else if (n  < 4) std::cout << "NO SOLUTION";
  else {
    GAPRY_CSES_PRINT(2)
    GAPRY_CSES_PRINT(1)
  }
  std::cout << "\n";
  return 0;
}