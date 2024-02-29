#include <iostream>
#include <string>

int main(void) {
  std::string msg;
  while (std::getline(std::cin, msg)) {
    std::cout << msg << "\n";
  }
  return 0;
}
