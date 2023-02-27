//
// Created by Dave R. Smith on 2/14/23.
//

#ifndef CS8_SPRING23_SFML_CALCULATOR_BUTTON_H
#define CS8_SPRING23_SFML_CALCULATOR_BUTTON_H

#include <SFML/Graphics.hpp>
#include "Font.h"
#include "Helper.h"

class Button : public sf::Drawable
{
private:
    sf::CircleShape circle;
    sf::Text text;
public:
    Button();
    Button(const std::string& text);
    Button(const std::string& text, const sf::Color& textColor,
           const sf::Color& backgroundColor);
    virtual void draw(sf::RenderTarget& window,sf::RenderStates states) const;
    void setBackgroundColor(const sf::Color& color);
    void setTextColor(const sf::Color& color);
    void setText(const std::string& text);
    const std::string getText() const;
    void setPosition(sf::Vector2f position);
    void setSize(float size);
    sf::FloatRect getGlobalBounds();
    void init(const std::string &text, const sf::Color &color, const sf::Color &color1);
};


#endif //CS8_SPRING23_SFML_CALCULATOR_BUTTON_H
