//
// Created by Guanhao Huang Chen on 2/8/23.
//

#ifndef STACK_NODE_H
#define STACK_NODE_H
template <typename T>
struct Node{
    T data;
    Node<T>* next = nullptr, *previous = nullptr;
};
#endif //STACK_NODE_H
