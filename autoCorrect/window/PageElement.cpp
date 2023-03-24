//
// Created by Guanhao Huang Chen on 3/20/23.
//

#include "PageElement.h"

void PageElement::eventHandler(sf::RenderWindow &window, sf::Event event) {

}

void PageElement::update() {

}

void PageElement::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(text);
}

PageElement::PageElement(sf::Vector2f position, std::string word) {
    text.setFont(Font::getFont());
    text.setCharacterSize(30);
    text.setFillColor(sf::Color::White);
    text.setPosition(position);
    text.setString(word);
}
