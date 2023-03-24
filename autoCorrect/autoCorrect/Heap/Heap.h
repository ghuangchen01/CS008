//
// Created by Guanhao Huang Chen on 3/23/23.
//

#ifndef AUTOCORRECT_HEAP_H
#define AUTOCORRECT_HEAP_H

#include "vector"

template <typename T>
class Heap {
private:
    std::vector<T> heap;
public:
    Heap();
    void reheapifyUp(int childIndex);
    void reheapifyDown(int childIndex);

    void push(const T& data);
    void pop();
    T& top();
    int size();
    bool empty();
    void swap(int a, int b);

    int getParent(int childIndex);
    int getLeftChild(int parentIndex);
    int getRightChild(int parentIndex);
    int getMaxChild(int parentIndex);

    void operator+=(const T& item);
};


#endif //AUTOCORRECT_HEAP_H
#include "Heap.cpp"