//
// Created by Guanhao Huang Chen on 4/25/23.
//

#ifndef TYPINGPROJECTSFML_NEW__TEXTINPUT_H
#define TYPINGPROJECTSFML_NEW__TEXTINPUT_H
#include "../window/GUIComponent.h"
#include "MultiText.h"
#include "../window/History.h"
class TextInput: public GUIComponent{
private:
    MultiText text;
    sf::Text label;
    sf::RectangleShape box;
public:
    TextInput(sf::Vector2f& pos);
    TextInput(sf::Vector2f& pos, std::string word);
    TextInput(sf::Vector2f& pos, std::string word,float size);

    void setLabel(std::string word,float size,sf::Vector2f pos);
    void setBox();
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    Snapshot getSnapshot() override;

    void applySnapshot(const Snapshot &snapshot) override;
};


#endif //TYPINGPROJECTSFML_NEW__TEXTINPUT_H
