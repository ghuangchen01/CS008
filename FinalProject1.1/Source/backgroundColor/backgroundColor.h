//
// Created by Guanhao Huang Chen on 4/27/23.
//

#ifndef FINALPROJECT1_1_BACKGROUNDCOLOR_H
#define FINALPROJECT1_1_BACKGROUNDCOLOR_H
#include "SFML/Graphics.hpp"

class backgroundColor {
private:
    static sf::Color background;
public:
    static const sf::Color getColor();
};


#endif //FINALPROJECT1_1_BACKGROUNDCOLOR_H
