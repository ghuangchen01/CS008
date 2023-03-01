//
// Created by Guanhao Huang Chen on 2/28/23.
//

#include "Typing.h"

Typing::Typing() {
}

Typing::Typing(sf::RenderWindow &window, sf::Color color) {
    textBox.setX(window.getSize().x);
    textBox.setY(window.getSize().y);
    textBox.setFontColor(color);
}

void Typing::eventHandler(sf::RenderWindow &window, sf::Event event) {
    if (event.type == sf::Event::TextEntered)
    {
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)&&sf::Keyboard::isKeyPressed(sf::Keyboard::Z)&&!textBox.getString().empty()){
            std::cout<<"deleted\n";
            textBox.reverse();
        }
        if (event.text.unicode < 128&&static_cast<char>(event.text.unicode)!='Z') {
            std::cout << "ASCII character typed: " << static_cast<char>(event.text.unicode) << std::endl;
            word.push_back(static_cast<char>(event.text.unicode));
            updateWord = true;
        }
    }
}

void Typing::update() {
    if(updateWord){
        textBox.type(word);
        word = "";
        updateWord = false;
    }
}

void Typing::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(textBox);
}
