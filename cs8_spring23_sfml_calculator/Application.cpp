//
// Created by Dave R. Smith on 2/14/23.
//

#include "Application.h"
#include "Calculator.h"
#include "Screen.h"
void Application::run()
{
    sf::RenderWindow window({420, 720, 32}, "Calculator");
    Calculator calculator;
    bool alreadyClicked = false;
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(sf::Event::Closed == event.type)
                window.close();
        }
        if(!alreadyClicked){
            calculator.calculatorAction(window,alreadyClicked);
        }
        if(MouseEvent::isNotClicked(window)){
            alreadyClicked = false;
        }
        window.clear();
        window.draw(calculator);
        window.display();
    }
}
