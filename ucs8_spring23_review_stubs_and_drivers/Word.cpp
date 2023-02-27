//
// Created by Dave R. Smith on 1/10/23.
//

#include "Word.h"

Word::Word()
{}

Word::Word(const std::string &word)
: word(word)
{
    setString(word);
}

std::ostream &operator<<(std::ostream &out, const Word &word)
{
    out << word.shown;
    return out;
}

void Word::setString(const std::string &word)
{
    this->word = word;
    this->shown = std::string(word.length(), '-');
}

bool Word::contains(char letter)
{
    return word.find(letter) != std::string::npos;
}

void Word::replaceDash(char letter)
{
    int pos;

    for (int i = 0; i < word.length(); i++)
    {
        if (letter == word[i])
        {
            shown.at(i) = letter;
        }
    }
}

bool Word::isSolved() {
    return shown.find('-') == std::string::npos;
}
