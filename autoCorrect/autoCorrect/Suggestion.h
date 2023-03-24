//
// Created by Guanhao Huang Chen on 3/23/23.
//

#ifndef AUTOCORRECT_SUGGESTION_H
#define AUTOCORRECT_SUGGESTION_H

#include "vector"
#include "Word.h"
#include "FileReader.h"
#include "../fonts/Font.h"
#include "Heap/Heap.h"
#include "iostream"

class Suggestion {
private:
    std::vector<Word> word;
    std::string input;
    sf::Vector2f sPosition;
    std::vector<Word> result;
public:
    Suggestion();
    Suggestion(const std::string& w);
    void setString(const std::string& w);
    const std::string& getString();
    void checkMatching();
    void getInfoFromFile();
    void setPosition(const sf::Vector2f& p);
    void wordUpdate();
    const std::vector<Word>& getResultV(const std::string& w);
};


#endif //AUTOCORRECT_SUGGESTION_H
