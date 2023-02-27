//
// Created by Guanhao Huang Chen on 2/8/23.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H

#include "LinkedList.h"
template <typename T>
class Stack {
private:
    LinkedList<T> stack;
public:
    Stack();
    Stack(const Stack<T>& stack);
    ~Stack();

    void pop();
    void push(const T& data);
    bool empty() const;
    int size() const;
    T& top();
    T seek(const int);

    Stack<T>& operator =(const Stack<T>& stack);

};

#include "Stack.cpp"
#endif //STACK_STACK_H
