//
// Created by Guanhao Huang Chen on 3/2/23.
//

#ifndef MULTITEXT_APPLICATION_H
#define MULTITEXT_APPLICATION_H

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

#endif //MULTITEXT_APPLICATION_H
