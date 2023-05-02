cmake_minimum_required(VERSION 3.24)
project(DropDownMenu)

set(CMAKE_CXX_STANDARD 17)

add_executable(DropDownMenu main.cpp MouseEvents.cpp MouseEvents.h fonts/Font.cpp fonts/Font.h Item.cpp Item.h window/Application.cpp window/GUIComponent.cpp window/Application.h window/GUIComponent.h Helper.cpp Helper.h ItemList.cpp ItemList.h InputBox.cpp InputBox.h DropdownMenu.cpp DropdownMenu.h)
target_link_libraries(DropDownMenu sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)