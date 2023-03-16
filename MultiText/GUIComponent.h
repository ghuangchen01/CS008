//
// Created by Guanhao Huang Chen on 3/2/23.
//

#ifndef MULTITEXT_GUICOMPONENT_H
#define MULTITEXT_GUICOMPONENT_H


#include "SFML/Graphics.hpp"

class GUIComponent : public sf::Drawable{
public:
    virtual void eventHandler(sf::RenderWindow& window,sf::Event event) = 0;
    virtual void update() = 0;
};


#endif //MULTITEXT_GUICOMPONENT_H
