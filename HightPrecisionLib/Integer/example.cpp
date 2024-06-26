#include <iostream>

#include "hp_int.h"  // NOLINT


int main() {
  hp::Num num1 = INT_MAX;
  hp::Num num2 = INT_MAX - 1;
  std::cout << "Input a integer num:\n";
  std::cin >> num2;
  std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
  std::cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
  std::cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
  std::cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
  std::cout << num1 << " % " << num2 << " = " << num1 % num2 << '\n';
  int index = 42;
  std::cout << num1 << " ^ " << index << " = " << pow(num1, index) << '\n';
  std::cout << '-' << num1 << "= " << -num1 << '\n';
  std::cout << "|" << num1 << "| = " << abs(num1) << '\n';
  system("pause");
  return 0;
}
