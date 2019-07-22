#include <iostream>

int main() 
{
  int val, steps = 0;
  std::cout << "Enter a starting value: ";
  std::cin >> val;
  std::cout << val << std::endl;
    while (val > 1){

      if (val % 2 == 0){
        int val2;
        val2 = val/2;
        std::cout << val2 << std::endl;
        val = val2;
        ++steps;
      }
      
      else{
        int val3;
        val3 = 3 * val + 1;
        std::cout << val3 << std::endl;
        val = val3;
        ++steps;
      }

    }
  std::cout << "STEPS: " << steps;
  return 0;
}