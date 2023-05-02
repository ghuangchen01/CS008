//
// Created by Guanhao Huang Chen on 4/25/23.
//

#include "profileIcon.h"

profileIcon::profileIcon() {
    circle.setTexture(&Icon::getTexture());
    circle.setRadius(30);
}

profileIcon::profileIcon(sf::RenderTarget &window) {
    float x = window.getSize().x - 100;
    circle.setPosition({x,10});
    circle.setTexture(&Icon::getTexture());
    circle.setRadius(30);

}

void profileIcon::setPosition(sf::Vector2f pos) {
    circle.setPosition(pos);
}

void profileIcon::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(circle);
}

void profileIcon::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    if(MouseEvents::isClick(circle,window)){
        setState(Selected, true);
    }
    if(MouseEvents::clickWindow(circle,window)){
        setState(Selected, false);
    }
}

void profileIcon::update() {

}

sf::Vector2f profileIcon::getPosition() {
    return circle.getPosition();
}

sf::FloatRect profileIcon::getGlobalBounds() {
    return circle.getGlobalBounds();
}

