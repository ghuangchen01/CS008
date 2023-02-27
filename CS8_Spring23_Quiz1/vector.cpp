//
// Created by Guanhao Huang Chen on 1/31/23.
//
#ifndef CS8_SPRING23_QUIZ1_VECTOR_CPP
#define CS8_SPRING23_QUIZ1_VECTOR_CPP
#include "vector.h"

template<typename T>
vector<T>::vector():size_(0),numUsed(0)
{

}

template<typename T>
vector<T>::vector(int size, T value):size_(size),numUsed(0)
{
    for(int i=0; i<size; i++)
    {
        push_back(value);
    }
}

template<typename T>
T *vector<T>::createVector(int size)
{
    return new T[size];
}

template<typename T>
vector<T>::vector(std::initializer_list<T> list): vector()
{
    for(const T& element: list)
    {
        push_back(element);
    }

}

template<typename T>
vector<T>::vector(const vector<T> &vector)
{
    *this = vector;
}

template<typename T>
vector<T>::~vector()
{
    delete [] ptr;
}

template<typename T>
vector<T> &vector<T>::operator=(const vector<T> &vector)
{
    if(this == &vector)
        return *this;
    delete [] ptr;
    size_ = 0;
    numUsed = 0;
    for(int i = 0; i < vector.numUsed; i++)
    {
        vector::push_back(vector.at(i));
    }
    return *this;
}

template<typename T>
void vector<T>::push_back(const T &value)
{
    if(numUsed==size_){
        resize(size_ * 2);
    }
    *(ptr+numUsed++)=value;
}

template<typename T>
void vector<T>::pop_back()
{
    //assert(numUsed > 0);
    numUsed--;
    if (numUsed < size_/2) {
        resize(numUsed);
    }
}

template<typename T>
T &vector<T>::front()
{
   // assert(!empty());
    return ptr[0];
}

template<typename T>
T& vector<T>::back()
{
    //assert(!empty());
    return ptr[numUsed-1];
}

template<typename T>
T& vector<T>::at(int index)
{
  //  assert(!empty());
    return *(ptr + index);
}

template<typename T>
const T& vector<T>::at(int index)const
{
   // assert(!empty());
    return *(ptr + index);
}

template<typename T>
T &vector<T>::operator[](unsigned int index)
{
    return *(ptr + index);
}

template<typename T>
int vector<T>::length()
{
    return numUsed;
}

template<typename T>
int vector<T>::size()
{
    return numUsed;
}

template<typename T>
bool vector<T>::empty() const
{
    return numUsed == 0;
}
template<typename T>
void vector<T>::resize(int newSize)
{
    if(size_ == 0 )
    {
        size_ = 1;
        ptr = createVector(size_);
    }
    else
    {
        size_ = newSize;
        T* temp = createVector(size_);
        for(int i = 0; i < numUsed; i ++)
        {
            *(temp+i)= *(ptr+i);
        }
        delete[] ptr;
        ptr = temp;
    }

}
template<typename T>
const T &vector<T>::operator[](unsigned int index) const {
    return *(ptr + index);
}
#endif