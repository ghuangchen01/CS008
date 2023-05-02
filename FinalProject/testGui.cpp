//
// Created by Guanhao Huang Chen on 4/25/23.
//

#include "testGui.h"

testGui::testGui() {
    circle.setPosition({100,100});
    circle.setFillColor(sf::Color::White);
    circle.setRadius(30);
}

void testGui::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(circle);
}

void testGui::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    if(KeyShortcuts::isUndo()){

    }
    if(event.type==sf::Mouse::isButtonPressed(sf::Mouse::Left)){

    }
}

void testGui::update() {

}

Snapshot &testGui::getSnapshot() {
    snapshot.setSnap(circle);
    return snapshot;
}

void testGui::applySnapshot(const Snapshot &snapshot) {
    circle.setPosition(snapshot.data.getPosition());
    circle.setFillColor(snapshot.data.getFillColor());
    circle.setRadius(snapshot.data.getRadius());
}
