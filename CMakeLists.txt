cmake_minimum_required(VERSION 3.10)
project(10-herencia-polim-salario-nima)

set(CMAKE_CXX_STANDARD 17)

include_directories(src/model src/view)

file(GLOB MODEL_SOURCES "src/model/*.cpp")
file(GLOB VIEW_SOURCES "src/view/*.cpp")

add_executable(10-herencia-polim-salario-nima src/main.cpp ${MODEL_SOURCES} ${VIEW_SOURCES})


