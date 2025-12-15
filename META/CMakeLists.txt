cmake_minimum_required(VERSION 3.15)
project(META LANGUAGES C)

set(SRC META.c)

add_library(META ${SRC})
target_include_directories(META PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include/)
