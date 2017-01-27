include_directories(include)

file(GLOB ucpps unit/*.cpp)
file(GLOB uhpps unit/*.hpp)

add_executable(unit main.cpp ${ucpps} ${uhpps})
target_link_libraries(unit simple_math)