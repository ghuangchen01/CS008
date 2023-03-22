//
// Created by Guanhao Huang Chen on 3/21/23.
//


/*
 * Reheapify Up logic
 * --------------------------------------
 * ReheapifyUp ( int childIndex) // starting with the child index
 * - get the parent index
 * - compare child and parent values
 *      - if child's value is greater than parent value, then swap values
 * - call the reheapifyUp again ( recursive way ) , pass in the parent index.
 /

/
 * ReheapifyDown Logic
 * -------------------------------------
 * ReheapifyDown(int parentIndex) // starting with the parent index
 * - Get the max, it is equal to the max child index. Pass in the parent
 *      - max = maxChildIndex(Parent)
 * - if max is greater than parent, then swap child and parent
 * - reheapifyDown ( max )
 /

/
 * Functions wanted :
 * - getParent(int childIndex) -> index of the parent
 * - getLeftChild(int parentIndex) -> index of left child
 * - getRightChild(int parentIndex) -> index of right child
 * - getMaxChild(int parentIndex) -> index of the max child
 *      - if no children are bigger than parent:
 *              - return the parent
 *
 * - ReheapifyUp(int childIndex) -> put the child where it belongs
 * - ReheapifyDown(int parentIndex) -> put the parent where it belongs
 * - swap(int childIndex, int ParentIndex) -> call the c++ swap and swap the data at those index
 * - push(const T& item) ->
 * - pop() ->
 * - T& top()
 * - int size()
 * - empty()
 */
#ifndef HEAP_HEAP_H
#define HEAP_HEAP_H
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


#endif //HEAP_HEAP_H
#include "Heap.cpp"