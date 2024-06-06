#include "sepia.h"
using namespace std;

void sepia::render(PPM &ppm){
    next->render(ppm);
    vector<Pixel>& pixelvec = ppm.getPixels();
    vector<Pixel> copyvector = pixelvec;
    for (long unsigned int i = 0; i < pixelvec.size(); i++){
        pixelvec[i].r = copyvector[i].r *.393 + copyvector[i].g * .769 + copyvector[i].b * .189;
        if (pixelvec[i].r > 255) pixelvec[i].r = 255;
        pixelvec[i].g = copyvector[i].r *.349 + copyvector[i].g * .686 + copyvector[i].b * .168;
        if (pixelvec[i].g > 255) pixelvec[i].g = 255;
        pixelvec[i].b = copyvector[i].r *.272 + copyvector[i].g * .534 + copyvector[i].b * .131;
        if (pixelvec[i].b > 255) pixelvec[i].b = 255;
    }
}
