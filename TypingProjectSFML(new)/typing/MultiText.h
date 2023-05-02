//
// Created by Guanhao Huang Chen on 3/20/23.
//

#ifndef TYPINGPROJECT_MULTITEXT_H
#define TYPINGPROJECT_MULTITEXT_H

#include "SFML/Graphics.hpp"
#include "list"
#include "letter.h"
#include "iostream"
#include "Font.h"
#include "History.h"
#include <iterator>

class MultiText:public sf::Drawable {
private:
    std::list<letter> letterObjects;
    sf::Vector2f pos;
    void setPosition();
//    float xPosition,yPosition;
//    sf::Font font;
//    float characterSize;
//    std::list<sf::Color> color;
public:
    MultiText();
    MultiText(const sf::Vector2f position);
    void setPos(sf::Vector2f  p);
    void addLetter(const std::string &word);
    const std::list<letter>& getLetters();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
//    template<typename T>
//    T* const begin();
//    template<typename T>
//    T* const end();
//    bool checkForOper(const letter& l);
//    bool checkForNum(const letter& l);
//    bool checkForWord(std::string& word);

    MultiText& operator=(const MultiText& m);
//    void setCharacterSize(const int& size);
//    void setFillColor(sf::Color color);
//    void setFont(sf::Font font);
//    void setValue();
//    void setX(const float& x);
//    void setY(const float& y);
//    void setString(const std::string &word);
//    const std::string &getString();
};


#endif //TYPINGPROJECT_MULTITEXT_H
