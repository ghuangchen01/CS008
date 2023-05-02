//
// Created by Guanhao Huang Chen on 4/24/23.
//
#ifndef TYPINGPROJECTSFML_NEW__MOUSEEVENTS_CPP
#define TYPINGPROJECTSFML_NEW__MOUSEEVENTS_CPP
#include "MouseEvents.h"

template<class T>
bool MouseEvents::isHover(const T &Obj, const sf::RenderWindow &window) {
    sf::Vector2f mpos = (sf::Vector2f)sf::Mouse::getPosition(window);
    return Obj.getGlobalBounds().contains(mpos);
}

template<class T>
bool MouseEvents::isClick(const T &Obj, const sf::RenderWindow &window) {
    return isHover(Obj, window) && sf::Mouse::isButtonPressed(sf::Mouse::Left);
}

template<class T>
bool MouseEvents::clickWindow(const T &Obj, const sf::RenderWindow &window) {
    return !isHover(Obj,window)&&sf::Mouse::isButtonPressed(sf::Mouse::Left);
}

#endif