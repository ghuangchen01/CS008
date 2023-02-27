//
// Created by Guanhao Huang Chen on 2/9/23.
//

#ifndef SFMLBOUNCINGBALL_BALL_H
#define SFMLBOUNCINGBALL_BALL_H

#include <SFML/Graphics.hpp>

class Ball :public sf::Drawable{
private:
    sf::CircleShape circle;
    int radius;
    sf::Color color;
    float xAxis;
    float yAxis;
public:
    Ball();
    Ball(sf::CircleShape circle,int radius, sf::Color color,float xAxis, float yAxis);
    void setRadius(int radius);
    void setColor(sf::Color color);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void move(float x, float y);
    void bounce(int windowSizeX,int windowSizeY);
    void setPosition(float x,float y);
    void checkHit(Ball ball);
    float getPositionX();
    float getPositionY();
    float getDirectionX();
    float getDirectionY();
    int getRadius();
};


#endif //SFMLBOUNCINGBALL_BALL_H
