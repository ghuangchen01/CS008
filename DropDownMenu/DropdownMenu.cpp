//
// Created by Guanhao Huang Chen on 3/27/23.
//

#include "DropdownMenu.h"

void DropdownMenu::eventHandler(sf::RenderWindow &window, sf::Event event) {
    if(MouseEvents::isClick(this->box.getTextBox(),window)){
        if(!showList){
            showList = true;
        } else{
            showList = false;
        }
    }
    if(showList){
        for(int i = 0;i<list.getVec().size();i++){
            if(MouseEvents::isHover(list.getVec()[i].getRectangle(),window)){
                list.getVec()[i].getRectangle().setFillColor(sf::Color::Blue);
            }else{
                list.getVec()[i].getRectangle().setFillColor(sf::Color::Black);
            }
            if(MouseEvents::isClick(list.getVec()[i].getRectangle(),window)){
                box.setString(list.getVec()[i].getString());
                showList = false;
            }
        }
    }
}

void DropdownMenu::update() {

}

void DropdownMenu::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(box);
    if(showList){
        target.draw(list);
    } else{
        target.draw(empty);
    }
}

DropdownMenu::DropdownMenu() {
    box.setString("");
    box.setSize({100,50});
    box.setPosition({10,10});
    list.setPosition({10,65});
    Item item1({100,50},"hello");
    Item item2({100,50},"word");
    Item item3({100,50},"apple");
    Item item4({100,50},"good");
    Item item5({100,50},"pear");
    list.addItem(item1);
    list.addItem(item2);
    list.addItem(item3);
    list.addItem(item4);
    list.addItem(item5);

}
