//
// Created by Dave R. Smith on 1/10/23.
//

#ifndef UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_WORD_H
#define UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_WORD_H


#include <string>
#include <iostream>
class Word
{
private:
    std::string word;
    std::string shown;
public:

    Word(const std::string &word);
    Word();
    bool contains( char letter);
    void replaceDash(char letter);
    bool isSolved();
    void setString(const std::string& word);
    friend std::ostream& operator<<(std::ostream& out, const Word& word);
};


#endif //UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_WORD_H
