//
// Created by Guanhao Huang Chen on 4/25/23.
//

#include "TextInput.h"

void TextInput::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(text);
}

void TextInput::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    if (event.type == sf::Event::TextEntered)
    {
//        if(KeyShortcuts::isUndo()&&!History::isEmpty()){
//            std::cout<<"deleted\n";
//            History::popHistory();
//            applySnapshot(History::topHistory().snapshot);
//        }
        if (event.text.unicode < 128&&static_cast<char>(event.text.unicode)!='Z'&&!sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace)) {
            std::cout << "ASCII character typed: " << static_cast<char>(event.text.unicode) << std::endl;
            std::string word;
            word.push_back(static_cast<char>(event.text.unicode));
            text.addLetter(word);
        }
    }
}

void TextInput::update() {

}

Snapshot TextInput::getSnapshot() {
//    return Snapshot(text);
}

void TextInput::applySnapshot(const Snapshot &snapshot) {
//    text = snapshot.data;
}

TextInput::TextInput(sf::Vector2f &pos) {
    setLabel("label",30,pos);
    setBox();
    text.setPos({box.getGlobalBounds().left+box.getGlobalBounds().width,box.getPosition().y});
}

TextInput::TextInput(sf::Vector2f &pos, std::string word) {
    setLabel(word,30,pos);
    setBox();
}

TextInput::TextInput(sf::Vector2f &pos, std::string word, float size) {
    setLabel(word,size,pos);
    setBox();
}

void TextInput::setLabel(std::string word,float size,sf::Vector2f pos) {
    label.setString(word);
    label.setPosition(pos);
    label.setCharacterSize(size);
}

void TextInput::setBox() {
    box.setFillColor(sf::Color::Black);
    box.setOutlineColor(sf::Color::White);
    box.setSize({label.getGlobalBounds().height,label.getGlobalBounds().width});
    box.setPosition(label.getGlobalBounds().left + label.getGlobalBounds().width,label.getPosition().y);
}
