//
// Created by Guanhao Huang Chen on 2/15/23.
//

#include "Text.h"
#include "Color.h"
#include "Font.h"
Text::Text() {
    Color color;
    std::string name = "Guan Hao Huang Chen";
    text.setString(name);
    text.setFont(Font::getFont());
    text.setFillColor(color.getColor());
    text.setCharacterSize(150);
    text.setPosition(200,100);
    reverse.setString(name);
    reverse.setFont(Font::getFont());
    reverse.setCharacterSize(150);
    sf::Color blue = sf::Color::Blue;
    blue.a = 80;
    reverse.setFillColor(blue);
    reverse.setPosition(200,400);
    reverse.setScale({1,-0.5});
}

void Text::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(text);
    window.draw(reverse);
}
