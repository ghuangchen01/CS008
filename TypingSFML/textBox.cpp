//
// Created by Guanhao Huang Chen on 2/28/23.
//

#include "textBox.h"

textBox::textBox():xPosition(0),yPosition(0),word("") {
    text.setCharacterSize(55);
    text.setFont(Font::getFont());
    text.setPosition(xPosition,yPosition);
    text.setFillColor(sf::Color::White);
}

textBox::textBox(sf::RenderWindow& window,sf::Color color):xPosition((window.getSize().x/2)-27.5),yPosition((window.getSize().y/2)-55),word("") {
    text.setCharacterSize(55);
    text.setFillColor(color);
    text.setFont(Font::getFont());
    text.setPosition(xPosition,yPosition);
}

void textBox::setFontColor(sf::Color color) {
    text.setFillColor(color);
}

void textBox::setX(const float &x) {
    xPosition = (x/2)-27.5;
    std::cout<<"setx : "<<xPosition<<" \n";
}

void textBox::setY(const float &y) {
    yPosition = (y/2)-55;
    std::cout<<"sety : "<<yPosition<<" \n";

}

float &textBox::getX() {
    return xPosition;
}

float &textBox::getY() {
    return yPosition;
}

void textBox::setString() {

    text.setString(word);
    setPosition();
}

std::string &textBox::getString() {
    return word;
}

void textBox::type(const std::string &w) {
    word = word + w;
    while(word.size()>15){
        reverse();
    }
    setString();
}

void textBox::reverse() {
    word.pop_back();
    setString();
}

void textBox::setPosition() {
    float space = ((float)word.size()-1) * 12;
    std::cout<<"space : "<<space<<"\n";
    float newXPosition = xPosition - space;
    this->text.setPosition(newXPosition,yPosition);
    std::cout<<"x : "<<newXPosition<<" \ny : "<<yPosition<<"\n";
}

void textBox::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(text);
}
