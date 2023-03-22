
#include <iostream>
#include "Heap.h"
int main() {
    Heap<int> heap;
    for(int i = 0;i<10;i++){
        int r = rand()%100;
        heap.push(r);
    }
    heap+=500;
    while (!heap.empty()){
        std::cout<<heap.top()<<" ";
        heap.pop();
    }
    std::cout<<"\n";
    std::cout<<"heap size: "<<heap.size();
    return 0;
}
