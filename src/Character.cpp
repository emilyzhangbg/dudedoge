#include "Character.h"
#include <iostream>

Character::Character(const Renderer& renderer)
: renderer{renderer} {
    x = 0;
    y = 0;

    updatePosition();
}

void Character::move(int steps, int direction) {
    switch (direction) {
    // left
    case 0:
        if (x > (0 + 5))
            x -= 5;
        break;
    // right
    case 1:
        if (x < (1000 - 5))
            x += 5;
        break;
    // up
    case 2:
        if (y > (0 + 5))
            y -= 5;
        break;
    // down
    case 3:
        if (y < (800 - 5))
            y += 5;
        break;
    }
}

void Character::pollEvents() {
    SDL_Event event;

    if (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym) {
            case SDLK_LEFT:
                move(4, 0);
                break;
            case SDLK_RIGHT:
                move(4, 1);
                break;
            case SDLK_UP:
                move(4, 2);
                break;
            case SDLK_DOWN:
                move(4, 3);
                break;
            }
        }
    }
}

void Character::updatePosition() const {
    SDL_Rect rect;

    rect.w = 15;
    rect.h = 15;
    rect.x = x;
    rect.y = y;

    SDL_SetRenderDrawColor(renderer.getHandle(), 0, 0, 0, 255);
    SDL_RenderFillRect(renderer.getHandle(), &rect);
}