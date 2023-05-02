//
// Created by Guanhao Huang Chen on 4/24/23.
//

#ifndef TYPINGPROJECTSFML_NEW__EVENTHANDLER_H
#define TYPINGPROJECTSFML_NEW__EVENTHANDLER_H
#include "SFML/Graphics.hpp"

class EventHandler {
public:
    virtual void addEventHandler(sf::RenderWindow& window, sf::Event event) = 0;
    virtual void update() = 0;
};


#endif //TYPINGPROJECTSFML_NEW__EVENTHANDLER_H
