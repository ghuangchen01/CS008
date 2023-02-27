cmake_minimum_required(VERSION 3.24)
project(SFMLTutorial)

set(CMAKE_CXX_STANDARD 17)

add_executable(SFMLTutorial main.cpp Application.cpp Application.h GUIComponent.cpp GUIComponent.h Circle.cpp Circle.h)
target_link_libraries(SFMLTutorial sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)