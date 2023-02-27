//
// Created by Guanhao Huang Chen on 2/16/23.
//

#ifndef CS8_SPRING23_SFML_CALCULATOR_MOUSEEVENT_H
#define CS8_SPRING23_SFML_CALCULATOR_MOUSEEVENT_H
#include "SFML/Graphics.hpp"
#include "Button.h"

class MouseEvent{
public:
    static bool isClicked(Button& button,const sf::RenderWindow &window);
    static bool isNotClicked(const sf::RenderWindow &window);
};


#endif //CS8_SPRING23_SFML_CALCULATOR_MOUSEEVENT_H
