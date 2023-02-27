//
// Created by Guanhao Huang Chen on 2/8/23.
//

#ifndef LINKLIST_ITERATOR_CPP
#define LINKLIST_ITERATOR_CPP

#include "Iterator.h"

template<typename T>
Iterator<T>::Iterator() {
current = new Node<T>;
}

template<typename T>
Iterator<T>::Iterator(Node<T> *node):Iterator() {
current = node;
}

template<typename T>
Iterator<T> &Iterator<T>::operator++() {
    current = current -> next;
    return *this;

}

template<typename T>
Iterator<T> Iterator<T>::operator++(int) {
    Iterator tmp(*this);
    ++current;
    return tmp;
}

template<typename T>
Iterator<T> &Iterator<T>::operator--() {
    current = current -> previous;
    return *this;
}

template<typename T>
Iterator<T> Iterator<T>::operator--(int) {
    Iterator tmp(*this);
    --current;
    return tmp;
}

template<typename T>
T &Iterator<T>::operator*() {
    return current->data;
}

template<typename T>
const T &Iterator<T>::operator*() const {
    return current->data;
}

template<typename T>
bool Iterator<T>::operator==(const Iterator &iter) const {
    return current == iter.current;
}

template<typename T>
bool Iterator<T>::operator!=(const Iterator &iter) const {
    return current != iter.current;
}

#endif