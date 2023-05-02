//
// Created by Guanhao Huang Chen on 3/27/23.
//

#ifndef DROPDOWNMENU_HELPER_H
#define DROPDOWNMENU_HELPER_H


#include <SFML/Graphics.hpp>
#include <cmath>
class Helper
{
public:
    template<typename T>
    static void centerText(const T &obj, sf::Text &text);
};

#include "Helper.cpp"


#endif //DROPDOWNMENU_HELPER_H
