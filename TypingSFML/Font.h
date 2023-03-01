//
// Created by Guanhao Huang Chen on 2/28/23.
//

#ifndef TYPINGSFML_FONT_H
#define TYPINGSFML_FONT_H

#include <SFML/Graphics.hpp>

class Font
{
private:
    static sf::Font font;
    static void loadFont();
public:

    static sf::Font& getFont();
};


#endif //TYPINGSFML_FONT_H
