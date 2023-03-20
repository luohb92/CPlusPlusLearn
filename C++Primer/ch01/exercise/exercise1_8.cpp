//
// Created by 罗海波 on 3/19/23.
//
#include <iostream>
int main(){
  std::cout << "/*";
  std::cout << "*/";
  std::cout << /* "*/ "*/;
  std::cout << /* "*/" /* "/*" */;
  return 0;
}