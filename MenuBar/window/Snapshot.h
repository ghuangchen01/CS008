//
// Created by Guanhao Huang Chen on 4/25/23.
//

#ifndef FINALPROJECT1_1_SNAPSHOT_H
#define FINALPROJECT1_1_SNAPSHOT_H
#include "Helper/State.h"
#include "string"
class Snapshot {
public:
    Snapshot();
    State state;
    std::string data;
    Snapshot& operator=(const Snapshot& other);
};


#endif //FINALPROJECT1_1_SNAPSHOT_H
