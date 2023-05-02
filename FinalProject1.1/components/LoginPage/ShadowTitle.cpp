//
// Created by Guanhao Huang Chen on 4/29/23.
//

#include "ShadowTitle.h"

void ShadowTitle::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    if(!checkState(HIDDEN)){
        window.draw(text);
        window.draw(reverse);
    }
}

void ShadowTitle::addEventHandler(sf::RenderWindow &window, sf::Event event) {

}

void ShadowTitle::update() {

}

sf::Vector2f ShadowTitle::getPosition() {
    return text.getPosition();
}

sf::FloatRect ShadowTitle::getGlobalBounds() {
    return text.getGlobalBounds();
}

ShadowTitle::ShadowTitle() {
    std::string name = "Guan Hao Huang Chen";
    sf::Color shadowColor(127, 128, 111);
    sf::Color textColor(221, 222, 191);
    text.setFont(Font::getFont());
    text.setFillColor(textColor);
    text.setCharacterSize(150);
    text.setOutlineThickness(4);
    text.setOutlineColor(sf::Color::White);
    reverse.setFont(Font::getFont());
    reverse.setCharacterSize(150);
    reverse.setFillColor(shadowColor);
    reverse.setScale({1,-0.5});
}

void ShadowTitle::setText(std::string word) {
    text.setString(word);
    reverse.setString(word);
}

void ShadowTitle::setPosition(sf::Vector2f pos) {
    text.setPosition(pos);
    reverse.setPosition({pos.x,pos.y+250});
}
