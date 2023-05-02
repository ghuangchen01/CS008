//
// Created by Guanhao Huang Chen on 4/13/23.
//

#include "Image.h"
sf::Texture Image::file;
sf::Texture Image::folder;
bool Image::textures_loaded = false;

void Image::loadFile() {
    file.loadFromFile("icon/file.png");
}

void Image::loadFolder() {
    folder.loadFromFile("icon/folder.png");
}

void Image::loadTextures() {
    if (!textures_loaded) {
        loadFile();
        loadFolder();
        textures_loaded = true;
    }
}

sf::Texture& Image::getFile() {
    loadTextures();
    return file;
}

sf::Texture& Image::getFolder() {
    loadTextures();
    return folder;
}
