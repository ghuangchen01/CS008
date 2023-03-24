//
// Created by Guanhao Huang Chen on 3/20/23.
//

#ifndef TYPINGPROJECT_MULTITEXT_H
#define TYPINGPROJECT_MULTITEXT_H

#include "SFML/Graphics.hpp"
#include "list"
#include "letter.h"
#include "iostream"
class MultiText:public sf::Drawable {
private:
    std::list<letter> letterObjects;
    float xPosition,yPosition;
    sf::Font font;
    float characterSize;
    std::list<sf::Color> color;
public:
    MultiText();

    void setCharacterSize(const int& size);
    void setFillColor(sf::Color color);
    void setFont(sf::Font font);
    void setValue();
    void setX(const float& x);
    void setY(const float& y);
    void setString(const std::string &word);
    void reverse();
    const std::string getString();

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

};


#endif //TYPINGPROJECT_MULTITEXT_H
