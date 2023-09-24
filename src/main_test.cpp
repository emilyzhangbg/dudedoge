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

        SDL_Surface * image = SDL_LoadBMP("image.bmp");
        SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer.getHandle(), image);
        SDL_RenderPresent(renderer.getHandle());

        renderer.clearWindow();
        player.updatePosition();
        renderer.present();
    }

    return 0;
}
