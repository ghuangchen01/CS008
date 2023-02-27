//
// Created by Dave Smith on 1/29/23.
//

#ifndef CS8_SPRING23_QUIZ1_INDEX_H
#define CS8_SPRING23_QUIZ1_INDEX_H
#include <iostream>
#include "vector.h"
#include "functions.h"
class Index
{
private:
    vector<vector<std::string>> vector;
public:
    Index(const std::string& filename);
    void addWord(const std::string& word);
    friend std::ostream &operator <<(std::ostream& out, Index index);
};


#endif //CS8_SPRING23_QUIZ1_INDEX_H
