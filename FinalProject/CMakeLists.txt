cmake_minimum_required(VERSION 3.24)
project(FinalProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(FinalProject main.cpp window/Application.cpp window/Application.h window/EventHandler.cpp window/EventHandler.h window/GUIComponent.cpp window/GUIComponent.h window/History.cpp window/History.h window/KeyShortcuts.cpp window/KeyShortcuts.h window/MouseEvents.cpp window/MouseEvents.h window/Snapshot.cpp window/Snapshot.h window/SnapshotInterface.cpp window/SnapshotInterface.h window/State.cpp window/State.h window/StateEnum.h Driver.cpp Driver.h testGui.cpp testGui.h)
target_link_libraries(FinalProject sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)