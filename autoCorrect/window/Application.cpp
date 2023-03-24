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
        window.clear();
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
            o->eventHandler(window,event);
        }
    }
}

void Application::run() {
    runLoop();
}

void Application::addDrawable(GUIComponent &object) {
    objects.push_back(&object);
}

Application::Application() : Application({720,420,32},"Application"){

}

Application::Application(sf::VideoMode videoMode, std::string title) : window(videoMode,title) {

}

sf::RenderWindow &Application::getWindow() {
    return window;
}