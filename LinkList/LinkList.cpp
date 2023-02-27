//
// Created by Guanhao Huang Chen on 2/1/23.
//
#ifndef LINKLIST_LINKLIST_CPP
#define LINKLIST_LINKLIST_CPP
#include "LinkList.h"

template<typename T>
Node<T> *LinkList<T>::createNode(T value, Node<T> *prev, Node<T> *next) {
    Node<T>* ptr = new Node<T>;//create ptr
    ptr->data = value;//set value for ptr data
    if(prev!= nullptr){
        prev->next = ptr;//point prev to ptr
        ptr->previous = prev;//point ptr to prev
    } else{
        ptr->previous = nullptr;
    }
    if(next!= nullptr){
        next->previous = ptr;//point next to ptr
        ptr->next = next;//point ptr to next
    } else{
        ptr->next = nullptr;
    }
    return ptr;
}

template<typename T>
Node<T> *&LinkList<T>::find(T item) {
    Node<T>* temp;//temporary Node
    for(temp = head;temp!= nullptr;temp = temp->next){//while node doesn't end
        if(temp->data == item){//check if match
            return temp;
        }
    }
}

template<typename T>
bool LinkList<T>::remove(Node<T>* node) {
    Node<T>* temp;
    for(temp = head;temp!= nullptr;temp = temp->next) {
        if(node == temp){
            node->previous->next = node->next;
            node->next->previous = node->previous;
            return true;
        }
    }
    return false;
}

template<typename T>
void LinkList<T>::insertBefore(Node<T> *insertThis, Node<T> *beforeThis) {
    insertThis->next = beforeThis;
    insertThis->previous = beforeThis->previous;
    beforeThis->previous=insertThis;
    if(insertThis->previous!= nullptr){
        insertThis->previous->next = insertThis;
    }

}

template<typename T>
void LinkList<T>::insertAfter(Node<T> *insertThis, Node<T> *afterThis) {
    insertThis->previous = afterThis;
    insertThis->next = afterThis->next;
    afterThis->next = insertThis;
    if(insertThis->next!= nullptr){
        insertThis->next->previous = insertThis;
    }
}

template<typename T>
void LinkList<T>::addFirstNode(T data) {
    Node<T>* ptr = createNode(data);
    head = ptr;
    tail = ptr;
}

template<typename T>
LinkList<T>::LinkList() {
    head = new Node<T>;
    tail = new Node<T>;
}

template<typename T>
LinkList<T>::LinkList(const LinkList<T> &list):LinkList() {
    head = list.head;
    tail = list.tail;
}

template<typename T>
LinkList<T>::~LinkList() {
    Node<T>* temp;
    for(temp = head->next;temp!= nullptr;temp = temp->next) {
        delete[] temp->previous;
    }
    delete[] temp;
}

template<typename T>
void LinkList<T>::push_back(const T &item) {
    Node<T>* ptr = createNode(item);
    if(tail!= nullptr){
        insertAfter(ptr,tail);
        tail = ptr;
    } else if(empty()){
        addFirstNode(item);
    } else{
        insertTail(item);
    }
}

template<typename T>
void LinkList<T>::push_front(const T &item) {
    Node<T>* ptr = createNode(item);
    if(empty()){
        addFirstNode(item);
    } else{
        insertBefore(ptr,head);
        head = ptr;
    }
}

template<typename T>
void LinkList<T>::pop_back() {
    tail = tail->previous;
}

template<typename T>
void LinkList<T>::pop_front() {
    head = head->next;
}

template<typename T>
T &LinkList<T>::back() {
    return tail->data;
}

template<typename T>
T &LinkList<T>::front() {
    return head->data;
}

template<typename T>
int LinkList<T>::size() const {
    int size = 0;
    Node<T>* temp;
    for(temp = head;temp!= nullptr;temp = temp->next) {
        size++;
    }
    return size;
}

template<typename T>
bool LinkList<T>::empty() const {
    if(head->next== nullptr&&tail->previous== nullptr){
        return true;
    }
    return false;
}

template<typename T>
void LinkList<T>::insertBefore(const T &givenItem, const T &targetItem) {
    Node<T>* ptr = createNode(givenItem);
    Node<T>* temp = find(targetItem);
    insertBefore(ptr,temp);
    if(temp->data == head->data){
        head = ptr;
    }
}

template<typename T>
void LinkList<T>::insertAfter(const T &givenItem, const T &targetItem) {
    Node<T>* ptr = createNode(givenItem);
    Node<T>* temp = find(targetItem);
    insertAfter(ptr,temp);
    if(temp->data == tail->data){
        tail = ptr;
    }
}

template<typename T>
bool LinkList<T>::remove(const T &item) {
    return remove(createNode(item));
}

template<typename T>
LinkList<T> &LinkList<T>::operator = (const LinkList<T> &list) {
    this->addFirstNode(list.head->data);
    Node<T>* temp;
    for(temp = list.head->next;temp!= nullptr;temp = temp->next){
        this->push_back(temp->data);
    }
    return *this;
}

template<typename T>
LinkList<T> &LinkList<T>::operator+=(const LinkList<T> &list) {

}

template<typename S>
std::ostream &operator<<(std::ostream &out, const LinkList<S> &list) {
    Node<S>* temp;
    for(temp = list.head; temp != nullptr; temp = temp->next){
        out<<temp->data<<" ";
    }
    out<<std::endl;
    return out;
}

template<typename T>
void LinkList<T>::insertHead(const T &item) {
    Node<T>* ptr = createNode(item);
    if(empty()){
        addFirstNode(item);
    } else{
        insertBefore(ptr,head);
        head = ptr;
    }
}

template<typename T>
void LinkList<T>::insertTail(const T &item) {
    Node<T>* ptr = createNode(item);
    if(head == tail){
        insertAfter(ptr,head);
        tail = ptr;
    } else{
        insertAfter(ptr,tail);
        tail = ptr;
    }
}

template<typename T>
LinkList<T> &LinkList<T>::operator+=(const T &data) {
    Node<T>* ptr = createNode(data);
    insertAfter(ptr,tail);
    tail = ptr;
    return *this;
}

template<typename T>
Iterator<T> LinkList<T>::begin() {
    Iterator<T> iter ;
    iter = head;
    return iter;
}

template<typename T>
Iterator<T> LinkList<T>::end() {
    Iterator<T> iter ;
    iter = tail;
    return iter;
}

#endif