#include <iostream>
#include <SFML/Graphics.hpp>
#include "Text.h"
int main() {
    sf::RenderWindow window({2048, 500, 32}, "Shadow Effect");
    Text text;
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(sf::Event::Closed == event.type)
                window.close();
        }
        window.clear();
        window.draw(text);
        window.display();
    }
}
