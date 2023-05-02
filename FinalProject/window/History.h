//
// Created by Guanhao Huang Chen on 4/24/23.
//

#ifndef TYPINGPROJECTSFML_NEW__HISTORY_H
#define TYPINGPROJECTSFML_NEW__HISTORY_H
#include "stack"
#include "KeyShortcuts.h"
#include "Snapshot.h"

class History {
private:

    static std::stack<Snapshot> stack;
public:
    static void pushHistory(const Snapshot& snapshot);
    static Snapshot& topHistory();
    static void popHistory();
    static bool isEmpty();
};


#endif //TYPINGPROJECTSFML_NEW__HISTORY_H
