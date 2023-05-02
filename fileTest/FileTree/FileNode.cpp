//
// Created by Guanhao Huang Chen on 4/29/23.
//

#include "FileNode.h"
FileNode::FileNode() : data(Image::getFolder(), "Root", sf::Vector2f(200, 50), sf::Vector2f(10, 10)) {}

FileNode::FileNode(const std::string& text, sf::Vector2f size, sf::Vector2f position)
        : data(Image::getFile(), text, size, position) {}

void FileNode::draw(sf::RenderTarget& window, sf::RenderStates states) const {
    data.draw(window, states);
    for (const auto& child : children) {
        child.second->draw(window, states);
    }
}

void FileNode::addEventHandler(sf::RenderWindow& window, sf::Event event) {
    data.addEventHandler(window, event);
    for (auto& child : children) {
        child.second->addEventHandler(window, event);
    }
}

void FileNode::update() {
}

sf::FloatRect FileNode::getGlobalBounds() {
    return data.getGlobalBounds();
}

bool FileNode::isLeaf() const {
    return children.empty();
}

FileItem& FileNode::getData() {
    return data;
}

void FileNode::setData(const FileItem& newData) {
    data = newData;
}

std::map<std::string, FileNode*>& FileNode::getChildren() {
    return children;
}

FileNode::iterator FileNode::begin() {
    return children.begin();
}

FileNode::iterator FileNode::end() {
    return children.end();
}

void FileNode::toggleChildren() {

}

void FileNode::reposition() const {
}

sf::Vector2f FileNode::getPosition() {
    return data.getPosition();
}
FileNode::FileNode(const std::string &name, const sf::Vector2f &size, const sf::Vector2f &position)
        : data(name, size, position) {
}