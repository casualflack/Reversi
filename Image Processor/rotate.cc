#include "rotate.h"
using namespace std;

void rotate::render(PPM &ppm){
    next->render(ppm);
    int& width = ppm.getWidth();
    int& height = ppm.getHeight();
    vector<Pixel>& pixelvec = ppm.getPixels();
    vector<Pixel> copyvector = pixelvec;
    for (int i = 0; i < width; i++){
        for (int j = 0; j < height; j++){
            pixelvec[i * height + j] = copyvector[width * (height - j - 1) + i];
        }
    }  
    int tmp = height;
    height = width;
    width = tmp;  
}
