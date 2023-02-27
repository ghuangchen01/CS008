#include <iostream>
#include "Application.h"
#include "Circle.h"
int main() {
    Application app;
    Circle circle;
    circle.setRadius(50);
    app.addDrawable(circle);
    app.run();
    return 0;
}
