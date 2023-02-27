//
// Created by Guanhao Huang Chen on 2/13/23.
//

#ifndef STACK_CHAPTER5NUM11_H
#define STACK_CHAPTER5NUM11_H
#include "LinkedList.h"
#include <iostream>
class Chapter5Num11 {
private:
    LinkedList<int> number;
    LinkedList<int> storeInt(int digit);
public:
    Chapter5Num11();
    Chapter5Num11(int digit);
    int getNumber(const LinkedList<int> number);
    Chapter5Num11& operator+(Chapter5Num11 digit);
    Chapter5Num11& operator-(Chapter5Num11 digit);

    Chapter5Num11& operator*(Chapter5Num11 digit);

    Chapter5Num11& operator/(Chapter5Num11 digit);

    Chapter5Num11& operator=(Chapter5Num11& digit);

    friend std::ostream& operator<<(std::ostream& out, Chapter5Num11& digit);
};


#endif //STACK_CHAPTER5NUM11_H
