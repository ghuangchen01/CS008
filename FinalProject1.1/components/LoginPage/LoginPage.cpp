//
// Created by Guanhao Huang Chen on 4/27/23.
//

#include "LoginPage.h"

LoginPage::LoginPage() {
    userName.setInfo({780,380},"Username");
    password.setInfo({780,500},"Password");
    password.isPassword();

    logIn.setText("Log In");
    sf::Color logInColor(42, 56, 135);
    logIn.setColor(logInColor);
    logIn.setTextColor(sf::Color::White);
    logIn.setPosition({880,650});

    createAccount.setText("Create User");
    sf::Color createColor(54, 117, 73);
    createAccount.setColor(createColor);
    createAccount.setTextColor(sf::Color::White);
    createAccount.setPosition({880,750});

    signal.setPosition({userName.getPosition().x,createAccount.getPosition().y+100});

    title.setText("Motto Tea Cafe");
    title.setPosition({1020-(title.getGlobalBounds().width/2),40});
}

void LoginPage::resetText() {
    userName.resetText();
    password.resetText();
}

void LoginPage::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    if(!checkState(HIDDEN)){
        window.draw(userName);
        window.draw(password);
        window.draw(logIn);
        window.draw(createAccount);
        window.draw(signal);
        window.draw(title);
    }
}

void LoginPage::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    if(!checkState(HIDDEN)){
        userName.addEventHandler(window,event);
        password.addEventHandler(window,event);

        if(MouseEvents::isClick(logIn.getBox(),window)){
            if(Account::checkAccount(userName.getString(),password.getString())){
                signal.setState(HIDDEN, true);
                setState(HIDDEN, true);
                object->setState(HIDDEN, false);
                resetText();
            } else{
                signal.setString("Wrong Username or Password!");
                signal.setState(HIDDEN, false);
            }
        }
        if(MouseEvents::isClick(createAccount.getBox(),window)){
            if(!Account::hasRepeats(userName.getString())&&userName.getString()!=""&&password.getString()!=""){
                Account::addAccount(userName.getString(),password.getString());
                signal.setState(HIDDEN, true);
                setState(HIDDEN, true);
                object->setState(HIDDEN, false);
                resetText();
            }else if(userName.getString()==""||password.getString()==""){
                signal.setString("Username or Password can't be empty!");
                signal.setState(HIDDEN, false);
            }else{
                signal.setString("Username exist!");
                signal.setState(HIDDEN, false);
            }
        }
    }
}

void LoginPage::update() {
    userName.update();
    password.update();
}

std::string LoginPage::getUsername() {
    return userName.getString();
}

std::string LoginPage::getPassword() {
    return password.getString();
}

sf::Vector2f LoginPage::getPosition() {
    return {0,0};
}

sf::FloatRect LoginPage::getGlobalBounds() {
    return {0,0,0,0};
}

void LoginPage::setRelatedObject(GUIComponent *object) {
    this->object = object;
}
