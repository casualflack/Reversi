#include "decorator.h"

Decorator::~Decorator(){
    delete next;
}

void Decorator::render(PPM& ppm){
    
}
// void Decorator::render(PPM &ppm){
//     next->render(ppm);
// }

