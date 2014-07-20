// Program to convert from Celsius degree units into Fahrenheit degree units:
//
// Fahrenheit = Celsius * (212 - 32)/100 + 32
//

#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[], char* envp[])
{
  // Enter the temperature in Celsius.
  int celsius;
  std::cout << "Enter the temperature in Celsius: ";
  std::cin >> celsius;

  // Calculate conversion factor for Celsius to Fahrenheit.
  int factor;
  factor = 212 - 32;

  // Use conversion factor to convert Celsius into Fahrenheit values.
  int fahrenheit;
  fahrenheit = factor * celsius / 100 + 32;

  // Output the results (followed by a NewLine).
  std::cout << "Fahrenheit values is: ";
  std::cout << fahrenheit << std::endl;

  return 0;
}
