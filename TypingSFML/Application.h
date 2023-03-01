//
// Created by Guanhao Huang Chen on 2/28/23.
//

#ifndef TYPINGSFML_APPLICATION_H
#define TYPINGSFML_APPLICATION_H


#include "SFML/Graphics.hpp"
#include <vector>
#include <string>
#include "GUIComponent.h"
class Application {
private:
    sf::RenderWindow window;
    std::vector<GUIComponent*> objects;
    void runLoop();
    void eventListener();
public:
    Application();
    Application(sf::VideoMode videoMode, std::string title);
    void run();
    void addDrawable(GUIComponent& object);
    sf::RenderWindow& getWindow();
};


#endif //TYPINGSFML_APPLICATION_H
