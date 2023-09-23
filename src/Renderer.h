#pragma once

#include <string>
#include <SDL2/SDL.h>
#include "Game.h"


class Renderer {
public:
    using Handle = SDL_Renderer*;
    Renderer(const Game &game);
    ~Renderer();
    Renderer(const Renderer&) = delete;
    Renderer& operator=(const Renderer&) = delete;
    Renderer(Renderer&&) = delete;
    Renderer& operator=(Renderer&&) = delete;

    void clearWindow();
    void present();
    
    Handle getHandle() const;
    

private:
    bool init();
    const Game& game;
    Handle renderer = nullptr;
};