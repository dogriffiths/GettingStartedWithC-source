#include "mandelbrot.h"

void mandelbrot(unsigned int* pixels, int w, int h, double magnify,
                double offsetX, double offsetY)
{
    long double x,xx,y,cx,cy;
    int hx,hy;
    unsigned int iteration;
    unsigned int p = 0;
    double m3 = magnify / 3;

    for (hy = 0; hy < h; hy++)  {
        cy = (((double)hy / h - 0.5) / m3) - offsetY;
        for (hx = 0; hx < w; hx++)  {
            cx = (((double)hx / w - 0.5) / m3) + offsetX;
            x = 0.0;
            y = 0.0;
            for (iteration = 1; iteration < 100; iteration++)  {
                xx = x * x - y * y + cx;
                y = 2.0 * x * y + cy;
                x = xx;
                if (x * x + y * y > 4.0)  iteration = 999999;
            }
            pixels[p++] = (iteration < 10000) ? FOREGROUND : BACKGROUND;
        }
    }
}
