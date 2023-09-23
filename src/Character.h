#pragma once


#include "Renderer.h"
#include <SDL2/SDL.h>

class Character {
    public:
        Character(const Renderer& renderer);
        void move(int steps, int direction);
        void updatePosition() const;
        void pollEvents();

    protected:
        int x = 0;
        int y = 0;
    
    const Renderer& renderer;
};