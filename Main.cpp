#include "../../Header/Core/GameWindowManager.h"
#include "../../Header/Event/EventManager.h"

int main() {
    // Create our window manager instance
    Core::GameWindowManager gameWindowManager;
    EventManager eventManager;


    // Initialize the window
    gameWindowManager.initialize();

    while (gameWindowManager.isGameRunning()) {
        //Check and Process Events
        eventManager.pollEvents(gameWindowManager.getGameWindow());
        gameWindowManager.render();
    }

    return 0;
}