//
// Created by Guanhao Huang Chen on 4/27/23.
//

#include "typingInLogin.h"

typingInLogin::typingInLogin() {

}

void typingInLogin::isPassword() {
    text.setState(IsPassword, true);
}

void typingInLogin::setInfo(sf::Vector2f pos,std::string name) {
    label.setText(name);
    label.setPos(pos);
    textBox.setPosition({label.getPosition().x,label.getPosition().y+35});
    textBox.setBoxSize(400,50);
    text.setPos(textBox.getPosition());
}

void typingInLogin::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    if(!checkState(HIDDEN)){
        window.draw(textBox);
        window.draw(label);
        window.draw(text);
        if(!cursor.checkState(TYPING)){
            window.draw(cursor);
        }
    }
}

void typingInLogin::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    if(MouseEvents::isClick(textBox.getBox(),window)){
        textBox.setState(Selected, true);
        cursor.setState(HIDDEN, false);
    }
    if(MouseEvents::clickWindow(textBox.getBox(),window)){
        textBox.setState(Selected, false);
        cursor.setState(HIDDEN, true);
    }
    if(textBox.checkState(Selected)){
        if(event.type == sf::Event::TextEntered){
            cursor.setState(TYPING, true);
        } else{
            cursor.setState(TYPING, false);
        }
        if(text.isEmpty()){
            cursor.setPos(textBox.getPosition(),0);
        } else{
            cursor.setPos(text.getPosition(),text.getGlobalBounds().width);
        }
        textBox.addEventHandler(window,event);
        label.addEventHandler(window,event);
        text.addEventHandler(window,event);
    }
}

void typingInLogin::update() {
    cursor.update();
}

sf::Vector2f typingInLogin::getPosition() {
    return textBox.getPosition();
}

sf::FloatRect typingInLogin::getGlobalBounds() {
    return textBox.getGlobalBounds();
}

const std::string typingInLogin::getString() {
    return text.getLetter();
}

void typingInLogin::resetText() {
    text.resetText();
}
