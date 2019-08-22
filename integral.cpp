#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <vector>
#include <ctime>
#include <numeric>

int main() {
  srand(time(NULL));
  std::vector<double> vec;
  float upper, lower, x,sum;

  int iterations;

  upper = 5.0;
  lower = 1.0;

  std::cout << "How many times to run the estimate: ";
  std::cin >> iterations;
  if(iterations < 1)
  {
    std::abort();
  }
  std::cout << std::endl;

  double anti = ((std::pow(upper,3)/3)-(std::pow(lower,3)/3));
  std::cout << "Actual integral value: " << anti << std::endl;

  for (int i = 0; i < iterations; ++i)
  {
    float r = lower + static_cast<float>(rand()) / static_cast<float>(RAND_MAX/(upper-lower));
    double avg;
    sum = 0;
    sum = (upper-lower)*(std::pow(r,2));
    //std::cout << "R: " << r << '\n';
    //std::cout << "SUM: " << sum <<'\n';
    vec.push_back(sum);
  }

  float average = accumulate(vec.begin(), vec.end(), 0.0)/vec.size();
  std::cout << "Estimated integral: " << average;
  
  return 0; 
}