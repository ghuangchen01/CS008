//
// Created by Guanhao Huang Chen on 2/11/23.
//

#ifndef STACK_ITERATOR_H
#define STACK_ITERATOR_H
#include <iterator>
#include "Node.h"
template <typename T>
class Iterator : public std::iterator<std::bidirectional_iterator_tag, T>{
private:
    Node<T>* current; // where the walker is in the list

public:
    // default constructor
    Iterator();

    // overloaded constructor
    Iterator(Node<T>* node);

    // increment operator
    Iterator& operator++();

    // increment operator postfix
    Iterator operator++(int); // int is useless

    // decrement operator
    Iterator& operator--();

    // decrement operator postfix
    Iterator operator--(int); // int is useless

    Iterator& operator+(int data);

    Iterator& operator+=(int data);

    Iterator& operator-=(int data);

    // dereference operator
    T& operator*();

    bool operator==(const Iterator& iter) const;
    bool operator != (const Iterator& iter) const;




    const T& operator*() const;

};

#include "Iterator.cpp"


#endif //STACK_ITERATOR_H
