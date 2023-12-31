#include <iostream>
#include "Game.h"
#include "Renderer.h"
// #include "SDL_image.h"

int main (int argc, char *argv[]) {
    Game game{"Dude Doge", 1000, 800};
    Renderer renderer{game};

    std::cout << "hi" << std::endl;

    // SDL_Surface* backgroundImage = IMG_Load("background.jpg");

    while(!game.isClosed())
    {
        game.pollEvents();
        renderer.clearWindow();
        renderer.present();
    }

    return 0;
}
