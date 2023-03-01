cmake_minimum_required(VERSION 3.24)
project(TypingSFML)

set(CMAKE_CXX_STANDARD 17)

add_executable(TypingSFML main.cpp Application.cpp Application.h GUIComponent.cpp GUIComponent.h Font.cpp Font.h Typing.cpp Typing.h textBox.cpp textBox.h)
target_link_libraries(TypingSFML sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)