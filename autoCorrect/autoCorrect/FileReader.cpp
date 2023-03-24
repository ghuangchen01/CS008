//
// Created by Guanhao Huang Chen on 3/23/23.
//
#ifndef AUTOCORRECT_FILEREADER_CPP
#define AUTOCORRECT_FILEREADER_CPP
#include "FileReader.h"
template <typename T>
std::vector<T> FileReader<T>::getVector(const std::string &fileName) {
    std::vector<T> words;
    std::ifstream infile;
    infile.open(fileName);
    if(infile.fail()){
        exit(10);
    }
    T temp;
    while (!infile.eof()){
        infile>>temp;
        words.push_back(temp);
    }
    infile.close();
    return words;
}
#endif