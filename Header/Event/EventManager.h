#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;


    class EventManager 
    {
        public:
            void pollEvents(RenderWindow* game_window); // Process all events
            bool isKeyPressed(sf::Keyboard::Key key);   // Check specific key
            bool isLeftMouseButtonClicked();
    };
