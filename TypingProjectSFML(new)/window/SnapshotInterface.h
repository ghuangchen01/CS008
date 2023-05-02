//
// Created by Guanhao Huang Chen on 4/24/23.
//

#ifndef TYPINGPROJECTSFML_NEW__SNAPSHOTINTERFACE_H
#define TYPINGPROJECTSFML_NEW__SNAPSHOTINTERFACE_H
#include "Snapshot.h"

class SnapshotInterface {
public:
//     this function will return a snapshot of the object's current state
    virtual Snapshot getSnapshot() = 0;

// this function will apply a snapshot to the object.
//This will revert the object back to the state that has been recorded in the snapshot
    virtual void applySnapshot(const Snapshot& snapshot) = 0;
};


#endif //TYPINGPROJECTSFML_NEW__SNAPSHOTINTERFACE_H
