//
// Created by Dave R. Smith on 1/10/23.
//

#include "Wordbank.h"
Wordbank::Wordbank()
{}

Wordbank::Wordbank(const std::string &filename)
{
    loadFromFile(filename);
}

void Wordbank::loadFromFile(const std::string &filename)
{
    std::ifstream fin;
    std::string next;

    fin.open(filename);
    if(fin.fail())
        exit(28);

    while(getline(fin, next))
    {
        words.push(next);
    }


    fin.close();
}

void Wordbank::addWord(const std::string &word)
{
    words.push(Word(word));
}

void Wordbank::addWord(const Word &word)
{
    words.push(word);
}

Word Wordbank::getWord()
{
    if(!hasWords())
        throw NoWordException("This is my message");
    Word temp = words.top();
    words.pop();
    return temp;
}

void Wordbank::remove()
{
    words.pop();
}

bool Wordbank::hasWords()
{
    return !words.empty();
}
