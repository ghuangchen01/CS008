//
// Created by Guanhao Huang Chen on 2/1/23.
//

#ifndef LINKLIST_LINKLIST_H
#define LINKLIST_LINKLIST_H
#include "Node.h"
#include <iostream>
#include "Iterator.h"
template <typename T>
class LinkList {
private:
    Node<T>* head = nullptr, *tail = nullptr;
    Node<T>* createNode(T value, Node<T>* prev = nullptr, Node<T>* next = nullptr);
    Node<T>*& find(T item);
    bool remove(Node<T>* node);
    void insertBefore(Node<T>* insertThis, Node<T>* beforeThis);
    void insertAfter(Node<T>* insertThis, Node<T>* afterThis);
    void addFirstNode(T data);
public:
    typedef Iterator<T> iterator;

    LinkList();
    LinkList(const LinkList<T>& list);
    ~LinkList();
    void push_back(const T& item);
    void push_front(const T& item);
    void pop_back();
    void pop_front();
    T& back();
    T& front();
    int size() const;
    bool empty() const;
    void insertBefore(const T& givenItem, const T& targetItem);
    void insertAfter(const T& givenItem, const T& targetItem);
    void insertHead(const T& item);
    void insertTail(const T& item);
    bool remove(const T& item);
    LinkList<T>& operator = (const LinkList<T>& list);
    LinkList<T>& operator +=(const LinkList<T>& list);
    LinkList<T>& operator +=(const T& data);

    template<typename S>
    friend std::ostream& operator<<(std::ostream& out, const LinkList<S>& list);

    Iterator<T> begin();
    Iterator<T> end();
};

#include "LinkList.cpp"
#endif //LINKLIST_LINKLIST_H
