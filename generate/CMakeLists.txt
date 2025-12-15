cmake_minimum_required(VERSION 3.15)
project(generate LANGUAGES C)

set(SRC generate.c)

add_library(generate ${SRC})
target_include_directories(generate PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include/)
target_include_directories(generate PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../vector/)
target_include_directories(generate PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../META/)