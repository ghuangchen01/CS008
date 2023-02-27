//
// Created by Guanhao Huang Chen on 2/8/23.
//


#ifndef STACK_LINKEDLIST_CPP
#define STACK_LINKEDLIST_CPP

#include "LinkedList.h"
template<typename T>
Node<T> *LinkedList<T>::createNode(T value, Node<T> *prev, Node<T> *next) {
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
Node<T> *&LinkedList<T>::find(T item) {
    Node<T>* temp;//temporary Node
    for(temp = head;temp!= nullptr;temp = temp->next){//while node doesn't end
        if(temp->data == item){//check if match
            return temp;
        }
    }
}

template<typename T>
bool LinkedList<T>::remove(Node<T>* node) {
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
void LinkedList<T>::insertBefore(Node<T> *insertThis, Node<T> *beforeThis) {
    insertThis->next = beforeThis;
    insertThis->previous = beforeThis->previous;
//    beforeThis->next->previous = insertThis;
    beforeThis->previous=insertThis;
    if(insertThis->previous!= nullptr){
        insertThis->previous->next = insertThis;
    }

}

template<typename T>
void LinkedList<T>::insertAfter(Node<T> *insertThis, Node<T> *afterThis) {
    insertThis->previous = afterThis;
    insertThis->next = afterThis->next;
    afterThis->next = insertThis;
    if(insertThis->next!= nullptr){
        insertThis->next->previous = insertThis;
    }
}

template<typename T>
void LinkedList<T>::addFirstNode(T data) {
    Node<T>* ptr = createNode(data);
    head = ptr;
    tail = ptr;
}

template<typename T>
LinkedList<T>::LinkedList() {
    head = new Node<T>;
    tail = new Node<T>;
}

template<typename T>
LinkedList<T>::LinkedList(const LinkedList<T> &list):LinkedList() {
    head = list.head;
    tail = list.tail;
}

template<typename T>
LinkedList<T>::~LinkedList() {
}

template<typename T>
void LinkedList<T>::push_back(const T &item) {
    Node<T>* ptr = createNode(item);
    if(empty()){
        addFirstNode(item);
    } else{
        insertAfter(ptr,tail);
        tail = ptr;
    }
}

template<typename T>
void LinkedList<T>::push_front(const T &item) {
    Node<T>* ptr = createNode(item);
    if(empty()){
        addFirstNode(item);
    } else{
        insertBefore(ptr,head);
        head = ptr;
    }
}

template<typename T>
void LinkedList<T>::pop_back() {
    if(head==tail){
        head = new Node<T>;
        tail = new Node<T>;
    } else{
        tail = tail->previous;
        tail->next = nullptr;
    }
}

template<typename T>
void LinkedList<T>::pop_front() {
    if(head==tail){
        head = new Node<T>;
        tail = new Node<T>;
    } else{
        head = head->next;
        head->previous = nullptr;
    }
}

template<typename T>
T & LinkedList<T>::back() {
    return tail->data;
}

template<typename T>
T &LinkedList<T>::front() {
    return head->data;
}

template<typename T>
int LinkedList<T>::size() const {
    int size = 0;
    Node<T>* temp;
    for(temp = head;temp!= nullptr;temp = temp->next) {
        size++;
    }
    return size;
}

template<typename T>
bool LinkedList<T>::empty() const {
    if(head!=tail&&head->next== nullptr){
        return true;
    }
    return false;
}

template<typename T>
void LinkedList<T>::insertBefore(const T &givenItem, const T &targetItem) {
    Node<T>* ptr = createNode(givenItem);
    Node<T>* temp = find(targetItem);
    insertBefore(ptr,temp);
    if(temp->data == head->data){
        head = ptr;
    }
}

template<typename T>
void LinkedList<T>::insertAfter(const T &givenItem, const T &targetItem) {
    Node<T>* ptr = createNode(givenItem);
    Node<T>* temp = find(targetItem);
    insertAfter(ptr,temp);
    if(temp->data == tail->data){
        tail = ptr;
    }
}

template<typename T>
bool LinkedList<T>::remove(const T &item) {
    return remove(createNode(item));
}

template<typename T>
LinkedList<T> &LinkedList<T>::operator = (const LinkedList<T> &list) {
    this->addFirstNode(list.head->data);
    Node<T>* temp;
    for(temp = list.head->next;temp!= tail->next;temp = temp->next){
        this->push_back(temp->data);
    }
    return *this;
}

template<typename T>
LinkedList<T> &LinkedList<T>::operator+=(const LinkedList<T> &list) {

}

template<typename S>
std::ostream &operator<<(std::ostream &out, const LinkedList<S> &list) {
    Node<S>* temp;
    for(temp = list.head; temp != nullptr; temp = temp->next){
        out<<temp->data<<" ";
    }
    out<<std::endl;
    return out;
}

template<typename T>
void LinkedList<T>::insertHead(const T &item) {
    Node<T>* ptr = createNode(item);
    if(empty()){
        addFirstNode(item);
    } else{
        insertBefore(ptr,head);
        head = ptr;
    }
}

template<typename T>
void LinkedList<T>::insertTail(const T &item) {
    Node<T>* ptr = createNode(item);
    if(empty()){
        addFirstNode(item);
    } else{
        insertAfter(ptr,tail);
        tail = ptr;
    }
}

template<typename T>
LinkedList<T> &LinkedList<T>::operator+=(const T &data) {
    Node<T>* ptr = createNode(data);
    insertAfter(ptr,tail);
    tail = ptr;
    return *this;
}

template<typename T>
Iterator<T> LinkedList<T>::begin() {

    return Iterator(head);
}

template<typename T>
Iterator<T> LinkedList<T>::end() {

    return Iterator(tail);
}

#endif