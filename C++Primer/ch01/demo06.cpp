//
// Created by 罗海波 on 3/19/23.
//
#include <iostream>
int main(){
  int sum = 0, value = 0;
  while (std::cin >> value) {
    sum += value;
  }
  std::cout << "Sum is: " << sum << std::endl;
  return 0;
}