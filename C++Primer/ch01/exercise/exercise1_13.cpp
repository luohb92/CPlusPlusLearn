//
// Created by 罗海波 on 3/19/23.
//
#include <iostream>
int main(){
  int sum = 0;
  for (int i = 50; i <= 100 ; ++i) {
    sum += i;
  }
  std::cout << "50 到 100 之间的整数之和为" << sum << std::endl;
  return 0;
}