//
// Created by Guanhao Huang Chen on 4/29/23.
//

#include "FileTree.h"

sf::Vector2f FileTree::getPosition() {
    if(root!= nullptr){
        return root->getPosition();
    }
}
FileTree::FileTree() {
    root = new FileNode("Root", sf::Vector2f(200, 50), sf::Vector2f(0, 0));
}

void FileTree::push(std::string parent, std::string item) {
    push(root, parent, item);
}

void FileTree::draw(sf::RenderTarget& window, sf::RenderStates states) const {
    if (root != nullptr) {
        root->draw(window, states);
    }
}

void FileTree::addEventHandler(sf::RenderWindow& window, sf::Event event) {
    if (root != nullptr) {
        traverse(root, window, event);
    }
}

void FileTree::update() {

}

sf::FloatRect FileTree::getGlobalBounds() {
    if(root!= nullptr){
        return root->getGlobalBounds();
    }
}

void FileTree::push(FileNode*& currentNode, std::string parent, std::string item) {
    if (currentNode->getData().getText() == parent) {
        FileNode* newNode = new FileNode(item, sf::Vector2f(200, 50), currentNode->getPosition() + sf::Vector2f(20, 60));
        currentNode->getChildren()[item] = newNode;
    } else {
        for (auto& child : currentNode->getChildren()) {
            push(child.second, parent, item);
        }
    }
}

void FileTree::traverse(FileNode*& currentNode, sf::RenderWindow& window, sf::Event event) {
    currentNode->addEventHandler(window, event);
    for (auto& child : currentNode->getChildren()) {
        traverse(child.second, window, event);
    }
}