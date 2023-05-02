//
// Created by Guanhao Huang Chen on 4/24/23.
//
#ifndef TYPINGPROJECTSFML_NEW__SNAPSHOT_CPP
#define TYPINGPROJECTSFML_NEW__SNAPSHOT_CPP
#include "Snapshot.h"

Snapshot::Snapshot() {

}

Snapshot::Snapshot(sf::CircleShape text) {
    data = text;
}

void Snapshot::setSnap(sf::CircleShape text) {
    data = text;
}

#endif