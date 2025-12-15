cmake_minimum_required(VERSION 3.15)

project(lab3 LANGUAGES C)

set(SRC main.c)
set(LIBS sorting outputs inputs flag generate vector META)
add_executable(lab3 ${SRC})
add_subdirectory(META)
add_subdirectory(vector)
add_subdirectory(sorting)
add_subdirectory(outputs)
add_subdirectory(inputs)
add_subdirectory(flag)
add_subdirectory(generate)

target_link_libraries(lab3 ${LIBS})