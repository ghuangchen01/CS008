//
// Created by Guanhao Huang Chen on 2/15/23.
//

#ifndef SHADOWBOXEFFECT_TEXT_H
#define SHADOWBOXEFFECT_TEXT_H
#include <SFML/Graphics.hpp>

class Text :public sf::Drawable{
private:
    sf::Text text;
    sf::Text reverse;
public:
    Text();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};


#endif //SHADOWBOXEFFECT_TEXT_H
