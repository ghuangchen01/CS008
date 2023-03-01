//
// Created by Guanhao Huang Chen on 2/28/23.
//

#ifndef TYPINGSFML_TEXTBOX_H
#define TYPINGSFML_TEXTBOX_H
#include "SFML/Graphics.hpp"
#include "Font.h"
#include <iostream>
class textBox: public sf::Drawable{
private:
    sf::Text text;
    float xPosition,yPosition;
    std::string word;
public:
    textBox();
    textBox(sf::RenderWindow& window,sf::Color color);
    void setX(const float& x);
    void setY(const float& y);
    float& getX();
    float& getY();
    void setFontColor(sf::Color color);
    void setString();
    void type(const std::string& word);
    std::string& getString();
    void reverse();
    void setPosition();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //TYPINGSFML_TEXTBOX_H
