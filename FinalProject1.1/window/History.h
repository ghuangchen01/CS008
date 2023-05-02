//
// Created by Guanhao Huang Chen on 4/25/23.
//

#ifndef FINALPROJECT1_1_HISTORY_H
#define FINALPROJECT1_1_HISTORY_H
#include "Snapshot.h"
#include "stack"

class History {
private:

    static std::stack<Snapshot> stack;
public:
    static void pushHistory(const Snapshot& snapshot);
    static Snapshot& topHistory();
    static void popHistory();
    static bool isEmpty();
};


#endif //FINALPROJECT1_1_HISTORY_H
