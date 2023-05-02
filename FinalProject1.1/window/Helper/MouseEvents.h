//
// Created by Guanhao Huang Chen on 4/24/23.
//

#ifndef TYPINGPROJECTSFML_NEW__MOUSEEVENTS_H
#define TYPINGPROJECTSFML_NEW__MOUSEEVENTS_H
#include "SFML/Graphics.hpp"


class MouseEvents {
public:
    template<class T>
    static bool isHover(const T& Obj , const sf::RenderWindow& window);

    template<class T>
    static bool isClick(const T& Obj , const sf::RenderWindow& window);

    template<class T>
    static bool clickWindow(const T& Obj , const sf::RenderWindow& window);

};

#include "MouseEvents.cpp"
#endif //TYPINGPROJECTSFML_NEW__MOUSEEVENTS_H
