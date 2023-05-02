//
// Created by Guanhao Huang Chen on 4/30/23.
//

#include "FileTree.h"

FileTree::FileTree() {
    root.setState(HIDDEN, false);
    root.setText("Menu");
    root.setPos({10,10});
}

FileTree::FileTree(sf::Vector2f pos, std::string word) {
    root.setState(HIDDEN, false);
    root.setText(word);
    root.setPos(pos);
}

void FileTree::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    if(!checkState(HIDDEN)){
        window.draw(root);
    }
}

void FileTree::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    if(!checkState(HIDDEN)){
        root.addEventHandler(window,event);
    }
}

void FileTree::update() {
}

sf::Vector2f FileTree::getPosition() {
    return root.getPosition();
}

sf::FloatRect FileTree::getGlobalBounds() {
    return root.getGlobalBounds();
}

void FileTree::push(std::string parent) {
    FileItem file;
    file.setText(parent);
    root.addChildren(file);
}

void FileTree::push(std::string parent, std::string child) {
    bool findName = false;
    FileItem file;
    file.setText(child);
    FileNode* fileNode = root.findParent(root,parent,findName);
    if(findName){
        fileNode->addChildren(file);
    }else{
        FileItem tempFile;
        tempFile.setText(parent);
        root.addChildren(tempFile);
        push(parent,child);
    }
}

//void FileTree::repos(FileNode &n) {
//    if(!n.isLeaf()){
//        for(int i =0;i<n.getChildren().size();i++){
//            n.reposition(&n.getChildren()[i].getData());
//            repos(n.getChildren()[i]);
//        }
//    }
//}
