cmake_minimum_required(VERSION 3.6)
project(simple_math_lib)

set(CMAKE_CXX_STANDARD 11)

# add our directory
include_directories(src)
file(GLOB cpps src/*.cpp)
file(GLOB hpps src/*.hpp)

# add a library
add_library(simple_math SHARED ${cpps} ${hpps})

set(SOURCE_FILES main.cpp)
add_executable(mathman ${SOURCE_FILES})
target_link_libraries(mathman simple_math)

add_subdirectory(test)
