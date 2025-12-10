cmake_minimum_required(VERSION 3.15)
project(flag LANGUAGES C)

set(SRC flag.c)

add_library(flag ${SRC})
target_include_directories(flag PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include/)
