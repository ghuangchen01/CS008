//
// Created by Guanhao Huang Chen on 4/25/23.
//

#include "Snapshot.h"

Snapshot::Snapshot() {

}

Snapshot &Snapshot::operator=(const Snapshot &other) {
        if (this != &other) {
            data = other.data;
            state = other.state;
        }
        return *this;
}
