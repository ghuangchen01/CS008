//
// Created by Guanhao Huang Chen on 3/20/23.
//

#include "MultiText.h"

MultiText::MultiText() {

}

MultiText::MultiText(const sf::Vector2f position) {
    pos = position;
}

void MultiText::setPos(sf::Vector2f  p) {
    pos = p;
}

void MultiText::setPosition() {
    if(letterObjects.size()==1){
        letterObjects.back().setPosition(pos);
    }else{
        float xpos = std::prev(letterObjects.end(),2)->getPosition().x
                + std::prev(letterObjects.end(),2)->getGlobalBounds().width
                + std::prev(letterObjects.end(),2)->getLetterSpacing();
        letterObjects.back().setPosition(xpos, pos.y);
    }
}

void MultiText::addLetter(const std::string &word) {
    letter let;
    let.setString(word);
    let.setFillColor(sf::Color::White);
    let.setFont(Font::getFont());
    setPosition();
    letterObjects.push_back(let);
}

const std::list<letter>& MultiText::getLetters() {
    return letterObjects;
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
//template<typename T>
//T* const MultiText::begin() {
//    return letterObjects.front();
//}
//
//template<typename T>
//T* const MultiText::end() {
//    return letterObjects.back();
//}
//bool MultiText::checkForOper(const letter &l) {
//    return !isalpha(l.getString()[0])&&!isdigit(l.getString()[0]);
//}
//
//bool MultiText::checkForNum(const letter &l) {
//    return isdigit(l.getString()[0]);
//}
//
//bool MultiText::checkForWord(std::string& word) {
//    int correctLetter = 0;
//    if(letterObjects.size()>=word.size()){
//        auto iter = letterObjects.end();
//        for(int i = word.size()-1;i>=0;i--){
//            if((*iter).getString()[0]==word[i]){
//                correctLetter++;
//            }
//            iter--;
//        }
//    }
//    if(word.size()==correctLetter){
//        return true;
//    }
//    return false;
//}

MultiText &MultiText::operator=(const MultiText &m) {
    MultiText newMultiText;
    for(auto iter = m.letterObjects.begin();iter != m.letterObjects.end();++iter){
        newMultiText.letterObjects.push_front((*iter));
    }
    return newMultiText;
}

//void MultiText::addEventHandler(sf::RenderWindow &window, sf::Event event) {
//
//}
//
//void MultiText::update() {
//}
//
//Snapshot &MultiText::getSnapshot() {
//    Snapshot snapshot;
//
//    return snapshot;
//}
//
//void MultiText::applySnapshot(const Snapshot &snapshot) {
//
//}
//
//void MultiText::setString(const std::string &word) {
//    letter let;
//    let.setString(word);
//    let.setFillColor(color.front());
//    color.pop_front();
//    letterObjects.push_back(let);
//    setValue();
//}
//
//const std::string &MultiText::getString() {
//    std::string tempString = "";
//    for(auto iter  = letterObjects.begin();iter!=letterObjects.end();++iter){
//        tempString = tempString + (*iter).getString();
//    }
//    return tempString;
//}
//
//
//void MultiText::setCharacterSize(const int &size) {
//    characterSize = size;
//}
//
//void MultiText::setFillColor(sf::Color c) {
//    color.push_back(c);
//}
//
//void MultiText::setFont(sf::Font font) {
//    this->font = font;
//}
//
//void MultiText::setValue() {
//    int i =0;
//    float sumBounds = 0;
//    for(auto iter = letterObjects.begin();iter!=letterObjects.end();++iter){
//        sumBounds = sumBounds + (*iter).getLetterSpacing()+15;
//        float newXPosition = xPosition + sumBounds;
//        (*iter).setPosition(newXPosition,yPosition);
//        (*iter).setCharacterSize(characterSize);
//        (*iter).setFont(font);
//        i++;
//    }
//}
//
//void MultiText::setX(const float &x) {
//    xPosition = x;
//    std::cout<<"setx : "<<xPosition<<" \n";
//}
//
//void MultiText::setY(const float &y) {
//    yPosition = y;
//    std::cout<<"sety : "<<yPosition<<" \n";
//}
