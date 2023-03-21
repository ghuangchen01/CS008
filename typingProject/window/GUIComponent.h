//
// Created by Guanhao Huang Chen on 3/20/23.
//

#ifndef TYPINGPROJECT_GUICOMPONENT_H
#define TYPINGPROJECT_GUICOMPONENT_H


#include "SFML/Graphics.hpp"

class GUIComponent : public sf::Drawable{
public:
    virtual void eventHandler(sf::RenderWindow& window,sf::Event event) = 0;
    virtual void update() = 0;
};


#endif //TYPINGPROJECT_GUICOMPONENT_H
