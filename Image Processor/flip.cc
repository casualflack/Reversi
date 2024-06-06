#include "flip.h"
using namespace std;

void flip::render(PPM &ppm){
    next->render(ppm);
    int width = ppm.getWidth();
    int height = ppm.getHeight();
    vector<Pixel> & pixelvec = ppm.getPixels();
    for (int i = 0; i < height; i++){
        for (int j = i * width; j < i * width + (width/2); j++){
            Pixel tmp = pixelvec[j];
            pixelvec[j] = pixelvec[ (i+1)*width -(j-i*width) -1];
            pixelvec[(i+1)*width - (j- i*width) -1 ] = tmp;
        }
    }   
}

