//
// Created by Guanhao Huang Chen on 4/13/23.
//

#ifndef FILETREE_IMAGE_H
#define FILETREE_IMAGE_H
#include "SFML/Graphics.hpp"

class Image {
private:
    static sf::Texture file;
    static sf::Texture folder;
    static bool textures_loaded;

    static void loadFile();
    static void loadFolder();
    static void loadTextures();
public:
    static sf::Texture& getFile();
    static sf::Texture& getFolder();
};


#endif //FILETREE_IMAGE_H
