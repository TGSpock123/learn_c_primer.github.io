cmake_minimum_required(VERSION 3.24)
project(9_plus C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(9_plus 9.30.c 9.31.c 9.30_31.h)
