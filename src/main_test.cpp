#include <iostream>
#include "Game.h"
#include "Renderer.h"
#include "Character.h"

int main (int argc, char *argv[]) {
    Game game{"Dude Doge", 1000, 800};
    Renderer renderer{game};
    Character player{renderer};

    std::cout << "hi" << std::endl;

    while(!game.isClosed())
    {
        player.pollEvents();
        game.pollEvents();
        renderer.clearWindow();
        player.updatePosition();
        renderer.present();
    }

    return 0;
}
