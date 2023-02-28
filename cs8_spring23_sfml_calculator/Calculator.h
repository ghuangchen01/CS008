//
// Created by Dave R. Smith on 2/14/23.
//

#ifndef CS8_SPRING23_SFML_CALCULATOR_CALCULATOR_H
#define CS8_SPRING23_SFML_CALCULATOR_CALCULATOR_H
#include <SFML/Graphics.hpp>
#include "Button.h"
#include "MouseEvent.h"
#include "Screen.h"
#include "RPN.h"
class Calculator:public sf::Drawable
{
private:
    int size = 19;
    Button buttons[5][4];
    std::string text[19] = {"/","%","+/-","C","x","9","8","7","-","6","5","4","+","3","2","1","=",".","0"};
    Screen screen;
    RPN rpn;
    void setPosition(Button& button,int i,int j);
    std::vector<std::string> number;
    std::vector<std::string> oper;
public:
    Calculator();
    Button& calculatorClicked(const sf::RenderWindow &window);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void calculatorAction(const sf::RenderWindow &window,bool& alreadyClicked);
    bool isNum(std::string num);
};


#endif //CS8_SPRING23_SFML_CALCULATOR_CALCULATOR_H
