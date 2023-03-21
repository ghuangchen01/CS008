#include <iostream>
#include "window/Application.h"
#include "window/PageElement.h"
#include "window/TextBox.h"
#include "typing/Typing.h"
int main() {
    Application app({720,420,32},"Typing Project");
    PageElement firstName({40,140},"first name:");
    PageElement lastName({40,280},"last name:");
    TextBox box1({210,140},{400,50});
    TextBox box2({210,280},{400,50});
    Typing typing({210,140});
    app.addDrawable(firstName);
    app.addDrawable(lastName);
    app.addDrawable(box1);
    app.addDrawable(box2);
    app.addDrawable(typing);
    app.run();
}
