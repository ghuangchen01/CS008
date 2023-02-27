cmake_minimum_required(VERSION 3.24)
project(Stack)

set(CMAKE_CXX_STANDARD 17)

add_executable(Stack main.cpp Stack.cpp Stack.h LinkedList.cpp LinkedList.h Node.h Queue.cpp Queue.h Iterator.cpp Iterator.h Chapter5Num11.cpp Chapter5Num11.h)
