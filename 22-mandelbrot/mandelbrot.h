#ifndef MANDELBROT_H
#define MANDELBROT_H

#define FOREGROUND 0xffffff00
#define BACKGROUND 0xffff00ff

void mandelbrot(unsigned int* pixels, int w, int h, double magnify,
                double offsetX, double offsetY);

#endif
