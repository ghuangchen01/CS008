//
// Created by Guanhao Huang Chen on 4/29/23.
//

#include "Profile.h"

void Profile::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    if(!checkState(HIDDEN)){
        window.draw(icon);
        if(!drop.checkState(HIDDEN)){
            window.draw(drop);
        }
    }
}

void Profile::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    if(!checkState(HIDDEN)){
        icon.addEventHandler(window,event);
    }
    if(icon.checkState(Selected)){
        drop.setState(HIDDEN, false);
    } else{
        drop.setState(HIDDEN, true);
    }
    if(MouseEvents::isClick(drop.getLogout(),window)){
        setState(HIDDEN, true);
        object->setState(HIDDEN, false);
    }
}

void Profile::update() {

}

sf::Vector2f Profile::getPosition() {
    return {0,0};
}

sf::FloatRect Profile::getGlobalBounds() {
    return {0,0,0,0};
}

Profile::Profile() {
    icon.setPosition({1940,10});
    drop.setPosition({1800,100});
    drop.addBox("Log out");
}

void Profile::setRelatedObject(GUIComponent* object) {
    this->object = object;
}
