#include "../../Header/Event/EventManager.h"

namespace Event1
{
    bool EventManager::isKeyPressed(sf::Keyboard::Key key) 
    {
        // Detect if a specific key is pressed
        return sf::Keyboard::isKeyPressed(key);
    }

    void EventManager::pollEvents(RenderWindow* game_window) 
    {
        sf::Event event;
        while (game_window->pollEvent(event)) 
        {
            // Previous Code

            // Check for Escape key
            if (isKeyPressed(sf::Keyboard::Escape)) 
            {
                game_window->close();
            }
        }
    }
}
