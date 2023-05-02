cmake_minimum_required(VERSION 3.24)
project(TypingProjectSFML_new_)

set(CMAKE_CXX_STANDARD 14)

include_directories(fonts)
include_directories(typing)
include_directories(window)

add_executable(TypingProjectSFML_new_
        fonts/Font.cpp
        fonts/Font.h
        typing/letter.cpp
        typing/letter.h
        typing/MultiText.cpp
        typing/MultiText.h
        typing/TextInput.cpp
        typing/TextInput.h
        window/Application.cpp
        window/Application.h
        window/EventHandler.cpp
        window/EventHandler.h
        window/GUIComponent.cpp
        window/GUIComponent.h
        window/History.cpp
        window/History.h
        window/KeyShortcuts.cpp
        window/KeyShortcuts.h
        window/MouseEvents.cpp
        window/MouseEvents.h
        window/Snapshot.cpp
        window/Snapshot.h
        window/SnapshotInterface.cpp
        window/SnapshotInterface.h
        window/State.cpp
        window/State.h
        window/StateEnum.h
        main.cpp)


target_link_libraries(TypingProjectSFML_new_ sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)