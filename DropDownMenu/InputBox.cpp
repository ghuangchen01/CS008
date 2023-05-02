//
// Created by Guanhao Huang Chen on 3/27/23.
//

#include "InputBox.h"
void InputBox::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(textBox);
    target.draw(text);
}

InputBox::InputBox() {
    textBox.setOutlineColor(sf::Color::White);
    textBox.setFillColor(sf::Color::Black);
    textBox.setOutlineThickness(2);
    text.setFont(Font::getFont());
    text.setCharacterSize(30);
}

void InputBox::setString(std::string word) {
    text.setString(word);
    Helper::centerText(textBox,text);
}

void InputBox::setPosition(sf::Vector2f pos) {
    textBox.setPosition(pos);
    Helper::centerText(textBox,text);
}

void InputBox::setSize(sf::Vector2f size) {
    textBox.setSize(size);
}

sf::RectangleShape &InputBox::getTextBox() {
    return textBox;
}
