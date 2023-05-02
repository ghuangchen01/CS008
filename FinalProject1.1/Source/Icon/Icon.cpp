//
// Created by Guanhao Huang Chen on 4/25/23.
//

#include "Icon.h"
sf::Texture Icon::icon;
void Icon::loadIcon() {
    icon.loadFromFile("Source/Icon/catIcon.jpeg");
}

sf::Texture &Icon::getTexture() {
    loadIcon();
    return icon;
}
