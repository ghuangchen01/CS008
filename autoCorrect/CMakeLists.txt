cmake_minimum_required(VERSION 3.24)
project(autoCorrect)

set(CMAKE_CXX_STANDARD 17)

add_executable(autoCorrect main.cpp window/Application.cpp window/Application.h window/GUIComponent.cpp window/GUIComponent.h fonts/Font.cpp fonts/Font.h window/PageElement.cpp window/PageElement.h window/TextBox.cpp window/TextBox.h typing/letter.cpp typing/letter.h typing/MultiText.cpp typing/MultiText.h typing/Typing.cpp typing/Typing.h autoCorrect/Suggestion.cpp autoCorrect/Suggestion.h autoCorrect/Word.cpp autoCorrect/Word.h autoCorrect/FileReader.cpp autoCorrect/FileReader.h autoCorrect/Heap/Heap.cpp autoCorrect/Heap/Heap.h)
target_link_libraries(autoCorrect sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)