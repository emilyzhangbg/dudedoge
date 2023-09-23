#pragma once

#include <string>
#include <SDL2/SDL.h>
#include <vector>

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
    Handle getHandle() const;

    std::vector<std::vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

private:
    std::string title;
    int width  = 800;
    int height = 600;
    bool closed = false;

    bool init();

    Handle game = nullptr;
};