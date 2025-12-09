cmake_minimum_required(VERSION 3.15)
project(sorting LANGUAGES C)

set(SRC sorting.c compare.c)

add_library(sorting ${SRC})
target_include_directories(sorting PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include/)
target_include_directories(sorting PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../vector/)