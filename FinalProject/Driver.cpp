//
// Created by Guanhao Huang Chen on 4/25/23.
//

#include "Driver.h"
#include "testGui.h"
void Driver::run() {
    Application app({2040,1080,32},"Final Project");
    testGui test;
    app.addDrawable(test);
    app.run();
}
