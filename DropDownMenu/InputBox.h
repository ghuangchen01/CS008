//
// Created by Guanhao Huang Chen on 3/27/23.
//

#ifndef DROPDOWNMENU_INPUTBOX_H
#define DROPDOWNMENU_INPUTBOX_H
#include "SFML/Graphics.hpp"
#include "Helper.h"
#include "fonts/Font.h"
class InputBox :public sf::Drawable{
private:
    sf::RectangleShape textBox;
    sf::Text text;
public:
    InputBox();
    void setString(std::string word);
    void setPosition(sf::Vector2f pos);
    void setSize(sf::Vector2f size);
    sf::RectangleShape& getTextBox();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

};


#endif //DROPDOWNMENU_INPUTBOX_H
