//
// Created by Guanhao Huang Chen on 3/20/23.
//

#ifndef TYPINGPROJECT_TEXTBOX_H
#define TYPINGPROJECT_TEXTBOX_H
#include "SFML/Graphics.hpp"
#include "GUIComponent.h"

class TextBox: public GUIComponent{
private:
    sf::RectangleShape rectangle;
public:
    TextBox(sf::Vector2f position, sf::Vector2f size);

    void eventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //TYPINGPROJECT_TEXTBOX_H
