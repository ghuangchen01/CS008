//
// Created by Guanhao Huang Chen on 2/22/23.
//

#ifndef SFMLTUTORIAL_GUICOMPONENT_H
#define SFMLTUTORIAL_GUICOMPONENT_H
#include "SFML/Graphics.hpp"

class GUIComponent : public sf::Drawable{
public:
    virtual void eventHandler(sf::RenderWindow& window,sf::Event event) = 0;
    virtual void update() = 0;
};


#endif //SFMLTUTORIAL_GUICOMPONENT_H
