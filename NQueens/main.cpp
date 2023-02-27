#include <iostream>
#include "NQueens.h"
int main() {
    bool haveSolution = false;
    NQueens nQueens(4);
    nQueens.solveQueens(0,haveSolution);
    if(!haveSolution){
        std::cout<<"No solution\n";
    }
    return 0;
}
