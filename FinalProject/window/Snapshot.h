//
// Created by Guanhao Huang Chen on 4/24/23.
//

#ifndef TYPINGPROJECTSFML_NEW__SNAPSHOT_H
#define TYPINGPROJECTSFML_NEW__SNAPSHOT_H
#include "State.h"
#include "string"
#include "SFML/Graphics.hpp"
class Snapshot{
public:
    sf::CircleShape data;
    Snapshot();
    Snapshot(sf::CircleShape text);
    void setSnap(sf::CircleShape text);
};
#include "Snapshot.cpp"

#endif //TYPINGPROJECTSFML_NEW__SNAPSHOT_H
