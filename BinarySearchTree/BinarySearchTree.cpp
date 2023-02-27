//
// Created by Guanhao Huang Chen on 2/23/23.
//
#ifndef BINARYSEARCHTREE_BINARYSEARCHTREE_CPP
#define BINARYSEARCHTREE_BINARYSEARCHTREE_CPP
#include "BinarySearchTree.h"
//not finished
template<typename T>
BinarySearchTree<T>::BinarySearchTree() {

}

template<typename T>
BinarySearchTree<T>::BinarySearchTree(const T &data) {
    root = new Node<T>{data};
}

template<typename T>
BinarySearchTree<T>::BinarySearchTree(const BinarySearchTree &tree) {
    root = tree.root;
}

template<typename T>
BinarySearchTree<T>::~BinarySearchTree() {
    deleteNode(root);
}
template<typename T>
void BinarySearchTree<T>::preorder(Node<T> *node, void (*f)(T &)) {

}

template<typename T>
template<typename S>
void BinarySearchTree<T>::preorder(Node<T> *node, void (S::*f)(T &), S &obj) {
    if(node){
        (obj.*f)(node->data);
        preorder(node->left,f,obj);
        preorder(node->right,f,obj);
    }

}

template<typename T>
void BinarySearchTree<T>::push(Node<T> *&node,const T& data) {
    if(node== nullptr){
        node = new Node<T>{data};
    } else if(data<node->data){
        push(node->left,data);
    } else if(data>node->data){
        push(node->right,data);
    }
}


template<typename T>
void BinarySearchTree<T>::deleteNode(Node<T> *&node) {
    if(node->left== nullptr&&node->right== nullptr){
        delete[] node;
    }
    else if(node->left){
        deleteNode(node->left);
    }
    else if(node->right){
        deleteNode(node->right);
    }
}

template<typename T>
void BinarySearchTree<T>::operator=(const BinarySearchTree &tree) {

}

template<typename T>
void BinarySearchTree<T>::output(T &data) {

}

template<typename T>
void BinarySearchTree<T>::preorder(void (*f)(T &)) {
    preorder(root,f);
}

template<typename T>
template<typename S>
void BinarySearchTree<T>::preorder(void (S::*f)(T &), S &obj) {
    preorder(root,f,obj);
}

template<typename T>
void BinarySearchTree<T>::push(const T &data) {
    push(root,data);
}

#endif