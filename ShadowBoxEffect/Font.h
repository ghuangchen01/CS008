//
// Created by Guanhao Huang Chen on 2/15/23.
//

#ifndef SHADOWBOXEFFECT_FONT_H
#define SHADOWBOXEFFECT_FONT_H

#include <SFML/Graphics.hpp>

class Font
{
private:
    static sf::Font font;
    static void loadFont();
public:

    static sf::Font& getFont();
};


#endif //SHADOWBOXEFFECT_FONT_H
