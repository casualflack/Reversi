#ifndef FLIP_H
#define FLIP_H

#include "decorator.h"

class flip:public Decorator {

public:
    flip(Image* p):Decorator{p}{}
    void render(PPM &ppm) override;
};

#endif
