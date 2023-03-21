//
// Created by Guanhao Huang Chen on 3/20/23.
//

#include "TextBox.h"

void TextBox::eventHandler(sf::RenderWindow &window, sf::Event event) {

}

void TextBox::update() {

}

void TextBox::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(rectangle);
}

TextBox::TextBox(sf::Vector2f position, sf::Vector2f size) {
    rectangle.setPosition(position);
    rectangle.setFillColor(sf::Color::White);
    rectangle.setSize(size);
}
