//
// Created by Guanhao Huang Chen on 3/21/23.
//

#ifndef HEAP_HEAP_CPP
#define HEAP_HEAP_CPP
#include "Heap.h"

template<typename T>
Heap<T>::Heap() {

}

template<typename T>
int Heap<T>::getParent(int index) {
    return (index - 1) / 2;
}

template<typename T>
int Heap<T>::getLeftChild(int index) {
    return index * 2 + 1;
}

template<typename T>
int Heap<T>::getRightChild(int index) {
    return index * 2 + 2;
}

template<typename T>
int Heap<T>::getMaxChild(int index) {
    if (size() > index * 2 + 2) {
        int right = getRightChild(index);
        int left = getLeftChild(index);
        int maxChild = heap.at(right) > heap.at(left) ? right: left;
        return heap.at(index) > heap.at(maxChild) ? index: maxChild;
    }
    else if (size() > index * 2 + 1){
        int left = getLeftChild(index);
        return heap.at(index) > heap.at(left) ? index: left;
    }
    return index;
}

template<typename T>
void Heap<T>::reheapifyUp(int index) {
    if (index != 0) {
        int parent = getParent(index);
        int max = getMaxChild(parent);
        if(max != parent){
            swap(parent, index);
            reheapifyUp(parent);
        }
    }
}

template<typename T>
void Heap<T>::reheapifyDown(int index) {
    if(!empty()) {
        int max = getMaxChild(index);
        if (max != index) {
            swap(index,max);
            reheapifyDown(max);
        }
    }
}

template<typename T>
void Heap<T>::swap(int a, int b) {
    std::swap(heap.at(a),heap.at(b));
}

template<typename T>
void Heap<T>::push(const T &item) {
    heap.push_back(item);
    reheapifyUp(size()-1);
}

template<typename T>
void Heap<T>::pop() {
    swap(size() - 1,0);
    heap.pop_back();
    reheapifyDown(0);
}

template<typename T>
T &Heap<T>::top() {
    return heap.front() ;
}

template<typename T>
int Heap<T>::size() {
    return heap.size();
}


template<typename T>
bool Heap<T>::empty() {
    return heap.empty();
}

template<typename T>
void Heap<T>::operator+=(const T &item) {
    push(item);
}

#endif