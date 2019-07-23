#include <iostream>
#include <vector>

int main() 
{
  std::vector<int> v1;
  int n;

  std::cout << "What Fibonacci number do you want to find: ";
  std::cin >> n;

  int F1 = 1, F2 = 1, fib;
  v1.push_back(F1);
  v1.push_back(F2);

  for (int i = 0; i < n-2; ++i)
  {
    fib = v1[i+1] + v1[i];
    v1.push_back(fib);
  }

  std::cout << v1[n-1];
  return 0;
}