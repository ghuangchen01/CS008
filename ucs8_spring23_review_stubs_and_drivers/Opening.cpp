//
// Created by Guanhao Huang Chen on 1/19/23.
//

#include "Opening.h"
#include <iostream>
void Opening::menu() {
    int userInput;
std::cout<<"     Hangman"<<std::endl;
std::cout<<"------------------"<<std::endl;
std::cout<<"1. One player."<<std::endl;
std::cout<<"2. Two Players."<<std::endl;
std::cout<<std::endl;
std::cout<<"your selection: "<<std::endl;
std::cin>>userInput;
    numOfPlayers(userInput);
}

void Opening::numOfPlayers(const int &player) {
    Hangman hangman;
if(player == 1){
    hangman.runGame();
}else if(player == 2){
    hangman.runGameForTwo();
}
}
