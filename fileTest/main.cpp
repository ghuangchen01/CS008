#include <iostream>
#include "window/Application.h"
#include "FileTree/FileTree.h"
int main() {
    Application app({2040,1080,30},"Motto Order",sf::Color::Black);
    FileTree fileTree;
    fileTree.push("Root", "Folder1");
    fileTree.push("Root", "Folder2");
    fileTree.push("Folder1", "Folder1_1");
    fileTree.push("Folder1", "Folder1_2");
    fileTree.push("Folder1_1", "File1_1_1");
    app.addDrawable(fileTree);
    app.run();
}
