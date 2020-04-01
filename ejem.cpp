#include <iosteam>

int max(int a, int b);

int main(void)
{
  int a=5, b=6;
  std::cout<< max(a, b);
  return 0;
}

int max(int a, int b)
{
  if (a>=b){
    return a;
  }
  else{
    return b;
  }
}
