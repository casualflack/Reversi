#ifndef DECORATOR_H
#define DECORATOR_H

#include "image.h"

class Decorator: public Image {
protected:
    Image* next;
public:
    Decorator(Image* p): next{p} {}
    virtual ~Decorator();
    void render(PPM &ppm) override;
};

#endif
