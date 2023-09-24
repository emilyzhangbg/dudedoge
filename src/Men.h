#pragma once

#include "Man.h"
#include <vector>

class Men {
public:
    Men(const Renderer &renderer, int difficulty);
    void drawMen();
    void moveMen();
    // std::vector<Man> getMen();

    int getX() { return x; }
    int getY() { return y; }
    int getSize() { return size; }


private:
    std::vector<Man> men;
    int difficulty = 1; // 1,2,3
    int size = 0;
    int x = 0;
    int y = 0;
    const Renderer& renderer;
};