cmake_minimum_required(VERSION 3.24)
project(ShadowBoxEffect)

set(CMAKE_CXX_STANDARD 17)

add_executable(ShadowBoxEffect main.cpp Font.cpp Font.h Text.cpp Text.h Color.cpp Color.h)
target_link_libraries(ShadowBoxEffect sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)