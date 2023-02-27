//
// Created by Guanhao Huang Chen on 2/22/23.
//

#include "Circle.h"

Circle::Circle(): circle(0.f) {

}

Circle::Circle(float radius): circle(radius) {

}

void Circle::setRadius(float radius) {
    circle.setRadius(radius);
}

void Circle::eventHandler(sf::RenderWindow &window, sf::Event event) {

}

void Circle::update() {

}

void Circle::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(circle);
}
