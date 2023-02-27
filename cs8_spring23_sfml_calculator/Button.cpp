//
// Created by Dave R. Smith on 2/14/23.
//

#include "Button.h"

Button::Button()
: Button("=", sf::Color::White, {255, 149, 0})
{

}

Button::Button(const std::string &text)
: Button(text,sf::Color::White, {255, 149, 0})//212, 212, 0
{

}

Button::Button(const std::string &text,
               const sf::Color &textColor, const sf::Color &backgroundColor)
{
    init(text, textColor, backgroundColor);
}

void Button::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    window.draw(circle);
    window.draw(text);
}

void Button::setBackgroundColor(const sf::Color &color)
{
    circle.setFillColor(color);
}

void Button::setTextColor(const sf::Color &color)
{
    text.setFillColor(color);
}

void Button::setText(const std::string &text)
{
    this->text.setString(text);
}

const std::string Button::getText() const
{
    return text.getString();
}

void Button::setPosition(sf::Vector2f position)
{
circle.setPosition(position.x-(circle.getRadius()*2),position.y-(circle.getRadius()*2));
text.setPosition(position.x-circle.getRadius(),position.y-circle.getRadius());
}

void Button::setSize(float size)
{
}

void Button::init(const std::string &text, const sf::Color &textColor, const sf::Color &backgroundColor)
{
    this->text.setFont(Font::getFont());
    this->text.setString(text);
    this->text.setFillColor(textColor);

    this->text.setCharacterSize(48);

    circle.setFillColor(backgroundColor);
    circle.setRadius(40);

    Helper::centerText(circle, this->text);
}

sf::FloatRect Button::getGlobalBounds()
{
    return circle.getGlobalBounds();
}
