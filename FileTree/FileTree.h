//
// Created by Guanhao Huang Chen on 4/30/23.
//

#ifndef FILETREE_FILETREE_H
#define FILETREE_FILETREE_H
#include "window/GUIComponent.h"
#include "FileNode.h"
class FileTree: public GUIComponent{
private:
    FileNode root;
    void repos(FileNode& n);
public:
    FileTree();
    FileTree(sf::Vector2f pos,std::string word);
    void push(std::string parent);
    void push(std::string parent, std::string child);

    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;
};


#endif //FILETREE_FILETREE_H
