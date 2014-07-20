// Program to demonstrate calculating an average with integers.
//

#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[], char* envp[])
{
  // Enter three numbers to average.
  int nValue1;
  int nValue2;
  int nValue3;
  std::cout << "Enter Value 1: ";
  std::cin >> nValue1;
  std::cout << "Enter Value 2: ";
  std::cin >> nValue2;
  std::cout << "Enter Value 3: ";
  std::cin >> nValue3;

  // Calculate average from integer into another integer.
  int nAverage1;
  nAverage1 = (nValue1 + nValue2 + nValue3) / 3;
  int nAverage2;
  nAverage2 = nValue1/3 + nValue2/3 + nValue3/3;

  // Output the results (followed by a NewLine).
  std::cout << "Average #1 is: ";
  std::cout << nAverage1 << std::endl;
  std::cout << "Average #2 is: ";
  std::cout << nAverage2 << std::endl;

  return 0;
}
