cmake_minimum_required(VERSION 3.17)
project(cutil C)

set(CMAKE_C_STANDARD 99)

add_executable(cutil main.c queue.c queue.h)