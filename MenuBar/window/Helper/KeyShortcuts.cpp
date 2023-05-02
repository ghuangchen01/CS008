//
// Created by Guanhao Huang Chen on 4/24/23.
//

#include "KeyShortcuts.h"

bool KeyShortcuts::isUndo() {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)&&sf::Keyboard::isKeyPressed(sf::Keyboard::Z)){
        return true;
    } else if(sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace)){
        return true;
    }
    return false;
}
