#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
  std::vector<double> data;
  for (int ii = 0; ii < 10; ++ii) {
    std::cout << data.size() << std::endl;
    std::cout << data.capacity() << std::endl;
    data.push_back(2*ii);
    std::cout << data.size() << std::endl;
    std::cout << data.capacity() << std::endl;
    std::cin.get();
  }

  return 0;
}