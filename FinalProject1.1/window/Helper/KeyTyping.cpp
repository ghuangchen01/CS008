//
// Created by Guanhao Huang Chen on 4/27/23.
//

#include "KeyTyping.h"

std::string KeyTyping::typing(sf::Event event) {
    std::string word;
    if (event.type == sf::Event::TextEntered)
    {
        if (event.text.unicode < 128&&static_cast<char>(event.text.unicode)!='Z'&&!sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace)) {
//            std::cout << "ASCII character typed: " << static_cast<char>(event.text.unicode) << std::endl;
            word.push_back(static_cast<char>(event.text.unicode));
        }
    }
    return word;
}
