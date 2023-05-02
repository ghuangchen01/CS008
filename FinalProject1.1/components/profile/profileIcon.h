//
// Created by Guanhao Huang Chen on 4/25/23.
//

#ifndef FINALPROJECT1_1_PROFILEICON_H
#define FINALPROJECT1_1_PROFILEICON_H
#include "../../window/GUIComponent.h"
#include "../../Source/Icon/Icon.h"
class profileIcon: public GUIComponent{
private:
    sf::CircleShape circle;
public:
    profileIcon();
    profileIcon(sf::RenderTarget &window);
    void setPosition(sf::Vector2f pos);
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;
};


#endif //FINALPROJECT1_1_PROFILEICON_H
