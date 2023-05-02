//
// Created by Guanhao Huang Chen on 4/30/23.
//

#ifndef FILETREE_FILENODE_H
#define FILETREE_FILENODE_H
#include "../../window/GUIComponent.h"
#include "FileItem.h"
#include "vector"
class FileNode: public GUIComponent{
private:
    FileItem data;
    std::vector<FileNode> children;
    std::string text;
public:
    FileNode();
    FileNode(std::string word,sf::Vector2f pos);
    bool isLeaf() const;
    FileItem &getData();
    void setData(FileItem& d);
    void addChildren(FileItem& d);
    void deleteChildren(FileItem d);
    std::vector<FileNode>& getChildren();
    void setText(std::string word);
    void setPos(sf::Vector2f pos);
    void reposition(FileItem* d);
    FileNode* findParent(FileNode& node,std::string word,bool& findName);

    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    sf::Vector2f getPosition() override;

    sf::FloatRect getGlobalBounds() override;
};


#endif //FILETREE_FILENODE_H
