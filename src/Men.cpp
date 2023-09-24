#include "Men.h"
#include <cstdlib>
#include <time.h>

Men::Men(const Renderer &renderer, int difficulty) 
: renderer{renderer}, difficulty{difficulty} {
    switch(difficulty) {
    case 1:
        size = 10;
        break;
    case 2:
        size = 20;
        break;
    case 3:
        size = 30;
        break;
    default:
        break;
    }

    men.reserve(size);

    std::srand(time(0));

    for (int i = 0; i < size; ++i)
    {
        int x = std::rand() % 950 + 25;
        int y = std::rand() % 750 + 25;

        men.push_back(Man{renderer, difficulty, x, y});
    }
}

void Men::drawMen() {
    for (int i = 0; i < size; ++i) {
        men[i].updatePosition();
    }
}

void Men::moveMen() {
    for (int i = 0; i < size; ++i) {
        men[i].moveMan();
    }
}

// std::vector<Man> Men::getMen() {
//     return men;
// }