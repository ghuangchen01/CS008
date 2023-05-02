//
// Created by Guanhao Huang Chen on 4/27/23.
//

#ifndef FINALPROJECT1_1_MULTITEXT_H
#define FINALPROJECT1_1_MULTITEXT_H
#include "SFML/Graphics.hpp"
#include "letter.h"
#include "vector"
#include "../../../Source/fonts/Font.h"
#include "../../../window/GUIComponent.h"
class MultiText: public GUIComponent{
private:
    std::vector<letter> letters;
    std::vector<letter> password;
    sf::Vector2f position;
    void setLetterInfo(letter& l);
    void setPosition();
public:
    MultiText();
    MultiText(const std::string word);
    void addLetter(const std::string word);
    void deleteLetter();
    void resetText();
    const std::string getLetter();
    void setPos(sf::Vector2f pos);
    const bool isEmpty();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;
};


#endif //FINALPROJECT1_1_MULTITEXT_H
