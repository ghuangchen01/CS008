//
// Created by Guanhao Huang Chen on 3/20/23.
//

#ifndef TYPINGPROJECT_GUICOMPONENT_H
#define TYPINGPROJECT_GUICOMPONENT_H


#include "SFML/Graphics.hpp"
#include "SnapshotInterface.h"
#include "State.h"
#include "EventHandler.h"
class GUIComponent : public sf::Drawable,public SnapshotInterface,public State,public EventHandler{
public:
//from the sf::Drawable class
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const = 0;

// from EventHandler
    virtual void addEventHandler(sf::RenderWindow& window, sf::Event event) = 0;
    virtual void update() = 0;

//from SnapshotInterface
//    virtual Snapshot getSnapshot() = 0;
//    virtual void applySnapshot(const Snapshot& snapshot) = 0;
};


#endif //TYPINGPROJECT_GUICOMPONENT_H
