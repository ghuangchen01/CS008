//
// Created by Dave Smith on 1/28/23.
//

#ifndef CS8_SPRING23_QUIZ1_FUNCTIONS_H
#define CS8_SPRING23_QUIZ1_FUNCTIONS_H
#include <iostream>
#include <fstream>
#include "vector.h"
//// Why are things so red in here?

/// Function is broken, it should remove punctuation from each word.
/// Function also needs to sort each list of words alphabetically
vector<vector<std::string> > generateIndex(const std::string& filename);

///Function is broken ?????
bool openFile(std::ifstream& fin, const std::string& filename);

///Need a driver for this function
vector<std::string> getIndex(char c, const vector<vector<std::string> >& index);


/// These function are working as they should!!

/// Do we really want a print function to ouput our index? No!!
void print(vector<vector<std::string> >& index);
bool contains(vector<std::string>& vector, const std::string& string);
std::string tolower(const std::string& string);
void sort(vector<std::string>& vector);
std::string removePunctuation(const std::string& string);
std::string getFileContent(const std::string& filename);
int charToIndex(char c);
vector<std::string> split(const std::string& string, const std::string& delimiter);
#endif //CS8_SPRING23_QUIZ1_FUNCTIONS_H
