//
// Created by Guanhao Huang Chen on 4/29/23.
//

#ifndef FILETEST_FILETREE_H
#define FILETEST_FILETREE_H


#include "../window/GUIComponent.h"
#include "FileNode.h"
#include <SFML/Graphics.hpp>

class FileTree : public GUIComponent {
private:
    FileNode* root;

    void push(FileNode*& root, std::string parent, std::string item);
    void traverse(FileNode*& root, sf::RenderWindow& window, sf::Event event);

public:
    FileTree();

    void push(std::string parent, std::string item = "NULL");

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const override;
    virtual void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    virtual void update() override;
    virtual sf::FloatRect getGlobalBounds() override;

    sf::Vector2f getPosition() override;
};



#endif //FILETEST_FILETREE_H
