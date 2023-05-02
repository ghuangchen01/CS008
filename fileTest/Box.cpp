//
// Created by Guanhao Huang Chen on 4/25/23.
//

#include "Box.h"
#include "iostream"
Box::Box() {
    setBox();
}

Box::Box(std::string word, GUIComponent* object) {
    text.setString(word);
    box.setPosition(object->getPosition().x,object->getPosition().y+object->getGlobalBounds().height);
    setBox();
}

Box::Box(std::string word, sf::Vector2f pos) {
    text.setString(word);
    box.setPosition(pos);
    setBox();
}

void Box::setBox() {
    box.setOutlineColor(sf::Color::White);
    box.setFillColor(sf::Color::Black);
    box.setOutlineThickness(2);
    box.setSize({200,50});
    text.setFont(Font::getFont());
    text.setFillColor(sf::Color::White);
    Helper::centerText(box,text);
}

void Box::setPosition(sf::Vector2f pos) {
    box.setPosition(pos);
    Helper::centerText(box,text);
}

void Box::setColor(sf::Color color) {
    box.setFillColor(color);
}

void Box::setText(std::string word) {
    text.setString(word);
}

void Box::setTextColor(sf::Color color) {
    text.setFillColor(color);
}

void Box::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(box);
    window.draw(text);
}

void Box::addEventHandler(sf::RenderWindow &window, sf::Event event) {

}

void Box::update() {

}

sf::Vector2f Box::getPosition() {
    return box.getPosition();
}

sf::FloatRect Box::getGlobalBounds() {
    return box.getGlobalBounds();
}

const sf::RectangleShape Box::getBox() {
    return box;
}

const std::string Box::getText() {
    return text.getString();
}
