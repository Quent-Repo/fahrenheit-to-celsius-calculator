//Grrkek

#include <iostream>

int main() {
  double C = 0;
  double F = 0;

  std::cout << "What temp is it in Fahrenheit atm: ";
  std::cin >> F;
  C = ((F -32)/1.8);
  std::cout << C;
}