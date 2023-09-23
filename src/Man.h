#pragma one

#include "Character.h"
#include "Renderer.h"
#include <SDL2/SDL.h>

class Man: public Character {
    public:
        Man(const Renderer& renderer);
        int audacity;
        SDL_Rect collider;
        void interact();
};
