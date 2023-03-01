//
// Created by Guanhao Huang Chen on 2/28/23.
//

#ifndef TYPINGSFML_GUICOMPONENT_H
#define TYPINGSFML_GUICOMPONENT_H


#include "SFML/Graphics.hpp"

class GUIComponent : public sf::Drawable{
public:
    virtual void eventHandler(sf::RenderWindow& window,sf::Event event) = 0;
    virtual void update() = 0;
};


#endif //TYPINGSFML_GUICOMPONENT_H
