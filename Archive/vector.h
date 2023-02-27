//
// Created by Dave R. Smith on 1/25/23.
//

#ifndef CS8_SPRING23_POINTERS_VECTOR_H
#define CS8_SPRING23_POINTERS_VECTOR_H
#include <initializer_list>
#include <iostream>
template<typename T>
class vector
{
private:
    T* ptr = nullptr;
    int size_, numUsed;
    T* createVector(int size);
    void resize(int newSize);

public:
    vector();
    vector(int size, T value);
    vector(std::initializer_list<T> list);
    vector(const vector<T> &vector);
    ~vector();
    vector<T> &operator = (const vector<T> &vector);
    void push_back (const T &value);
    void pop_back ();
    bool empty();
    T& front();
    T& back();
    T& at(int index);
    const T& at(int index) const;
    T& operator[](unsigned int index);
    int length();
    int size();
};

#include "vector.cpp"
#endif //CS8_SPRING23_POINTERS_VECTOR_H
