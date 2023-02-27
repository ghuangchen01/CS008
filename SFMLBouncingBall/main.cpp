#include <iostream>
#include <SFML/Graphics.hpp>
#include "Ball.h"
int main() {
    sf::RenderWindow window({720,420,30}, "Bouncing Ball");
    window.setFramerateLimit(60);


    float xMovement = 2.f,yMovement = 1.f;
    float xMovement2 = -2.f,yMovement2 = 1.f;

    sf::CircleShape circle;
    Ball ball(circle,30,sf::Color::Green,xMovement,yMovement);
    ball.setPosition((window.getSize().x/2)-50,(window.getSize().y/2)-50);
    Ball ball2(circle,30,sf::Color::Red,xMovement2,yMovement2);
    ball2.setPosition((window.getSize().x/2)+50,(window.getSize().y/2)+50);

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }
        ball.bounce(window.getSize().x,window.getSize().y);
        ball2.bounce(window.getSize().x,window.getSize().y);
//        ball.checkHit(ball2);
        window.clear();
        window.draw(ball);
        window.draw(ball2);
        window.display();
    }
    return 0;
}
