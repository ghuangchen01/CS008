//
// Created by Guanhao Huang Chen on 4/24/23.
//

#ifndef TYPINGPROJECTSFML_NEW__SNAPSHOT_H
#define TYPINGPROJECTSFML_NEW__SNAPSHOT_H
#include "State.h"
#include "MultiText.h"

class Snapshot {
public:
    MultiText data;

    Snapshot();
    Snapshot(MultiText& text);
};


#endif //TYPINGPROJECTSFML_NEW__SNAPSHOT_H
