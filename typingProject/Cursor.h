//
// Created by Guanhao Huang Chen on 3/20/23.
//

#ifndef TYPINGPROJECT_CURSOR_H
#define TYPINGPROJECT_CURSOR_H
#include "SFML/Graphics.hpp"
#include "window/GUIComponent.h"

class Cursor: public GUIComponent{
    sf::Text cursor;
    sf::Vector2f box1Position;
    sf::Vector2f box2Position;
    bool inBox1 = false, inBox2 = false;
};


#endif //TYPINGPROJECT_CURSOR_H
