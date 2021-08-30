cmake_minimum_required(VERSION 3.16)
project(rabbits C)

set(CMAKE_C_STANDARD 99)

add_executable(rabbits rabbits.c bunny.c)

add_executable(rq rabbit_query.c bunny.c)
