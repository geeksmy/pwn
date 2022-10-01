cmake_minimum_required(VERSION 3.23)
project(pwn C)

set(CMAKE_C_STANDARD 99)
set(PROJECT_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(SOURCE_ROOT_DIR ${PROJECT_ROOT_DIR}/source)

include_directories(${SOURCE_ROOT_DIR})

add_subdirectory(source/matrix)