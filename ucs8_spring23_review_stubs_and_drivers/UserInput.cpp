//
// Created by Dave R. Smith on 1/10/23.
//

#include "UserInput.h"

UserInput::UserInput()
{

}

void UserInput::getInput(char &letter)
{
    std::cin >> letter;

}

char UserInput::getInput()
{
    char letter;
    std::cin >> letter;
    return letter;
}
