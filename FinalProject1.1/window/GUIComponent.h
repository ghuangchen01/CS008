//
// Created by Guanhao Huang Chen on 3/20/23.
//

#ifndef TYPINGPROJECT_GUICOMPONENT_H
#define TYPINGPROJECT_GUICOMPONENT_H


#include "SFML/Graphics.hpp"
#include "EventHandler.h"
#include "Helper/State.h"
#include "../Source/fonts/Font.h"
#include "Helper/MouseEvents.h"
#include "Helper/KeyShortcuts.h"
#include "../Source/backgroundColor/backgroundColor.h"
#include "iostream"
#include "Helper/KeyTyping.h"
#include "../Source/UserAccountStorage/Account.h"
#include "../Source/fileTreeIcon/Image.h"
class GUIComponent : public sf::Drawable,public EventHandler,public State,public sf::Transformable{
public:
//from the sf::Drawable class
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const = 0;

// from EventHandler
    virtual void addEventHandler(sf::RenderWindow& window, sf::Event event) = 0;
    virtual void update() = 0;

    virtual sf::Vector2f getPosition() =0;
    virtual sf::FloatRect getGlobalBounds() =0;

////from SnapshotInterface
//    virtual Snapshot& getSnapshot() = 0;
//    virtual void applySnapshot(const Snapshot& snapshot) = 0;
};


#endif //TYPINGPROJECT_GUICOMPONENT_H
