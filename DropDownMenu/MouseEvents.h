//
// Created by Guanhao Huang Chen on 3/27/23.
//

#ifndef DROPDOWNMENU_MOUSEEVENTS_H
#define DROPDOWNMENU_MOUSEEVENTS_H


#include <SFML/Graphics.hpp>

class MouseEvents {
public:
    template<class T>
    static bool isHover(const T& Obj , const sf::RenderWindow& window);

    template<class T>
    static bool isClick(const T& Obj , const sf::RenderWindow& window);

    template<class T>
    static bool isNotClick(const T& Obj , const sf::RenderWindow& window);

};

#include "MouseEvents.cpp"


#endif //DROPDOWNMENU_MOUSEEVENTS_H
