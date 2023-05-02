//
// Created by Guanhao Huang Chen on 3/20/23.
//

#ifndef TYPINGPROJECT_APPLICATION_H
#define TYPINGPROJECT_APPLICATION_H


#include "SFML/Graphics.hpp"
#include <vector>
#include <string>
#include "GUIComponent.h"
class Application {
private:
    sf::RenderWindow window;
    std::vector<GUIComponent*> objects;
    sf::Color backgroundColor;
    void runLoop();
    void eventListener();
public:
    Application();
    Application(sf::VideoMode videoMode, std::string title,sf::Color backgroundColor);
    void run();
    void addDrawable(GUIComponent& object);
    void addBackGroundColor(const sf::Color color);
    sf::RenderWindow& getWindow();
};


#endif //TYPINGPROJECT_APPLICATION_H
