//
// Created by Guanhao Huang Chen on 3/23/23.
//

#ifndef AUTOCORRECT_FILEREADER_H
#define AUTOCORRECT_FILEREADER_H
#include "vector"
#include "fstream"
template<typename T>
class FileReader {
public:
    static std::vector<T> getVector(const std::string& fileName);
};
#include "FileReader.cpp"

#endif //AUTOCORRECT_FILEREADER_H
