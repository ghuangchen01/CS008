//
// Created by Guanhao Huang Chen on 3/27/23.
//

#ifndef DROPDOWNMENU_ITEMLIST_H
#define DROPDOWNMENU_ITEMLIST_H
#include "SFML/Graphics.hpp"
#include "vector"
#include "Item.h"
class ItemList:public sf::Drawable{
private:
    std::vector<Item> items;
    sf::Vector2f initialPos;
    void setPosition();
public:
    ItemList();
    ItemList(const Item& item,const sf::Vector2f& initialP);
    void addItem(const Item& item);
    void setPosition(sf::Vector2f pos);
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    std::vector<Item>& getVec();
};


#endif //DROPDOWNMENU_ITEMLIST_H
