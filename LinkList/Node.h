//
// Created by Guanhao Huang Chen on 2/1/23.
//

#ifndef LINKLIST_NODE_H
#define LINKLIST_NODE_H
template <typename T>
struct Node{
    T data;
    Node<T>* next = nullptr, *previous = nullptr;
};
#endif //LINKLIST_NODE_H
