//
// Created by Guanhao Huang Chen on 4/25/23.
//

#include "History.h"
std::stack<Snapshot> History::stack;

void History::pushHistory(const Snapshot &snapshot) {
    stack.push(snapshot);
}

Snapshot &History::topHistory() {
    return stack.top();
}

void History::popHistory() {
    if(!stack.empty()){
        stack.pop();
    }
}

bool History::isEmpty() {
    return stack.empty();
}