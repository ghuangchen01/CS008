//
// Created by Guanhao Huang Chen on 4/25/23.
//

#ifndef FINALPROJECT1_1_BOX_H
#define FINALPROJECT1_1_BOX_H
#include "../window/GUIComponent.h"
#include "../fonts/Font.h"
#include "../window/Helper/Helper.h"
class Box: public GUIComponent{
private:
    sf::RectangleShape box;
    sf::Text text;
public:
    Box();
    Box(std::string word,GUIComponent* object);
    Box(std::string word,sf::Vector2f pos);
    void setText(std::string word);
    void setBox();
    void setOutLine(float size);
    void setColor(sf::Color color);
    void setTextColor(sf::Color color);
    void setPosition(sf::Vector2f pos);
    void setSize(sf::Vector2f size);
    const sf::RectangleShape getBox();
    const std::string getText();
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;
};


#endif //FINALPROJECT1_1_BOX_H
