//
// Created by Guanhao Huang Chen on 3/20/23.
//

#include "Typing.h"
Typing::Typing() {
}

Typing::Typing(sf::Vector2f position) {
    text.setFont(Font::getFont());
    text.setCharacterSize(30);
    text.setX(position.x);
    text.setY(position.y);
}

void Typing::eventHandler(sf::RenderWindow &window, sf::Event event) {
    if (event.type == sf::Event::TextEntered)
    {
        if((sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)&&sf::Keyboard::isKeyPressed(sf::Keyboard::Z)||sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))&&!text.getString().empty()){
            std::cout<<"deleted\n";
            text.reverse();
        }
        if (event.text.unicode < 128&&static_cast<char>(event.text.unicode)!='Z'&&!sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace)) {
            std::cout << "ASCII character typed: " << static_cast<char>(event.text.unicode) << std::endl;
            word.push_back(static_cast<char>(event.text.unicode));
            updateWord = true;
        }
    }
}

void Typing::update() {
    if(updateWord){
        int r = rand()%255,g = rand()%255,b = rand()%255;
        sf::Color color(r,g,b);
        text.setFillColor(color);
        text.setString(word);
        word = "";
        updateWord = false;
    }
}

void Typing::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(text);
}