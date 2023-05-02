//
// Created by Guanhao Huang Chen on 4/29/23.
//

#include "ErrorSignal.h"

void ErrorSignal::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    if(!checkState(HIDDEN)){
        window.draw(signal);
    }
}

void ErrorSignal::addEventHandler(sf::RenderWindow &window, sf::Event event) {

}

void ErrorSignal::update() {

}

sf::Vector2f ErrorSignal::getPosition() {
    return signal.getPosition();
}

sf::FloatRect ErrorSignal::getGlobalBounds() {
    return signal.getGlobalBounds();
}

ErrorSignal::ErrorSignal() {
    setState(HIDDEN, true);
    signal.setFillColor(sf::Color::Red);
    signal.setFont(Font::getFont());
    signal.setCharacterSize(30);
}

void ErrorSignal::setString(std::string w) {
    signal.setString(w);
}

void ErrorSignal::setPosition(sf::Vector2f pos) {
    signal.setPosition(pos);
}
