//
// Created by Guanhao Huang Chen on 4/24/23.
//

#include "State.h"

State::State() {
    for (int i = 0; i < LASTSTATE; i++)
    {
        states[static_cast<stateEnum>(i)] = false;
    }
}

bool State::checkState(stateEnum state) const {
    return states.at(state);
}

void State::enableState(stateEnum state) {
    states.at(state) = true;
}

void State::disableState(stateEnum state) {
    states.at(state) = false;
}

void State::setState(stateEnum state, bool value) {
    states.at(state) = value;
}

void State::toggleState(stateEnum state) {
    setState(state,!states.at(state));
}
