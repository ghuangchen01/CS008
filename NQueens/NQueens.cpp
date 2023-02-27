//
// Created by Guanhao Huang Chen on 2/20/23.
//

#include "NQueens.h"

NQueens::NQueens() {
    n = 0;
    X = new int[0];
}

NQueens::NQueens(int n) {
    this->n = n;
    X = new int[n];
}

int NQueens::abs(int r) {
    if(r<0){
        return r * (-1);
    }
    return r;
}

bool NQueens::place(int k, int i) {
    for(int j = 0;j<k;j++){
//        std::cout<<"abs x[j]-i : "<<abs(X[j]-i)<<"abs j-k : "<<abs(j-k)<<std::endl;
//        std::cout<<"X[j] : "<<X[j]<<" i : "<<i<<std::endl;
        if(X[j]==i || abs(X[j]-i)== abs(j-k)){
//            std::cout<<"false"<<std::endl;
            return false;
        }
    }
//    std::cout<<"true"<<std::endl;
    return true;
}

void NQueens::solveQueens(int k,bool &haveSolution) {
    for(int i =0;i<n;i++){
//        std::cout<<"k : "<<k<<std::endl;
        if(place(k,i)){
            X[k] = i;
            if(k ==n-1){
                haveSolution = true;
                std::cout<<"Solution : \n";
                for(int z = 0;z<n;z++){
                    for(int y = 0;y<n;y++){
                        if(X[z] == y){
                            std::cout<<"Q";
                        }else{
                            std::cout<<"#";
                        }
                    }
                    std::cout<<std::endl;
                }
            }else{
                solveQueens(k+1,haveSolution);
            }
        }
    }
}
