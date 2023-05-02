//
// Created by Guanhao Huang Chen on 4/29/23.
//

#ifndef FINALPROJECT1_1_PROFILE_H
#define FINALPROJECT1_1_PROFILE_H
#include "../../window/GUIComponent.h"
#include "profileIcon.h"
#include "DropDownMenu/DropDownMenu.h"
class Profile: public GUIComponent{
private:
    profileIcon icon;
    DropDownMenu drop;
    GUIComponent* object;
public:
    Profile();
    void setRelatedObject(GUIComponent* object);
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;
};


#endif //FINALPROJECT1_1_PROFILE_H
