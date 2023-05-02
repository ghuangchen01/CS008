//
// Created by Guanhao Huang Chen on 4/25/23.
//

#ifndef FINALPROJECT1_1_SNAPSHOTINTERFACE_H
#define FINALPROJECT1_1_SNAPSHOTINTERFACE_H
#include "Snapshot.h"

class SnapshotInterface {
public:
//     this function will return a snapshot of the object's current state
    virtual Snapshot& getSnapshot() = 0;

// this function will apply a snapshot to the object.
//This will revert the object back to the state that has been recorded in the snapshot
    virtual void applySnapshot(const Snapshot& snapshot) = 0;
};


#endif //FINALPROJECT1_1_SNAPSHOTINTERFACE_H
