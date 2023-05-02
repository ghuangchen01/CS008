//
// Created by Guanhao Huang Chen on 4/30/23.
//

#include "FileNode.h"

void FileNode::reposition(FileItem *d) {
    if(children.empty()){
        d->setPos({data.getPosition().x+30, data.getPosition().y+ data.getGlobalBounds().height});
    }else{
        d->setPos({this->children.back().getPosition().x,this->children.back().getPosition().y+ this->children.back().getGlobalBounds().height});
    }
    data.setText(text);
}

FileNode::FileNode() {
    setState(HIDDEN, true);
    data.setIcon(Image::getFile());
}

FileNode::FileNode(std::string word, sf::Vector2f pos) {
    setState(HIDDEN, true);
    text = word;
    data.setText(text);
    data.setPos(pos);
    data.setIcon(Image::getFile());
}

bool FileNode::isLeaf() const {
    return children.empty();
}

FileItem &FileNode::getData() {
    return data;
}

void FileNode::setData(FileItem& d) {
    data.setPosition(d.getPosition());
    data.setText(d.getText());
}

void FileNode::addChildren(FileItem &d) {
    reposition(&d);
    FileNode node(d.getText(),d.getPosition());
    d.setIcon(Image::getFile());
    children.push_back(node);
    data.setIcon(Image::getFolder());
}

void FileNode::deleteChildren(FileItem d) {

}

void FileNode::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    if(!checkState(HIDDEN)){
        window.draw(data);
        if(!isLeaf()){
            for(int i = 0; i<children.size();i++){
                window.draw(children[i]);
            }
        }
    }
}

void FileNode::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    if(!isLeaf()){
        for(int i =0;i<children.size();i++){
            children[i].addEventHandler(window,event);
        }
    }
    if(!checkState(HIDDEN)){
        if(MouseEvents::isHover(data.getBox().getBox(),window)){
            data.setColor(sf::Color::Blue);
        }else{
            data.setColor(sf::Color::Black);
        }
        if(MouseEvents::isClick(data.getBox().getBox(),window)){
            for(int i =0;i<children.size();i++){
                children[i].toggleState(HIDDEN);
            }
        }

    }
}

void FileNode::update() {
    if(!isLeaf()){
        data.setIcon(Image::getFolder());
    } else{
        data.setIcon(Image::getFile());
    }

}

sf::Vector2f FileNode::getPosition() {
    if(!isLeaf()){
        return {data.getPosition().x,children.back().getPosition().y};
    } else{
        return data.getPosition();
    }

}

sf::FloatRect FileNode::getGlobalBounds() {
    if(isLeaf()){
        return data.getGlobalBounds();
    }else{
        return {data.getPosition().x,children.back().getPosition().y,data.getGlobalBounds().width,data.getGlobalBounds().height};
    }
}

FileNode* FileNode::findParent(FileNode& node,std::string word,bool& findName) {
    FileNode* tempNode = nullptr;
    if(!findName){
        if(node.getData().getText() == word){
            findName = true;
            return &node;
        } else{
            if(!node.isLeaf()){
                for(int i =0;i<node.getChildren().size();i++){
                     tempNode = findParent(node.getChildren().at(i), word, findName);
                }
            }
        }
    }
    return tempNode;

}
std::vector<FileNode> &FileNode::getChildren() {
    return children;
}

void FileNode::setText(std::string word) {
    text = word;
    data.setText(text);
}

void FileNode::setPos(sf::Vector2f pos) {
    data.setPos(pos);
}
