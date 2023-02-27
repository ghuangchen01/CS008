//
// Created by Guanhao Huang Chen on 2/8/23.
//

#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

#include "LinkedList.h"
template <typename T>
class Queue {
private:
    LinkedList<T> queue;
public:
    Queue();
    Queue(const Queue<T>& queue);
    ~Queue();

    void pop();
    void push(const T& data);
    bool empty() const;
    int size() const;
    T& front();
    T seek(const int);
    Queue<T>& operator =(const Queue<T>& queue);
};

#include "Queue.cpp"
#endif //STACK_QUEUE_H
