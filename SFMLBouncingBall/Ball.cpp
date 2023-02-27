//
// Created by Guanhao Huang Chen on 2/9/23.
//

#include "Ball.h"

Ball::Ball() {

}

Ball::Ball(sf::CircleShape circle, int radius, sf::Color color,float xAxis,float yAxis): circle(circle),radius(radius),color(color),xAxis(xAxis),yAxis(yAxis) {
    this->circle.setRadius(this->radius);
    this->circle.setFillColor(this->color);
}

void Ball::setRadius(int radius) {
    this->radius = radius;
    circle.setRadius(this->radius);
}

void Ball::setColor(sf::Color color) {
    this->color = color;
    circle.setFillColor(this->color);
}

void Ball::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(circle);
}

void Ball::move(float x, float y) {
    circle.move(x,y);
}

void Ball::bounce(int windowSizeX,int windowSizeY) {
    if(circle.getPosition().x + circle.getRadius() == windowSizeX-circle.getRadius()||circle.getPosition().x<=0){
        xAxis = xAxis*(-1);
    }else if(circle.getPosition().y+circle.getRadius() == windowSizeY-circle.getRadius()||circle.getPosition().y<=0){
        yAxis = yAxis*(-1);
    }
    circle.move(xAxis,yAxis);
}
void Ball::checkHit(Ball ball) {
    if(ball.getPositionX()-ball.getRadius()==circle.getPosition().x+circle.getRadius()){
        xAxis = xAxis*(-1);
    }
    if(ball.getPositionY()-ball.getRadius()==circle.getPosition().y+circle.getRadius()){
        yAxis = yAxis*(-1);
    }
    circle.move(xAxis,yAxis);
}

void Ball::setPosition(float x, float y) {
    circle.setPosition(x,y);
}

float Ball::getPositionX() {
    return circle.getPosition().x;
}

float Ball::getPositionY() {
    return circle.getPosition().y;
}

float Ball::getDirectionX() {
    return xAxis;
}

float Ball::getDirectionY() {
    return yAxis;
}

int Ball::getRadius() {
    return radius;
}

