cmake_minimum_required(VERSION 3.13)  # CMake version check
project(simple_game)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 20)            # Enable c++14 standard

set(SFML_STATIC_LIBRARIES TRUE)

## In most cases better set in the CMake cache
set(SFML_DIR ${CMAKE_CURRENT_LIST_DIR}/lib/SFML-2.5.1/lib/cmake/SFML)
add_subdirectory(lib)
add_subdirectory(src)