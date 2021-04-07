cmake_minimum_required(VERSION 3.11)
project(ps3 C)

set(CMAKE_C_STANDARD 99)

add_executable(ps3 main.c node.h node.c list.c list.h)