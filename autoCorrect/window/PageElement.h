//
// Created by Guanhao Huang Chen on 3/20/23.
//

#ifndef TYPINGPROJECT_PAGEELEMENT_H
#define TYPINGPROJECT_PAGEELEMENT_H

#include "SFML/Graphics.hpp"
#include "GUIComponent.h"
#include "../fonts/Font.h"
class PageElement: public GUIComponent{
private:
    sf::Text text;
public:
    PageElement(sf::Vector2f position,std::string word);

    void eventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //TYPINGPROJECT_PAGEELEMENT_H
