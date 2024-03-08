// Spec: https://cses.fi/problemset/task/1069

#include <iostream>
#include <string>
#include <algorithm>

int main(void) {
  std::string dna_seq{};
  dna_seq.reserve(1'000'000);
  std::cin >> dna_seq;

  int  max        = 0;
  int  repetition = 1;
  char pivot      = dna_seq[0];
  for (int i = 1; i < static_cast<int>(dna_seq.size()); ++i) {
    if (const char c = dna_seq[i]; c == pivot) {
      repetition++;
    } else {
      max        = std::max(max, repetition);
      pivot      = c;
      repetition = 1;
    }
  }
  std::cout << std::max(max, repetition) << "\n";
  return 0;
}
