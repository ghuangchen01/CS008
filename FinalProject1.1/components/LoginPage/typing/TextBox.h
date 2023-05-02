//
// Created by Guanhao Huang Chen on 4/27/23.
//

#ifndef FINALPROJECT1_1_TEXTBOX_H
#define FINALPROJECT1_1_TEXTBOX_H
#include "../../../window/GUIComponent.h"

class TextBox: public GUIComponent{
private:
    sf::RectangleShape textBox;
public:
    TextBox();
    TextBox(const float width,const float height,sf::Vector2f pos);
    void setBoxSize(const float width, const float height);
    void setPosition(sf::Vector2f pos);
    const sf::RectangleShape& getBox();
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;

};


#endif //FINALPROJECT1_1_TEXTBOX_H
