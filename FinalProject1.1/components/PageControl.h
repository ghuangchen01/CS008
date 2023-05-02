//
// Created by Guanhao Huang Chen on 4/29/23.
//

#ifndef FINALPROJECT1_1_PAGECONTROL_H
#define FINALPROJECT1_1_PAGECONTROL_H
#include "../window/GUIComponent.h"
#include "LoginPage/LoginPage.h"
#include "profile/Profile.h"
#include "FileTree/FileTree.h"
class PageControl: public GUIComponent{
private:
    LoginPage loginPage;
    Profile userFile;
    FileTree tree;
public:
    PageControl();

    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;
};


#endif //FINALPROJECT1_1_PAGECONTROL_H
