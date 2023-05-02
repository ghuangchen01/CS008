//
// Created by Guanhao Huang Chen on 3/20/23.
//

#include "Application.h"

void Application::runLoop() {
    while (window.isOpen()){
        eventListener();

        for(GUIComponent* o : objects){
            o->update();
        }
        window.clear(backgroundColor);
        for(sf::Drawable* o : objects){
            window.draw(*o);
        }

        window.display();
    }
}

void Application::eventListener() {
    sf::Event event;
    while (window.pollEvent(event)){
        if(sf::Event::Closed == event.type){
            window.close();
        }
        for(GUIComponent* o : objects){
            o->addEventHandler(window,event);
        }
    }
}

void Application::run() {
    runLoop();
}

void Application::addDrawable(GUIComponent &object) {
    objects.push_back(&object);
}

Application::Application() : Application({720,420,32},"Application",sf::Color::White){

}

Application::Application(sf::VideoMode videoMode, std::string title,sf::Color backgroundColor) : window(videoMode,title) {
    this->backgroundColor = backgroundColor;
}

sf::RenderWindow &Application::getWindow() {
    return window;
}

void Application::addBackGroundColor(const sf::Color color) {
    backgroundColor = color;
}
