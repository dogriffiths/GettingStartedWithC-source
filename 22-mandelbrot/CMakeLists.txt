cmake_minimum_required(VERSION 3.16)
project(mandelbrot C)

set(CMAKE_C_STANDARD 99)

add_executable(mandel mandel.c mandelbrot.c)

add_library(mandelbrot SHARED mandelbrot.c)
