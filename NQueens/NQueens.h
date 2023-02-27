//
// Created by Guanhao Huang Chen on 2/20/23.
//

#ifndef NQUEENS_NQUEENS_H
#define NQUEENS_NQUEENS_H
#include <iostream>

class NQueens {
private:
    int n;
    int *X;
public:
    NQueens();
    NQueens(int n);
    int abs(int r);
    bool place(int k,int i);
    void solveQueens(int k,bool &haveSolution);
};


#endif //NQUEENS_NQUEENS_H
