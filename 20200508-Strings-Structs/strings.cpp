#include <iostream>
#include <string>

int main(void)
{
  std::string a = "Hola mundo";
  std::string b = ", soy yo";
  std::string c = a + b; 
  std::string d(c, 3, 4);
  std::cout << c << std::endl;
  std::cout << d << std::endl;
  std::cout << d[d.size()-1] << std::endl;
  
  return 0;
}