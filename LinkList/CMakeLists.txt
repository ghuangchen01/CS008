cmake_minimum_required(VERSION 3.24)
project(LinkList)

set(CMAKE_CXX_STANDARD 17)

add_executable(LinkList main.cpp LinkList.cpp LinkList.h Node.h Iterator.cpp Iterator.h)
