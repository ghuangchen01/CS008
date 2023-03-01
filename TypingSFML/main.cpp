#include <iostream>
#include "SFML/Graphics.hpp"
#include "Application.h"
#include "textBox.h"
#include "Typing.h"
int main() {
    Application app({720,420,32},"typing");
    Typing typing(app.getWindow(),sf::Color::Red);
    app.addDrawable(typing);
    app.run();
    return 0;
}
