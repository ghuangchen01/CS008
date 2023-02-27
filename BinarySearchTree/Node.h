//
// Created by Guanhao Huang Chen on 2/23/23.
//

#ifndef BINARYSEARCHTREE_NODE_H
#define BINARYSEARCHTREE_NODE_H
//not finished
template<typename T>
struct Node{
    T data;
    Node<T>* left = nullptr,*right = nullptr;
};

#endif //BINARYSEARCHTREE_NODE_H