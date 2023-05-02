#include <iostream>
#include "window/Application.h"
#include "typing/TextInput.h"
int main() {
    Application app({720,420,32},"Typing Project");
    sf::Vector2f pos = {20,20};
    TextInput text(pos,"First Name",30);
    app.addDrawable(text);
}
