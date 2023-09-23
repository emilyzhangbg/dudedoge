#include "Renderer.h"
#include <iostream>

Renderer::Renderer(const Game& game)
: game{game}
{
    init();
}

Renderer::~Renderer()
{
    SDL_DestroyRenderer(renderer);
}

bool Renderer::init()
{
    renderer = SDL_CreateRenderer(game.getHandle(), -1, SDL_RENDERER_ACCELERATED);

    if (renderer == nullptr)
    {
        std::cerr << "failed to create renderer" << std::endl;
        return false;
    }

    return true;
}

void Renderer::clearWindow()
{
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
}

void Renderer::present()
{
    SDL_RenderPresent(renderer);
}

Renderer::Handle Renderer::getHandle() const
{
    return renderer;
}