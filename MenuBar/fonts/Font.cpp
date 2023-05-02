//
// Created by Guanhao Huang Chen on 3/20/23.
//

#include "Font.h"

sf::Font Font::font;

void Font::loadFont()
{
    font.loadFromFile("Source/fonts/OpenSans-Bold.ttf");
}

sf::Font &Font::getFont()
{
    loadFont();
    return font;
}