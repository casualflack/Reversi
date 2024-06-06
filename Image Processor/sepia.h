#ifndef SEPIA_H
#define SEPIA_H

#include "decorator.h"

class sepia:public Decorator {

public:
    sepia(Image* p):Decorator{p}{}
    void render(PPM &ppm) override;
};

#endif
