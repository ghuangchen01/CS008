cmake_minimum_required(VERSION 3.17)
project(cs8_spring23_sfml_calculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(cs8_spring23_sfml_calculator main.cpp Base.cpp Base.h Button.cpp Button.h Screen.cpp Screen.h Calculator.cpp Calculator.h Font.cpp Font.h Helper.cpp Helper.h Application.cpp Application.h MouseEvent.cpp MouseEvent.h RPN.cpp RPN.h)
target_link_libraries(cs8_spring23_sfml_calculator sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)