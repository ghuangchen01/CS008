#include <iostream>
#include "LinkList.h"
int main() {
//    LinkList<int>::iterator iter;

    // start off with a linked list
    LinkList<int> list;
    for(int i = 0;i<10;i++){
        list.push_back(i);
    }
    std::cout<<list;
//    for(iter = list.begin();iter!=list.end();++iter){
//        std::cout<<*iter<<" ";
//    }
    // create a code segment in main.cpp that
    // adds 1-9 into the linkedlist
    // get every third number and multiply it by 3

    // return the new list
}
