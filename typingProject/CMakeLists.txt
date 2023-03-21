cmake_minimum_required(VERSION 3.24)
project(typingProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(typingProject main.cpp window/Application.cpp window/Application.h window/GUIComponent.cpp window/GUIComponent.h fonts/Font.cpp fonts/Font.h window/PageElement.cpp window/PageElement.h window/TextBox.cpp window/TextBox.h Cursor.cpp Cursor.h typing/letter.cpp typing/letter.h typing/MultiText.cpp typing/MultiText.h typing/Typing.cpp typing/Typing.h)
target_link_libraries(typingProject sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)