//
// Created by Guanhao Huang Chen on 3/27/23.
//

#ifndef DROPDOWNMENU_ITEM_H
#define DROPDOWNMENU_ITEM_H
#include "SFML/Graphics.hpp"
#include "fonts/Font.h"
#include "window/GUIComponent.h"
#include "Helper.h"
class Item: public sf::Drawable{
private:
    sf::RectangleShape rectangle;
    sf::Text text;
public:
    Item();
    Item(sf::Vector2f size,std::string word);
    void setPosition(float x, float y);
    void setColor(sf::Color color);
    const std::string getString();
    sf::RectangleShape& getRectangle();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;


};


#endif //DROPDOWNMENU_ITEM_H
