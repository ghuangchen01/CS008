cmake_minimum_required(VERSION 3.24)
project(fileTest)

set(CMAKE_CXX_STANDARD 17)

add_executable(fileTest main.cpp Box.cpp Box.h FileTree/FileItem.cpp FileTree/FileItem.h FileTree/icon/Image.cpp FileTree/icon/Image.h window/Helper/Helper.cpp window/Helper/Helper.h window/Helper/KeyShortcuts.cpp window/Helper/KeyShortcuts.h window/Helper/KeyTyping.cpp window/Helper/KeyTyping.h window/Helper/MouseEvents.cpp window/Helper/MouseEvents.h window/Helper/State.cpp window/Helper/State.h window/Helper/StateEnum.h window/Application.cpp window/Application.h window/EventHandler.cpp window/EventHandler.h window/GUIComponent.cpp window/GUIComponent.h window/History.cpp window/History.h window/Snapshot.cpp window/Snapshot.h window/SnapshotInterface.cpp window/SnapshotInterface.h fonts/Font.cpp fonts/Font.h FileTree/FileTree.cpp FileTree/FileTree.h FileTree/FileNode.cpp FileTree/FileNode.h)
target_link_libraries(fileTest sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)