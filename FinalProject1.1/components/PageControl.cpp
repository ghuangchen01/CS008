//
// Created by Guanhao Huang Chen on 4/29/23.
//

#include "PageControl.h"

void PageControl::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    if(!loginPage.checkState(HIDDEN)){
        window.draw(loginPage);
    }
    if(!userFile.checkState(HIDDEN)){
        window.draw(userFile);
        window.draw(tree);
    }
}

void PageControl::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    if(!loginPage.checkState(HIDDEN)){
        loginPage.addEventHandler(window,event);
    }
    if(!userFile.checkState(HIDDEN)){
        userFile.addEventHandler(window,event);
    }
    if(!tree.checkState(HIDDEN)){
        tree.addEventHandler(window,event);
    }
}

void PageControl::update() {
    if(!loginPage.checkState(HIDDEN)){
        loginPage.update();
    }
    if(!userFile.checkState(HIDDEN)){
        userFile.update();
    }
    if(!tree.checkState(HIDDEN)){
        tree.update();
    }
}

sf::Vector2f PageControl::getPosition() {
    return {0,0};
}

sf::FloatRect PageControl::getGlobalBounds() {
    return {0,0,0,0};
}

PageControl::PageControl() {
    loginPage.setState(HIDDEN, false);
    userFile.setState(HIDDEN, true);
    userFile.setPosition({1940,10});
    loginPage.setRelatedObject(&userFile);
    userFile.setRelatedObject(&loginPage);
    //tree
    tree.push("Drinks");
    tree.push("Drinks","Milk Tea");
    tree.push("Milk Tea","Boba Milk Tea");
    tree.push("Milk Tea","Green Milk Tea");
    tree.push("Milk Tea","Peach Milk Tea");
    tree.push("Drinks","Fruit Tea");
    tree.push("Fruit Tea","Fruit Melody");
    tree.push("Fruit Tea","Orange Tea");
    tree.push("Drinks","Pure Tea");
    tree.push("Pure Tea","Rose Oolong");
    tree.push("Pure Tea","Golden Oolong");
    tree.push("Drinks","Coffee");
    tree.push("Coffee","House Coffee");
    tree.push("Coffee","Milk Coffee");

}
