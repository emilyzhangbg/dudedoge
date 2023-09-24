#pragma once

#include <string>
#include <SDL2/SDL.h>
// #include "Men.h"

class Game {
public:
    using Handle = SDL_Window*;
    Game(const std::string &title, int width, int height);
    ~Game();
    Game(const Game&) = delete;
    Game& operator=(const Game&) = delete;
    Game(Game&&) = delete;
    Game& operator=(Game&&) = delete;

    void pollEvents();
    bool isClosed();
    // bool menCollision(Character mainCharacter, Men man);
    Handle getHandle() const;

private:
    std::string title;
    int width  = 800;
    int height = 600;
    bool closed = false;

    bool init();

    Handle game = nullptr;
};