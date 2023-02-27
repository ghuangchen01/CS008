//
// Created by Guanhao Huang Chen on 2/8/23.
//
#ifndef STACK_STACK_CPP
#define STACK_STACK_CPP
#include "Stack.h"

template<typename T>
Stack<T>::Stack() {
}

template<typename T>
Stack<T>::Stack(const Stack<T> &stack) {
    this->stack = stack.stack;
}

template<typename T>
Stack<T>::~Stack() {
}

template<typename T>
void Stack<T>::pop(){
    stack.pop_back();
}

template<typename T>
void Stack<T>::push(const T& data) {
    stack.push_back(data);
}

template<typename T>
bool Stack<T>::empty() const {
    return stack.empty();
}

template<typename T>
int Stack<T>::size() const {
    return stack.size();
}

template<typename T>
T& Stack<T>::top() {
    return stack.back();
}

template<typename T>
Stack<T> &Stack<T>::operator=(const Stack<T> &stack) {
    this->stack = stack.stack;
    return *this;
}

template<typename T>
T Stack<T>::seek(const int data) {
    LinkedList<T> list;
    T value;
    for(int i = 0;i<data;i++){
        list.push_back(stack.back());
        if(data-1 == i){
            value = stack.back();
        }
        stack.pop_back();
    }
    int num = list.size();
    for(int i = 0;i<num;i++){
        stack.push_back(list.back());
        list.pop_back();
    }
    return value;
}

#endif