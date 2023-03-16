//
// Created by Guanhao Huang Chen on 3/2/23.
//

#include "Font.h"

sf::Font Font::font;

void Font::loadFont()
{
    font.loadFromFile("fonts/OpenSans-Bold.ttf");
}

sf::Font &Font::getFont()
{
    loadFont();
    return font;
}
