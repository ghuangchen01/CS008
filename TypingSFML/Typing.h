//
// Created by Guanhao Huang Chen on 2/28/23.
//

#ifndef TYPINGSFML_TYPING_H
#define TYPINGSFML_TYPING_H

#include "GUIComponent.h"
#include "textBox.h"
#include <iostream>
class Typing: public GUIComponent{
private:
    textBox textBox;
    sf::Text text;
    std::string word = "";
    bool updateWord;
public:
    Typing();
    Typing(sf::RenderWindow& window,sf::Color color);
    void eventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //TYPINGSFML_TYPING_H
