//
// Created by Dave R. Smith on 1/10/23.
//

#include "Hangman.h"

Hangman::Hangman() : wordbank("words.txt")
{
}

void Hangman::runGame()
{
    std::cout << visuals << std::endl;
    Word answer;
    getword(answer);
    std::cout << answer << std::endl;

    int incorrect = 0;
    while (incorrect < 6 && !answer.isSolved())
    {
        UserInput input;
        char guess = input.getInput();
        if (answer.contains(guess))
        {
            answer.replaceDash(guess);
        }
        else //Guessed letter is not in answer
        {
            incorrect += 1;
            visuals.updateBoard(incorrect);
            accuracy.pushback(guess);
        }
        std::cout << visuals << std::endl;
        std::cout << answer << std::endl;
        std::cout << accuracy << std::endl;
    }
    if(!answer.isSolved()){
        std::cout<<"You loss the game!"<<std::endl;
    }else{
        std::cout<<"You win the game!"<<std::endl;
    }
}

void Hangman::runGameForTwo() {
    Word answer,answer2;
    getword(answer);
    getword(answer2);
    int incorrect = 0,incorrect2 = 0;
    while ((incorrect < 6 && !answer.isSolved())&&(incorrect2 < 6 && !answer2.isSolved()))
    {
        std::cout<<"Player 1:"<<std::endl;
        std::cout << visuals << std::endl;
        std::cout << answer << std::endl;
        check(answer,visuals,accuracy,incorrect);
        std::cout<<"Player 2:"<<std::endl;
        std::cout << visuals2 << std::endl;
        std::cout << answer2 << std::endl;
        check(answer2,visuals2,accuracy2,incorrect2);
    }
    std::cout<<"Game Over!"<<std::endl;
    if(answer.isSolved()||(incorrect<6&&incorrect2>=6)){
        std::cout<<"Player 1 win the game!"<<std::endl;
        std::cout<<"Player 2 loss the game!"<<std::endl;
    }else if(answer2.isSolved()||(incorrect>=6&&incorrect2<6)){
        std::cout<<"Player 2 win the game!"<<std::endl;
        std::cout<<"Player 1 loss the game!"<<std::endl;
    }else{
            std::cout<<"You both loss the game."<<std::endl;
    }
}

void Hangman::getword(Word &answer) {
    try
    {
        answer = wordbank.getWord();
    }
    catch (NoWordException e)
    {
        answer.setString("Test");
    }
    if(answer.contains(' ')){
        answer.replaceDash(' ');
    }
}

void Hangman::check(Word &answer, Visuals& visuals,Accuracy& accuracy, int& incorrect) {
    UserInput input;
    char guess = input.getInput();
    if (answer.contains(guess))
    {
        answer.replaceDash(guess);
    }
    else //Guessed letter is not in answer
    {
        incorrect += 1;
        visuals.updateBoard(incorrect);
        accuracy.pushback(guess);
    }
    std::cout << visuals << std::endl;
    std::cout << answer << std::endl;
    std::cout << accuracy << std::endl;
}
