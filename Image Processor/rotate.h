#ifndef ROTATE_H
#define ROTATE_H

#include "decorator.h"

class rotate:public Decorator {

public:
    rotate(Image* p):Decorator{p}{}
    void render(PPM &ppm) override;
};

#endif
