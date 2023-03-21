//
// Created by Guanhao Huang Chen on 3/20/23.
//

#ifndef TYPINGPROJECT_TYPING_H
#define TYPINGPROJECT_TYPING_H


#include "../fonts/Font.h"
#include "../window/GUIComponent.h"
#include <iostream>
#include "MultiText.h"
#include <random>
class Typing: public GUIComponent{
private:
    MultiText text;
    std::string word = "";
    bool updateWord;
public:
    Typing();
    Typing(sf::Vector2f position);
    void eventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //TYPINGPROJECT_TYPING_H
