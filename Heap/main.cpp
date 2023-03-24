
#include <iostream>
#include "Heap.h"

int main() {
    Heap<int> heap;
    for(int i = 0;i<100;i++){
        int r = rand()%3;
        heap.push(r);
    }
    heap+=3;
    while (!heap.empty()){
        std::cout<<heap.top()<<" ";
        heap.pop();
    }
    std::cout<<"\n";
    std::cout<<"heap size: "<<heap.size();
    return 0;
}