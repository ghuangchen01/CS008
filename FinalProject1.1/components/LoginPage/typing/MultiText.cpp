//
// Created by Guanhao Huang Chen on 4/27/23.
//

#include "MultiText.h"

void MultiText::setLetterInfo(letter& l) {
    l.setFont(Font::getFont());
    l.setCharacterSize(30);
    l.setFillColor(sf::Color::White);
}

MultiText::MultiText() {

}

void MultiText::setPosition() {
    if(letters.size()==1){
        letters.back().setPosition(position);
        password.back().setPosition(position);
    }
    if(letters.size()>1){
        float xpos = std::prev(letters.end(),2)->getPosition().x
                     + std::prev(letters.end(),2)->getGlobalBounds().width
                     + std::prev(letters.end(),2)->getLetterSpacing();
        float xpos2 = std::prev(password.end(),2)->getPosition().x
                      + std::prev(password.end(),2)->getGlobalBounds().width
                      + std::prev(password.end(),2)->getLetterSpacing();
        letters.back().setPosition(xpos,position.y);
        password.back().setPosition(xpos2,position.y);
    }
}

MultiText::MultiText(const std::string word) {
    addLetter(word);
}

void MultiText::setPos(sf::Vector2f pos) {
    position = {pos};
}

void MultiText::addLetter(const std::string word) {
    if(letters.size()<13){
        letter l;
        letter l2;
        l.setString(word);
        l2.setString("*");
        setLetterInfo(l);
        setLetterInfo(l2);
        letters.push_back(l);
        password.push_back(l2);
        setPosition();
    }
}

const std::string MultiText::getLetter() {
    std::string word = "";
    if(!letters.empty()){
        for(int i =0;i<letters.size();i++){
            word.push_back(letters[i].getString()[0]);
        }
    }
    return word;
}

void MultiText::deleteLetter() {
    if(!letters.empty()){
        letters.pop_back();
    }
    if(!password.empty()){
        password.pop_back();
    }
}

void MultiText::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if(!letters.empty()&&!checkState(HIDDEN)){
        if(!checkState(IsPassword)){
            for(int i =0;i<letters.size();i++){
                target.draw(letters[i]);
            }
        }else{
            for(int i =0;i<letters.size();i++){
                target.draw(password[i]);
            }
        }
    }
}

void MultiText::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    if(event.type==sf::Event::TextEntered){
        if(KeyShortcuts::isUndo()){
            deleteLetter();
        }
        std::string w = KeyTyping::typing(event);
        if(w!=""){
            addLetter(w);
        }
    }
}

void MultiText::update() {

}

sf::Vector2f MultiText::getPosition() {
    if(!checkState(IsPassword)){
        return letters.back().getPosition();
    }
    return password.back().getPosition();
}

sf::FloatRect MultiText::getGlobalBounds() {
    if(!checkState(IsPassword)){
        if(!letters.empty()){
            return letters.back().getGlobalBounds();
        }
    }else{
        if(!password.empty()){
            return password.back().getGlobalBounds();
        }
    }
}

const bool MultiText::isEmpty() {
    if(!checkState(IsPassword)){
        return letters.empty();
    }
    return password.empty();
}

void MultiText::resetText() {
    letters.clear();
    password.clear();
}
