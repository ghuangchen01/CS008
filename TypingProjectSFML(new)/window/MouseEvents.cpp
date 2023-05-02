//
// Created by Guanhao Huang Chen on 4/24/23.
//
#ifndef TYPINGPROJECTSFML_NEW__MOUSEEVENTS_CPP
#define TYPINGPROJECTSFML_NEW__MOUSEEVENTS_CPP
#include "MouseEvents.h"

template<class T>
bool MouseEvents<T>::mouseClicked(T &object, sf::RenderWindow &window) {
    return isHover(object, window) && sf::Mouse::isButtonPressed(sf::Mouse::Left);
}

template<class T>
bool MouseEvents<T>::hovered(T &object, sf::RenderWindow &window) {
    sf::Vector2f mpos = (sf::Vector2f)sf::Mouse::getPosition(window);
    return object.getGlobalBounds().contains(mpos);
}

#endif