cmake_minimum_required(VERSION 3.15)

project(lab3 LANGUAGES C)

set(SRC main.c)
add_executable(lab3 ${SRC})
add_subdirectory(vector)

target_link_libraries(lab3 vector)