//
// Created by Guanhao Huang Chen on 4/13/23.
//

#include "Image.h"
sf::Texture Image::file;
sf::Texture Image::folder;
void Image::loadFile() {
    file.loadFromFile("FileTree/icon/file.png");
}

void Image::loadFolder() {
    folder.loadFromFile("FileTree/icon/folder.png");
}

sf::Texture Image::getFile() {
    loadFile();
    return file;
}

sf::Texture Image::getFolder() {
    loadFolder();
    return folder;
}
