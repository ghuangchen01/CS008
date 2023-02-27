//
// Created by Guanhao Huang Chen on 2/23/23.
//

#ifndef BINARYSEARCHTREE_BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_BINARYSEARCHTREE_H
#include "Node.h"
template <typename T>
class BinarySearchTree {
private:
    void preorder(Node<T>* node, void(*f)(T&));

    template<typename S>
    void preorder(Node<T>* node, void (S::*f)(T&),S& obj);

    void push(Node<T>* &node,const T& data);
public:
    Node<T>* root = nullptr;
    BinarySearchTree();
    BinarySearchTree(const T& data);
    BinarySearchTree(const BinarySearchTree& tree);

    ~BinarySearchTree();
    void deleteNode(Node<T>* &node);

    void operator=(const BinarySearchTree& tree);
    //default output function
    void output(T& data);
    //traversal
    void preorder(void (*f)(T&));

    template<typename S>
    void preorder(void (S::*f)(T&),S& obj);

    void push(const T& data);
};
#include "BinarySearchTree.cpp"

#endif //BINARYSEARCHTREE_BINARYSEARCHTREE_H
