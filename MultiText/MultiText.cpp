//
// Created by Guanhao Huang Chen on 3/1/23.
//

#include "MultiText.h"

MultiText::MultiText() {
}

void MultiText::setString(const std::string &word) {
        letter let;
        let.setString(word);
        letterObjects.push_back(let);
        setValue();
        if(letterObjects.size()>14){
            reverse();
        }
}

const std::string &MultiText::getString() {
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
        std::cout<<tempWord<<"\n";
        std::cout<<(*iter).getPosition().x<<"\n";
        std::cout<<(*iter).getPosition().y<<"\n";
        }

}

void MultiText::setCharacterSize(const int &size) {
    characterSize = size;
}

void MultiText::setFillColor(sf::Color color) {
    this->color = color;
}

void MultiText::setFont(sf::Font font) {
    this->font = font;
}

void MultiText::setValue() {
    int i =0;
    for(auto iter = letterObjects.begin();iter!=letterObjects.end();++iter){
        float newXPosition = xPosition + (50*i);
        (*iter).setPosition(newXPosition,yPosition);
        (*iter).setFillColor(color);
        (*iter).setCharacterSize(characterSize);
        (*iter).setFont(font);
        i++;
    }
}

void MultiText::setX(const float &x) {
    xPosition = x;
    std::cout<<"setx : "<<xPosition<<" \n";
}

void MultiText::setY(const float &y) {
    yPosition = (y/2)-55;
    std::cout<<"sety : "<<yPosition<<" \n";
}

void MultiText::reverse() {
    letterObjects.pop_back();
}
