//
// Created by Guanhao Huang Chen on 4/27/23.
//

#include "BlinkingCursor.h"

void BlinkingCursor::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if(!checkState(HIDDEN)){
        target.draw(text);
    }
}

void BlinkingCursor::setPos(sf::Vector2f pos,float width) {
    text.setPosition({pos.x+width+3,pos.y});
}

void BlinkingCursor::addEventHandler(sf::RenderWindow &window, sf::Event event) {

}

void BlinkingCursor::update() {
    if(!checkState(HIDDEN)){
        if(clock.getElapsedTime().asMilliseconds() > 500) {
            text.setString(' ');
        }
        if(clock.getElapsedTime().asMilliseconds() > 1000) {
            text.setString('|');
            clock.restart();
        }
    }
}

sf::Vector2f BlinkingCursor::getPosition() {
    return text.getPosition();
}

sf::FloatRect BlinkingCursor::getGlobalBounds() {
    return text.getGlobalBounds();
}

BlinkingCursor::BlinkingCursor() {
    text.setFillColor(sf::Color::White);
    text.setFont(Font::getFont());
    text.setCharacterSize(30);
    setState(HIDDEN, true);
}
