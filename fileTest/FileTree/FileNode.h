//
// Created by Guanhao Huang Chen on 4/29/23.
//

#ifndef FILETEST_FILENODE_H
#define FILETEST_FILENODE_H


#include "../window/GUIComponent.h"
#include "FileItem.h"
#include <map>
#include <SFML/Graphics.hpp>

class FileNode : public GUIComponent {
private:
    FileItem data;
    std::map<std::string, FileNode*> children;

    void toggleChildren();
    void reposition() const;

public:
    typedef typename std::map<std::string, FileNode*>::iterator iterator;
    FileNode();
    FileNode(const std::string& text, sf::Vector2f size, sf::Vector2f position);
    FileNode(const std::string &name, const sf::Vector2f &size, const sf::Vector2f &position);

    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
    sf::FloatRect getGlobalBounds() override;

    sf::Vector2f getPosition() override;

    bool isLeaf() const;
    FileItem& getData();
    void setData(const FileItem& data);
    std::map<std::string, FileNode*>& getChildren();

    iterator begin();
    iterator end();
};


#endif //FILETEST_FILENODE_H
