#include <iostream>
#include "Game.h"
#include "Renderer.h"

int main (int argc, char *argv[]) {
    Game game{"Dude Doge", 1000, 800};
    Renderer renderer{game};

    std::cout << "hi" << std::endl;

    while(!game.isClosed())
    {
        game.pollEvents();
        renderer.clearWindow();
        renderer.present();
    }

    return 0;
}
