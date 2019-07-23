#include <iostream>
#include <vector>

int main()
{
  int n;
  std::vector<int> v1;

  std::cout << "Enter a starting number: ";
  std::cin >> n;

  int F1 = 1, F2 = 1, fib;
  
  //std::cout << F1 << " " << F2 << " " << j << " " << "";
  v1.push_back(F1);
  v1.push_back(F2);

  
  for (int i = 0; i < n-2; ++i)
  {
    fib = v1[i+1] + v1[i];
    v1.push_back(fib);
  }

  for(int i = 0; i < v1.size(); ++i)
    std::cout << v1[i] << " ";
    
  return 0;
}