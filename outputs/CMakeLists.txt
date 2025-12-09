cmake_minimum_required(VERSION 3.15)
project(outputs LANGUAGES C)

set(SRC outputs.c)

add_library(outputs ${SRC})
target_include_directories(outputs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include/)
target_include_directories(outputs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../vector/)