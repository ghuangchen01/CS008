//
// Created by Guanhao Huang Chen on 4/29/23.
//

#ifndef FILETEST_FILEITEM_H
#define FILETEST_FILEITEM_H
#include "../Box.h"
#include "SFML/Graphics.hpp"
#include "icon/Image.h"
class FileItem : public Box {
public:
    FileItem();
    FileItem(sf::Texture icon, const std::string& text, sf::Vector2f size, sf::Vector2f position);
    void setIcon(sf::Texture icon);
    void setPosition(const sf::Vector2f &pos);

    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;

private:
    sf::Sprite icon;
};

#endif //FILETEST_FILEITEM_H
