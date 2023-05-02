//
// Created by Guanhao Huang Chen on 3/20/23.
//

#ifndef TYPINGPROJECT_FONT_H
#define TYPINGPROJECT_FONT_H


#include <SFML/Graphics.hpp>

class Font
{
private:
    static sf::Font font;
    static void loadFont();
public:

    static sf::Font& getFont();
};


#endif //TYPINGPROJECT_FONT_H
