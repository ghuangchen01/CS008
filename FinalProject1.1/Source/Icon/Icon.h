//
// Created by Guanhao Huang Chen on 4/25/23.
//

#ifndef FINALPROJECT1_1_ICON_H
#define FINALPROJECT1_1_ICON_H
#include "SFML/Graphics.hpp"
#include "iostream"
class Icon {
private:
    static sf::Texture icon;
    static void loadIcon();
public:
    static sf::Texture& getTexture();
};


#endif //FINALPROJECT1_1_ICON_H
