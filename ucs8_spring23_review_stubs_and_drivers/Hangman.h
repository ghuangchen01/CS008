//
// Created by Dave R. Smith on 1/10/23.
//

#ifndef UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_HANGMAN_H
#define UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_HANGMAN_H

#include <iostream>

#include "Wordbank.h"
#include "Visuals.h"
#include "Accuracy.h"
#include "UserInput.h"

class Hangman
{
private:
    Wordbank wordbank; // hold all potential words for the game
    Visuals visuals,visuals2; // the board
    Accuracy accuracy,accuracy2; // holds the incorrect
public:
    Hangman();
    void runGame();
    void runGameForTwo();
    void getword(Word& answer);
    void check(Word& answer, Visuals& visuals,Accuracy& accuracy, int& incorrect);
};


#endif //UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_HANGMAN_H
