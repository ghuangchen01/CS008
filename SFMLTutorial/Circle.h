//
// Created by Guanhao Huang Chen on 2/22/23.
//

#ifndef SFMLTUTORIAL_CIRCLE_H
#define SFMLTUTORIAL_CIRCLE_H
#include "GUIComponent.h"

class Circle: public GUIComponent{
private:
    sf::CircleShape circle;
public:
    Circle();
    Circle(float radius);
    void setRadius(float radius);

    void eventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //SFMLTUTORIAL_CIRCLE_H
