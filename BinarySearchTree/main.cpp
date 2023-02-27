#include <iostream>
#include "BinarySearchTree.h"
#include "A.h"
int main() {
    BinarySearchTree<int> tree(10);
    for(int i = 0;i<20;i++){
        tree.push(i);
    }
    A a;
    tree.preorder(&A::hello,a);
    //not yet finished

    return 0;
}
