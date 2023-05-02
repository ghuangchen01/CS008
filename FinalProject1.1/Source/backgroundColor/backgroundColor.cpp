//
// Created by Guanhao Huang Chen on 4/27/23.
//

#include "backgroundColor.h"
sf::Color backgroundColor::background;


const sf::Color backgroundColor::getColor() {
    sf::Color bc(43, 47, 54);
    background = bc;
    return background;
}
