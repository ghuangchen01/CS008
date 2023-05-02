//
// Created by Guanhao Huang Chen on 4/24/23.
//

#ifndef TYPINGPROJECTSFML_NEW__STATE_H
#define TYPINGPROJECTSFML_NEW__STATE_H
#include "map"
#include "StateEnum.h"
class State {
public:
    State();
    bool checkState(stateEnum state) const;
    void enableState(stateEnum state);
    void disableState(stateEnum state);
    void setState(stateEnum state, bool value);
    void toggleState(stateEnum state);
private:
    std::map<stateEnum, bool> states;
};


#endif //TYPINGPROJECTSFML_NEW__STATE_H
