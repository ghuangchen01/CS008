//
// Created by Guanhao Huang Chen on 4/27/23.
//

#ifndef FINALPROJECT1_1_TYPINGINLOGIN_H
#define FINALPROJECT1_1_TYPINGINLOGIN_H
#include "../../../window/GUIComponent.h"
#include "MultiText.h"
#include "TextBox.h"
#include "BoxLabel.h"
#include "BlinkingCursor.h"

class typingInLogin: public GUIComponent{
private:
    MultiText text;
    TextBox textBox;
    BoxLabel label;
    BlinkingCursor cursor;
public:
    typingInLogin();
    void setInfo(sf::Vector2f pos,std::string name);
    void isPassword();
    const std::string getString();
    void resetText();
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;
};


#endif //FINALPROJECT1_1_TYPINGINLOGIN_H
