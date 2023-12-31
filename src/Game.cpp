#include "Game.h"
#include "Men.h"
#include <iostream>
#include <vector>

Game::Game(const std::string &title, int width, int height)
: title{title}, width{width}, height{height}
{
    if (!init())
    {
        closed = true;
    }
}

Game::~Game()
{
    SDL_DestroyWindow(game);
    SDL_Quit();
}

bool Game::init()
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        std::cerr << "failed to init window" << std::endl;
        return false;
    }

    game = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, 0);

    if (game == nullptr)
    {
        std::cerr << "failed to create window" << std::endl;
        return false;
    }

    return true;
}

bool Game::isClosed()
{
    return closed;
}

void Game::pollEvents()
{
    SDL_Event event;

    if (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
            closed = true;
            break;
        }
    }

}

// bool Game::menCollision(Character mainCharacter, Men npc)
// {
//     bool collision = false;

//     for(int i=0; i < npc.getSize(); i++) {
//         if(npc.men[i].getX() == mainCharacter.getX() || npc.men[i].getY() == mainCharacter.getY()) {
//             collision = true;
//             break;
//     }
//     }
//     collision = false;
// }

Game::Handle Game::getHandle() const
{
    return game;
}