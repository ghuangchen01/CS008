//
// Created by Guanhao Huang Chen on 3/23/23.
//

#include "Suggestion.h"

Suggestion::Suggestion() {
    input = "";
    getInfoFromFile();
}

Suggestion::Suggestion(const std::string &w) {
    input = w;
    getInfoFromFile();
}

void Suggestion::checkMatching() {
    for(int i =0;i<input.size();i++){
        for(int j = 0;j<word.size();j++){
            std::string temp = word[j].getString();
            if(temp.size()>=input.size()){
                if(tolower(input[i]) == tolower(temp[i])){
                    word[j].setPriority(word[j].getPriority()+1);
                }
            }
        }
    }
}

void Suggestion::setString(const std::string &w) {
    input = w;
}

const std::string &Suggestion::getString() {
    return input;
}

void Suggestion::getInfoFromFile() {
    std::vector<std::string> tempWord = FileReader<std::string>::getVector("autoCorrect/5000-baby-girl-names.txt");
    for(int i =0;i<tempWord.size();i++){
        Word w;
        w.setString(tempWord[i]);
        word.push_back(w);
    }
}

void Suggestion::wordUpdate() {
    for(int i =0;i<result.size();i++){
        result[i].setPosition(sPosition.x,sPosition.y+(i*35));
        result[i].setFont(Font::getFont());
        result[i].setCharacterSize(30);
        result[i].setFillColor(sf::Color::White);
    }
}

void Suggestion::setPosition(const sf::Vector2f &p) {
    sPosition = p;
}

const std::vector<Word> &Suggestion::getResultV(const std::string& w) {
    input = w;
    getInfoFromFile();
    checkMatching();
    Heap<Word> heap;
    int size = word.size();
    for(int i = 0;i<size;i++){
        heap.push(word[i]);
    }
    for (int i = 0; i < size; ++i) {
        result.push_back(heap.top());
        std::string temp = heap.top().getString();
        heap.pop();
    }
    setPosition({210,120});
    wordUpdate();
    return result;
}
