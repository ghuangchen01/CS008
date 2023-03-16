//
// Created by Guanhao Huang Chen on 3/2/23.
//

#ifndef MULTITEXT_TYPING_H
#define MULTITEXT_TYPING_H
#include "Font.h"
#include "GUIComponent.h"
#include <iostream>
#include "MultiText.h"
class Typing: public GUIComponent{
private:
    MultiText text;
    std::string word = "";
    bool updateWord;
public:
    Typing();
    Typing(sf::RenderWindow& window,sf::Color color);
    void eventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};



#endif //MULTITEXT_TYPING_H
