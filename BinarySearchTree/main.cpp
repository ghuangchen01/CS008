#include <iostream>
#include "BinarySearchTree.h"
#include "A.h"
#include <random>
int main() {
    BinarySearchTree<int> tree(40);
    std::vector<int> vec;
    int ran;
    for(int i = 0;i<20;i++){
        ran = rand()%100+1;
        tree.push(ran);
        vec.push_back(ran);
    }
    A a;
    std::cout<<"regular:"<<std::endl;
    for(int i = 0;i<vec.size();i++){
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\npreorder:"<<std::endl;
    tree.preorder(&A::f,a);
    std::cout<<"\ninorder:"<<std::endl;
    tree.inorder(&A::f,a);
    std::cout<<"\npostorder:"<<std::endl;
    tree.postorder(&A::f,a);

    return 0;
}
