# cmake_minimum_required(VERSION <specify CMake version here>)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled Line/sequencelist/main.c)
add_executable(untitled Line/sequencelist/first.c)
add_executable(untitled Line/sequencelist/SqList.h)