#pragma once

#include "Man.h"

class Men {
public:
    Men(const Renderer &renderer, int difficulty);
    void drawMen() const;
    void moveMen();

private:
    std::vector<Man> men;
    int difficulty = 0; // 0, 1, 2
    int size = 0;
    const Renderer& renderer;

};