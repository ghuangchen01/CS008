cmake_minimum_required(VERSION 3.24)
project(MultiText)

set(CMAKE_CXX_STANDARD 17)

add_executable(MultiText main.cpp letter.cpp letter.h MultiText.cpp MultiText.h Font.cpp Font.h GUIComponent.cpp GUIComponent.h textBox.cpp textBox.h Typing.cpp Typing.h Application.cpp Application.h)
target_link_libraries(MultiText sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)