//
// Created by Guanhao Huang Chen on 2/8/23.
//
#ifndef STACK_QUEUE_CPP
#define STACK_QUEUE_CPP
#include "Queue.h"

template<typename T>
Queue<T>::Queue() {

}

template<typename T>
Queue<T>::Queue(const Queue<T> &queue) {
    this->queue = queue.queue;
}

template<typename T>
Queue<T>::~Queue() {

}

template<typename T>
void Queue<T>::pop() {
    queue.pop_back();
}

template<typename T>
void Queue<T>::push(const T &data) {
    queue.push_front(data);
}

template<typename T>
bool Queue<T>::empty() const {
    return queue.empty();
}

template<typename T>
int Queue<T>::size() const {
    return queue.size();
}

template<typename T>
T &Queue<T>::front() {
    return queue.back();
}

template<typename T>
Queue<T> &Queue<T>::operator=(const Queue<T> &queue) {
    this->queue = queue.queue;
    return *this;
}

template<typename T>
T Queue<T>::seek(const int data) {
    LinkedList<T> list;
    T value;
    for(int i = 0;i<data;i++){
        list.push_back(queue.back());
        if(data-1 == i){
            value = queue.back();
        }
        queue.pop_back();
    }
    int num = list.size();
    for(int i = 0;i<num;i++){
        queue.push_back(list.back());
        list.pop_back();
    }
    return value;
}

#endif