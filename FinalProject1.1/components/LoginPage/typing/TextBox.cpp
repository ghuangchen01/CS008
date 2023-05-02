//
// Created by Guanhao Huang Chen on 4/27/23.
//

#include "TextBox.h"

TextBox::TextBox() {
    textBox.setFillColor(backgroundColor::getColor());
    textBox.setOutlineColor(sf::Color::White);
    textBox.setOutlineThickness(2);
}

TextBox::TextBox(const float width, const float height,sf::Vector2f pos) {
    TextBox();
    textBox.setSize({width,height});
    textBox.setPosition(pos);
}

void TextBox::setPosition(sf::Vector2f pos) {
    textBox.setPosition(pos);
}

void TextBox::setBoxSize(const float width, const float height) {
    textBox.setSize({width,height});
}

void TextBox::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    if(!checkState(HIDDEN)){
        window.draw(textBox);
    }
}

void TextBox::addEventHandler(sf::RenderWindow &window, sf::Event event) {

}

void TextBox::update() {
}

sf::Vector2f TextBox::getPosition() {
    return textBox.getPosition();
}

sf::FloatRect TextBox::getGlobalBounds() {
    return textBox.getGlobalBounds();
}

const sf::RectangleShape &TextBox::getBox() {
    return textBox;
}
