cmake_minimum_required(VERSION 3.15)
project(intputs LANGUAGES C)

set(SRC inputs.c)

add_library(inputs ${SRC})
target_include_directories(inputs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../META/)
target_include_directories(inputs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include/)
target_include_directories(inputs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../vector/)
