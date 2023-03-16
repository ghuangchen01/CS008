//
// Created by Guanhao Huang Chen on 2/23/23.
//

#ifndef BINARYSEARCHTREE_BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_BINARYSEARCHTREE_H
#include "Node.h"
#include <queue>

template <typename T>
class BinarySearchTree {
private:
    //preorder starts
    void preorder(Node<T>* node, void(*f)(T&));

    template<typename S>
    void preorder(Node<T>* node, void (S::*f)(T&),S& obj);
    //preorder ends
    //inorder starts
    void inorder(Node<T>* node, void(*f)(T&));

    template<typename S>
    void inorder(Node<T>* node, void (S::*f)(T&),S& obj);
    //inorder ends
    //postorder starts
    void postorder(Node<T>* node, void(*f)(T&));

    template<typename S>
    void postorder(Node<T>* node, void (S::*f)(T&),S& obj);
    //postorder ends
    void push(Node<T>* &node,const T& data);
    Node<T>* root = nullptr;
public:
    BinarySearchTree();
    BinarySearchTree(const T& data);
    BinarySearchTree(const BinarySearchTree& tree);

    ~BinarySearchTree();
    void deleteNode(Node<T>* &node);

    void operator=(const BinarySearchTree& tree);

    void operator+=(const T& data);
    //default output function
    void output(T& data);
    //traversal
    //preorder starts
    void preorder(void (*f)(T&));

    template<typename S>
    void preorder(void (S::*f)(T&),S& obj);
    //preorder ends
    //inorder starts
    void inorder(void (*f)(T&));

    template<typename S>
    void inorder(void (S::*f)(T&),S& obj);
    //inorder ends
    //postorder starts
    void postorder(void (*f)(T&));

    template<typename S>
    void postorder(void (S::*f)(T&),S& obj);
    //postorder ends
    void push(const T& data);

    template<typename S>
    void BFS(void (S::*f)(T&),S& obj);
};
#include "BinarySearchTree.cpp"

#endif //BINARYSEARCHTREE_BINARYSEARCHTREE_H
