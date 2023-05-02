cmake_minimum_required(VERSION 3.24)
project(MenuBar)

set(CMAKE_CXX_STANDARD 17)

add_executable(MenuBar main.cpp button/Box.cpp button/Box.h DropDownMenu/DropDownMenu.cpp DropDownMenu/DropDownMenu.h window/Helper/Helper.cpp window/Helper/Helper.h window/Helper/KeyShortcuts.cpp window/Helper/KeyShortcuts.h window/Helper/KeyTyping.cpp window/Helper/KeyTyping.h window/Helper/MouseEvents.cpp window/Helper/MouseEvents.h window/Helper/State.cpp window/Helper/State.h window/Helper/StateEnum.h window/Application.cpp window/Application.h window/EventHandler.cpp window/EventHandler.h window/GUIComponent.cpp window/GUIComponent.h window/History.cpp window/History.h window/Snapshot.cpp window/Snapshot.h window/SnapshotInterface.cpp window/SnapshotInterface.h MenuBar.cpp MenuBar.h fonts/Font.cpp)
target_link_libraries(MenuBar sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)