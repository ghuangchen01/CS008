//
// Created by Guanhao Huang Chen on 3/27/23.
//

#ifndef DROPDOWNMENU_DROPDOWNMENU_H
#define DROPDOWNMENU_DROPDOWNMENU_H
#include "window/GUIComponent.h"
#include "Item.h"
#include "ItemList.h"
#include "InputBox.h"
#include "MouseEvents.h"
class DropdownMenu: public GUIComponent{
private:
    InputBox box;
    ItemList list,empty;
    sf::RenderWindow window;
    bool showList = false;
public:
    DropdownMenu();

    void eventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

};


#endif //DROPDOWNMENU_DROPDOWNMENU_H
