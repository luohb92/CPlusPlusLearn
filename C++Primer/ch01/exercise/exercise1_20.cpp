//
// Created by 罗海波 on 3/20/23.
//
#include <iostream>
#include "../Sales_item.h"
int main(){
  Sales_item book;
  std::cout << "请输入销售记录: " << std::endl;
  while (std::cin >> book) {
    std::cout << "ISBN 售出本书 销售额和平均售价为" << book << std::endl;
  }
  return 0;
}