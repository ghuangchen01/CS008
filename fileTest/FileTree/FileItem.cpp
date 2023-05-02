//
// Created by Guanhao Huang Chen on 4/29/23.
//

#include "FileItem.h"

void FileItem::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    Box::draw(window, states);
}

void FileItem::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    Box::addEventHandler(window, event);
}

void FileItem::update() {
    Box::update();
}

sf::Vector2f FileItem::getPosition() {
    return Box::getPosition();
}

sf::FloatRect FileItem::getGlobalBounds() {
    return Box::getGlobalBounds();
}

FileItem::FileItem() {

}

FileItem::FileItem(sf::Texture icon, const std::string &text, sf::Vector2f size, sf::Vector2f position) {
    setIcon(icon);
}

void FileItem::setPosition(const sf::Vector2f &pos) {
    Box::setPosition(pos);
    icon.setPosition(pos);
}

void FileItem::setIcon(sf::Texture icon) {
    this->icon.setTexture(icon);
}
