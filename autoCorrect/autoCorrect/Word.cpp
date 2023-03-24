//
// Created by Guanhao Huang Chen on 3/23/23.
//

#include "Word.h"
Word::Word() :Word(0){
}

Word::Word(int priority): priority(priority){

}

bool operator!=(const Word &lhs, const Word &rhs) {
    return lhs.priority != rhs.priority;
}

bool operator==(const Word &lhs, const Word &rhs) {
    return lhs.priority == rhs.priority;
}

bool operator>(const Word &lhs, const Word &rhs) {
    return lhs.priority > rhs.priority;
}

bool operator<(const Word &lhs, const Word &rhs) {
    return lhs.priority < rhs.priority;
}

bool operator>=(const Word &lhs, const Word &rhs) {
    return lhs.priority >= rhs.priority;
}

bool operator<=(const Word &lhs, const Word &rhs) {
    return lhs.priority <= rhs.priority;
}

void Word::setPriority(int p) {
    priority = p;
}

const int &Word::getPriority() {
    return priority;
}

void Word::resetPriority() {
    priority = 0;
}
