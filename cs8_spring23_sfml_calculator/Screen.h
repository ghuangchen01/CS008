//
// Created by Dave R. Smith on 2/14/23.
//

#ifndef CS8_SPRING23_SFML_CALCULATOR_SCREEN_H
#define CS8_SPRING23_SFML_CALCULATOR_SCREEN_H
#include "SFML/Graphics.hpp"
#include <iostream>
#include "Font.h"
class Screen:public sf::Drawable
{
private:
    sf::Text text;
    float x = 400 , y = 100;
public:
    Screen();
    void setText(std::string text);
    void setPosition();
    std::string getText();
    virtual void draw(sf::RenderTarget& window,sf::RenderStates states) const;
    void reset();
};


#endif //CS8_SPRING23_SFML_CALCULATOR_SCREEN_H
