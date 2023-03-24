#include <iostream>
#include "window/Application.h"
#include "window/PageElement.h"
#include "window/TextBox.h"
#include "typing/Typing.h"
int main() {
    Application app({720,420,32},"Auto Correct");
    PageElement firstName({40,70},"first name:");
    TextBox box({210,70},{400,50});
    Typing typing({210,70});
    app.addDrawable(firstName);
    app.addDrawable(box);
    app.addDrawable(typing);
    app.run();
}
