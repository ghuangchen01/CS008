//
// Created by Guanhao Huang Chen on 4/29/23.
//

#ifndef FILETREE_FILEITEM_H
#define FILETREE_FILEITEM_H
#include "../button/Box.h"

class FileItem:public GUIComponent{
private:
    sf::Sprite icon;
    float padding = 15;
    Box box;
public:
    FileItem();
    FileItem(sf::Texture& image,std::string word, sf::Vector2f pos);
    void setIcon(sf::Texture& image);
    void setText(std::string word);
    void setPos(sf::Vector2f pos);
    Box& getBox();
    void setColor(sf::Color color);
    std::string getText();
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;
};


#endif //FILETREE_FILEITEM_H
