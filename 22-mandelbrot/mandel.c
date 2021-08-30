#include <stdio.h>
#include "mandelbrot.h"

int main() {
    int w = 80;
    int h = 20;
    unsigned int pixels[80 * 20];
    mandelbrot(pixels, w, h, 1.5, -0.5, 0.0);
    int p = 0;
    for (int row = 0; row < h; row++) {
        for (int col = 0; col < w; col++) {
            if (pixels[p++] == FOREGROUND) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        puts("");
    }
    return 0;
}
