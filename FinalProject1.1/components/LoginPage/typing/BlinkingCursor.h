//
// Created by Guanhao Huang Chen on 4/27/23.
//

#ifndef FINALPROJECT1_1_BLINKINGCURSOR_H
#define FINALPROJECT1_1_BLINKINGCURSOR_H
#include "../../../window/GUIComponent.h"
#include "SFML/Graphics.hpp"
#include "letter.h"
class BlinkingCursor: public GUIComponent{
private:
    sf::Text text;
    sf::Clock clock;
public:
    BlinkingCursor();

    void setPos(sf::Vector2f pos,float width);

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;
};


#endif //FINALPROJECT1_1_BLINKINGCURSOR_H
