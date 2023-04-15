//
// Created by 罗海波 on 3/20/23.
//
#include <iostream>
int main(){
  int sum = 0, value = 0;
  std::cout << "请输入一些数，按 Command + D 表示结束" << std::endl;
  for (; std::cin >> value ;) {
    sum += value;
  }
  std::cout << "读入的数之和为 " << sum << std::endl;
  return 0;
}