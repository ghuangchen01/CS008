//
// Created by Dave R. Smith on 1/10/23.
//

#ifndef UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_WORDBANK_H
#define UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_WORDBANK_H

#include <stack>
#include "Word.h"
#include <fstream>
#include <string>
#include "NoWordException.h"
class Wordbank
{
private:
    std::stack<Word> words;
    void loadFromFile(const std::string& filename);
public:
    Wordbank(const std::string& filename);
    Wordbank();
    void addWord(const std::string& word);
    void addWord(const Word& word);
    Word getWord();
    void remove();
    bool hasWords();
};


#endif //UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_WORDBANK_H
