#include <iostream>
#include "window/Application.h"
#include "DropdownMenu.h"
int main() {
    Application app({720,420,32},"Drop Down Menu");
    DropdownMenu dropdownMenu;
    app.addDrawable(dropdownMenu);
    app.run();
    return 0;
}
