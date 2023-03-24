//
// Created by Guanhao Huang Chen on 3/20/23.
//

#include "MultiText.h"

MultiText::MultiText() {
}

void MultiText::setString(const std::string &word) {
    letter let;
    let.setString(word);
    let.setFillColor(color.front());
    color.pop_front();
    letterObjects.push_back(let);
    setValue();
    if(letterObjects.size()>14){
        reverse();
    }
}

const std::string MultiText::getString() {
    std::string tempString = "";
    for(auto iter  = letterObjects.begin();iter!=letterObjects.end();++iter){
        tempString = tempString + (*iter).getString();
    }
    return tempString;
}

void MultiText::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    for(auto iter = letterObjects.begin();iter!=letterObjects.end();++iter){
        window.draw(*iter);
        std::string tempWord = (*iter).getString();
    }

}

void MultiText::setCharacterSize(const int &size) {
    characterSize = size;
}

void MultiText::setFillColor(sf::Color c) {
    color.push_back(c);
}

void MultiText::setFont(sf::Font font) {
    this->font = font;
}

void MultiText::setValue() {
    int i =0;
    float sumBounds = 0;
    for(auto iter = letterObjects.begin();iter!=letterObjects.end();++iter){
        sumBounds = sumBounds + (*iter).getLetterSpacing()+15;
        float newXPosition = xPosition + sumBounds;
        (*iter).setPosition(newXPosition,yPosition);
        (*iter).setCharacterSize(characterSize);
        (*iter).setFont(font);
        i++;
    }
}

void MultiText::setX(const float &x) {
    xPosition = x;
}

void MultiText::setY(const float &y) {
    yPosition = y;
}

void MultiText::reverse() {
    letterObjects.pop_back();
}
