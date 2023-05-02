//
// Created by Guanhao Huang Chen on 3/27/23.
//

#include "ItemList.h"

void ItemList::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    for(int i =0;i<items.size();i++){
        target.draw(items.at(i));
    }
}

ItemList::ItemList() {
    this->initialPos = {0,0};
}

ItemList::ItemList(const Item &item,const sf::Vector2f& initialP) {
    this->items.push_back(item);
    this->initialPos = initialP;
    setPosition();
}

void ItemList::addItem(const Item &item) {
    this->items.push_back(item);
    setPosition();
}

void ItemList::setPosition() {
    for(int i = 0;i<items.size();i++){
        items[i].setPosition(initialPos.x,initialPos.y+(i*50));
    }
}

void ItemList::setPosition(sf::Vector2f pos) {
    initialPos = pos;
}

std::vector<Item> &ItemList::getVec() {
    return items;
}
