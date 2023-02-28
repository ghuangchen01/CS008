//
// Created by Dave R. Smith on 2/14/23.
//

#include "Calculator.h"
#include <iostream>
Calculator::Calculator() {
    int num = 0;
    for(int i =0;i<5;i++){
        for(int j = 0;j<4;j++){
            if(num==size){
                break;
            }
            Button tempBut;
            if(j==0){
                tempBut.init(text[num],sf::Color::White,{255, 149, 0});
            } else if(i==0){
                tempBut.init(text[num],sf::Color::White,{224,224,224});
            }else{
                tempBut.init(text[num],sf::Color::White,{96,96,96});
            }
            setPosition(tempBut,i,j);
            buttons[i][j] = tempBut;
            num++;
        }
    }
    number.push_back("0");
    screen.setText(number.front());
}

void Calculator::setPosition(Button& button,int i, int j) {
    float  space = 105;
    float x = 410,y=300;
    x = x - (space*j);
    y = y + (space*i);
    button.setPosition({x,y});
}

void Calculator::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    int num = 0;
    for(int i = 0;i<5;i++){
        for(int j =0;j<4;j++){
            if(num==size){
                break;
            }
            window.draw(buttons[i][j]);
            num++;
        }
    }
    window.draw(screen);
}

Button& Calculator::calculatorClicked(const sf::RenderWindow &window) {
    for(int i =0;i<5;i++){
        for(int j = 0;j<4;j++){
            if(MouseEvent::isClicked(buttons[i][j],window)){
                return buttons[i][j];
            }
        }
    }
    Button temp("");
    return temp;
}

void Calculator::calculatorAction(const sf::RenderWindow &window,bool& alreadyClicked) {
    if(MouseEvent::isClicked(calculatorClicked(window),window)){
        if(isNum(calculatorClicked(window).getText())){
            if(number.back()=="0"){
                number.pop_back();
                number.push_back(calculatorClicked(window).getText());
            }else if(oper.back()==","){
                oper.pop_back();
                number.pop_back();
                number.push_back(calculatorClicked(window).getText());
            } else{
                number.back() = number.back() + calculatorClicked(window).getText();
            }
            screen.setText(number.back());
        }else{
            std::string tempOper = "";
            if(calculatorClicked(window).getText() == "C") {
                screen.reset();
                while (!number.empty()){
                    number.pop_back();
                }
                number.push_back("0");
                while (!oper.empty()){
                    oper.pop_back();
                }
            } else if(calculatorClicked(window).getText() == "="){
                rpn.calculation(number,oper);
            } else if(calculatorClicked(window).getText() == "%"|| calculatorClicked(window).getText() == "+/-"){
                oper.push_back(calculatorClicked(window).getText());
                rpn.calculation(number,oper);
            }else{
                if(oper.size()>0){
                    rpn.calculation(number,oper);
                    tempOper = oper.back();
                    oper.pop_back();
                    std::cout<<"here\n";
                }else{
                    number.push_back("");
                }
                oper.push_back(calculatorClicked(window).getText());
                if(tempOper!=""){
                    oper.push_back(tempOper);
                }
            }
            screen.setText(number.back());
        }

//        if(calculatorClicked(window).getText()=="+"||calculatorClicked(window).getText()=="-"||calculatorClicked(window).getText()=="x"||calculatorClicked(window).getText()=="/") {
//            setNum1(screen.getText());
//            std::cout<<num1<<calculatorClicked(window).getText()<<std::endl;
//            setOper(calculatorClicked(window).getText());
//        }else if(calculatorClicked(window).getText()=="%"||calculatorClicked(window).getText()=="+/-"){
//            setNum1(screen.getText());
//            setOper(calculatorClicked(window).getText());
//            answer = rpn.calculation(num1,num2,oper);
//            screen.reset();
//            screen.setText(std::to_string(answer));
//        }else if(calculatorClicked(window).getText()=="="){
//            answer = rpn.calculation(num1,num2,oper);
//            screen.reset();
//            screen.setText(std::to_string(answer));
//        }else if(oper!=""){
//            screen.reset();
//            screen.setText(calculatorClicked(window).getText());
//            setNum2(screen.getText());
//        }else if(screen.getText().size()<12){
//                screen.setText(calculatorClicked(window).getText());
//            }
        alreadyClicked = true;
    }
}

bool Calculator::isNum(std::string num) {
    if(isdigit(num[0])){
        return true;
    }
    return false;
}
