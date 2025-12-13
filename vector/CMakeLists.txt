cmake_minimum_required(VERSION 3.15)
project(vector LANGUAGES C)

set(SRC vector.c META.c)

add_library(vector ${SRC})
target_include_directories(vector PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include/)
