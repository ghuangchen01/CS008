//
// Created by Dave R. Smith on 2/14/23.
//

#ifndef CS8_SPRING23_SFML_CALCULATOR_HELPER_H
#define CS8_SPRING23_SFML_CALCULATOR_HELPER_H

#include <SFML/Graphics.hpp>
#include <cmath>
class Helper
{
public:
    template<typename T>
    static void centerText(const T &obj, sf::Text &text);
};

#include "Helper.cpp"
#endif //CS8_SPRING23_SFML_CALCULATOR_HELPER_H
