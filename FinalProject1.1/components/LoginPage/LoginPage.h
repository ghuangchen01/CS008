//
// Created by Guanhao Huang Chen on 4/27/23.
//

#ifndef FINALPROJECT1_1_LOGINPAGE_H
#define FINALPROJECT1_1_LOGINPAGE_H
#include "../../window/GUIComponent.h"
#include "typing/typingInLogin.h"
#include "../button/Box.h"
#include "ErrorSignal.h"
#include "ShadowTitle.h"
class LoginPage: public GUIComponent{
private:
    typingInLogin userName;
    typingInLogin password;
    Box logIn;
    Box createAccount;
    ErrorSignal signal;
    GUIComponent* object;
    ShadowTitle title;
public:
    LoginPage();
    void setRelatedObject(GUIComponent* object);
    void resetText();
    std::string getUsername();
    std::string getPassword();
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;
};


#endif //FINALPROJECT1_1_LOGINPAGE_H
