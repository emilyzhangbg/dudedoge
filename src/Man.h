#pragma one

#include "Character.h"
#include "Renderer.h"
#include <SDL2/SDL.h>

class Man {
    public:
        Man(const Renderer& renderer, int difficulty, int x, int y);
        int getAudacity();
        void highAudacity();
        void moveMan();
        void updatePosition();

    private:
        int x;
        int y;
        int audacity;
        const Renderer& renderer;
};
