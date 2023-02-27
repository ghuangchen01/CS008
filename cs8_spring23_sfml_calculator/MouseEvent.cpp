//
// Created by Guanhao Huang Chen on 2/16/23.
//

#include "MouseEvent.h"
#include <iostream>
bool MouseEvent::isClicked(Button& button,const sf::RenderWindow &window) {
    sf::Vector2f pos = (sf::Vector2f)sf::Mouse::getPosition(window);
    return button.getGlobalBounds().contains(pos)&& sf::Mouse::isButtonPressed(sf::Mouse::Left);
}

bool MouseEvent::isNotClicked(const sf::RenderWindow &window) {
    sf::Vector2f pos = (sf::Vector2f)sf::Mouse::getPosition(window);
    return !sf::Mouse::isButtonPressed(sf::Mouse::Left);
}

