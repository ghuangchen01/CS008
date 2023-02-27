//
// Created by Dave Smith on 1/29/23.
//

#include "Index.h"

Index::Index(const std::string& filename) {
    vector = generateIndex(filename);
}

void Index::addWord(const std::string &word) {
    int index = charToIndex(word[0]);
    vector[index].push_back(word);
}

std::ostream &operator<<(std::ostream &out, Index index) {
    for(int i = 0;i<26;i++){
        sort(index.vector[i]);
        out<<char('A'+i) << ": ";
        for(int j = 0;j<index.vector[i].size();j++){
            out<<index.vector[i][j]<<" ";
        }
        out<<std::endl;
    }
    return out;
}

