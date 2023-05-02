//
// Created by Guanhao Huang Chen on 4/27/23.
//

#ifndef FINALPROJECT1_1_BOXLABEL_H
#define FINALPROJECT1_1_BOXLABEL_H
#include "../../../window/GUIComponent.h"

class BoxLabel:public GUIComponent {
private:
    sf::Text label;
public:
    BoxLabel();
    BoxLabel(std::string word,sf::Vector2f pos);
    void setText(std::string word);
    void setPos(sf::Vector2f pos);

    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;
};


#endif //FINALPROJECT1_1_BOXLABEL_H
