//
// Created by Guanhao Huang Chen on 3/27/23.
//

#include "Item.h"

void Item::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(rectangle);
    target.draw(text);
}

Item::Item() {

}

Item::Item(sf::Vector2f size, std::string word) {
    rectangle.setSize(size);
    rectangle.setFillColor(sf::Color::Black);
    text.setString(word);
    text.setFont(Font::getFont());
    text.setFillColor(sf::Color::White);
    text.setCharacterSize(30);
    Helper::centerText(rectangle, this->text);
}

void Item::setPosition(float x, float y) {
    rectangle.setPosition(x,y);
    Helper::centerText(rectangle, this->text);
}

void Item::setColor(sf::Color color) {
    rectangle.setFillColor(color);
}

const std::string Item::getString() {
    return text.getString();
}

sf::RectangleShape &Item::getRectangle() {
    return rectangle;
}
