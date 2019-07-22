#include <iostream>
#include <fstream>

int find(int arr[], int len, int seek)
{
  for(int i = 0; i < len; ++i)
  {
    if (arr[i] == seek) return i;
  }
  return -1;
}

int main()
{
  int val, steps, temp = 0;
  int ceiling = 10000;
  
  int stepArr[ceiling+2];

  std::ofstream myFile;
  myFile.open("collatz.csv");
  myFile << "Number,Steps\n";

  for (int i = 2; i <= ceiling; ++i)
  {
    val = i;
    steps = 0;
    while (val > 1)
    {
      if (val % 2 == 0)
      {
        int val2;
        val2 = val/2;
        val = val2;
        ++steps;
      }
      else 
      {
        int val3;
        val3 = 3 * val + 1;
        val = val3;
        ++steps;
      }
      stepArr[i] = steps;
    }
    myFile << i << "," << steps << "\n";
  }

  
  for (int i = 2; i < ceiling; ++i)
  {
    if (stepArr[i] > temp) temp = stepArr[i];
  }

  int x = find(stepArr, ceiling+2, temp);
  std::cout << "Most Steps: " << temp <<"\n";
  std::cout << "Number: " << x << "\n";
  return 0;
}