//
// Created by Guanhao Huang Chen on 4/29/23.
//

#ifndef FINALPROJECT1_1_ERRORSIGNAL_H
#define FINALPROJECT1_1_ERRORSIGNAL_H
#include "../../window/GUIComponent.h"

class ErrorSignal: public GUIComponent{
private:
    sf::Text signal;
public:
    ErrorSignal();
    void setString(std::string w);
    void setPosition(sf::Vector2f pos);

    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;
};


#endif //FINALPROJECT1_1_ERRORSIGNAL_H
