//
// Created by Guanhao Huang Chen on 3/23/23.
//

#ifndef AUTOCORRECT_WORD_H
#define AUTOCORRECT_WORD_H
#include "SFML/Graphics.hpp"

class Word: public sf::Text {
private:
    int priority = 0;
public:
    Word();
    Word(int priority);
    void setPriority(int p);
    const int& getPriority();
    void resetPriority();

    friend bool operator!=(const Word &lhs, const Word &rhs);
    friend bool operator==(const Word &lhs, const Word &rhs);
    friend bool operator>(const Word &lhs, const Word &rhs);
    friend bool operator<(const Word &lhs, const Word &rhs);
    friend bool operator>=(const Word &lhs, const Word &rhs);
    friend bool operator<=(const Word &lhs, const Word &rhs);

};


#endif //AUTOCORRECT_WORD_H
