//
// Created by Guanhao Huang Chen on 4/27/23.
//

#include "BoxLabel.h"

BoxLabel::BoxLabel() {
    label.setFont(Font::getFont());
    label.setCharacterSize(30);
    label.setFillColor(sf::Color::White);
}

BoxLabel::BoxLabel(std::string word,sf::Vector2f pos) {
    BoxLabel();
    label.setString(word);
    label.setPosition(pos);
}

void BoxLabel::setText(std::string word) {
    label.setString(word);
}

void BoxLabel::setPos(sf::Vector2f pos) {
    label.setPosition(pos);
}

void BoxLabel::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    if(!checkState(HIDDEN)){
        window.draw(label);
    }
}

void BoxLabel::addEventHandler(sf::RenderWindow &window, sf::Event event) {

}

void BoxLabel::update() {

}

sf::Vector2f BoxLabel::getPosition() {
    return label.getPosition();
}

sf::FloatRect BoxLabel::getGlobalBounds() {
    return label.getGlobalBounds();
}
