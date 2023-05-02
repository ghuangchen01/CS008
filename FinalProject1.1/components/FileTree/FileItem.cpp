//
// Created by Guanhao Huang Chen on 4/29/23.
//

#include "FileItem.h"

void FileItem::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(box);
    window.draw(icon);
}

FileItem::FileItem(){
    box.setSize({350,70});
    box.setOutLine(0);
}

FileItem::FileItem(sf::Texture& image, std::string word, sf::Vector2f pos){
    FileItem();
    box.setText(word);
    box.setPosition(pos);
    setIcon(image);
}

void FileItem::setIcon(sf::Texture& image) {
    icon.setTexture(image);
//    float scaleFactor = (getBox().getGlobalBounds().height - 2 * padding) / icon.getGlobalBounds().height;
    icon.setScale(0.1, 0.1);

    // Position the icon and adjust the text
    icon.setPosition(box.getPosition().x + padding, box.getPosition().y + padding);
}

void FileItem::addEventHandler(sf::RenderWindow &window, sf::Event event) {

}

void FileItem::update() {

}

sf::Vector2f FileItem::getPosition() {
    return box.getPosition();
}

sf::FloatRect FileItem::getGlobalBounds() {
    return box.getGlobalBounds();
}

void FileItem::setText(std::string word) {
    box.setText(word);
}

void FileItem::setPos(sf::Vector2f pos) {
    box.setPosition(pos);
}

std::string FileItem::getText() {
    return box.getText();
}

Box& FileItem::getBox() {
    return box;
}

void FileItem::setColor(sf::Color color) {
    box.setColor(color);
}
