//
// Created by Guanhao Huang Chen on 4/26/23.
//

#include "DropDownMenu.h"

DropDownMenu::DropDownMenu() {
    setState(HIDDEN, true);
}

DropDownMenu::DropDownMenu(sf::Vector2f pos) {
    position = pos;
    setState(HIDDEN, true);
}

void DropDownMenu::addBox(std::string word) {
    CreateBox(word);
}

void DropDownMenu::CreateBox(std::string word) {
    if(boxList.empty()){
        Box box(word,position);
        boxList.push_back(box);
    }else{
        Box box(word,&boxList.back());
        boxList.push_back(box);
    }
}

sf::RectangleShape DropDownMenu::getLogout() {
    if(!boxList.empty()){
        for(int i=0;i<boxList.size();i++){
            if(boxList[i].getText()=="Log out"){
                return boxList[i].getBox();
            }
        }
    }
}

void DropDownMenu::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if(!checkState(HIDDEN)){
        if(!boxList.empty()){
            for(int i =0;i<boxList.size();i++){
                target.draw(boxList[i]);
            }
        }
    }
}

void DropDownMenu::addEventHandler(sf::RenderWindow &window, sf::Event event) {

}

void DropDownMenu::update() {

}

sf::Vector2f DropDownMenu::getPosition() {
    return boxList.front().getPosition();
}

sf::FloatRect DropDownMenu::getGlobalBounds() {
    return boxList.front().getGlobalBounds();
}

void DropDownMenu::setPosition(sf::Vector2f pos) {
    position = pos;
}
