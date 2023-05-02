//
// Created by Guanhao Huang Chen on 4/25/23.
//

#ifndef FINALPROJECT_TESTGUI_H
#define FINALPROJECT_TESTGUI_H
#include "SFML/Graphics.hpp"
#include "window/GUIComponent.h"
#include "window/KeyShortcuts.h"
#include "window/MouseEvents.h"
class testGui: public GUIComponent {
private:
    sf::CircleShape circle;
    Snapshot snapshot;
public:
    testGui();
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    Snapshot &getSnapshot() override;

    void applySnapshot(const Snapshot &snapshot) override;
};


#endif //FINALPROJECT_TESTGUI_H
