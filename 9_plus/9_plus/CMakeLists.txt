cmake_minimum_required(VERSION 3.24)
project(9_plus C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(9_plus
        9.35.c
        9.35_36.h
        9.36.c)
