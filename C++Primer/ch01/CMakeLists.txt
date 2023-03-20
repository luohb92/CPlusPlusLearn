#CMake最低版本要求
cmake_minimum_required(VERSION 3.22)
#项目名称
project(C++Primer)

set(CMAKE_CXX_STANDARD 11)
#生成可执行文件，C++Primer 是可执行文件的名字，exercise/exercise1_1.cpp是源文件名称，如有其他源文件，可在后面添加
add_executable(C++Primer  demo06.cpp)
