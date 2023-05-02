//
// Created by Guanhao Huang Chen on 4/26/23.
//

#ifndef FINALPROJECT1_1_DROPDOWNMENU_H
#define FINALPROJECT1_1_DROPDOWNMENU_H
#include "../button/Box.h"
#include "vector"
class DropDownMenu: public GUIComponent{
private:
    std::vector<Box> boxList;
    sf::Vector2f position;
    void CreateBox(std::string word);
public:
    DropDownMenu();
    DropDownMenu(sf::Vector2f pos);
    void addBox(std::string word);
    void setPosition(sf::Vector2f pos);
    sf::RectangleShape getLogout();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;
};


#endif //FINALPROJECT1_1_DROPDOWNMENU_H
