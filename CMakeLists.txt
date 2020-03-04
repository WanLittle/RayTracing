cmake_minimum_required(VERSION 2.6)

Project(RayTracing)

file(GLOB_RECURSE PROJECT_SOURCES src/*.c src/*.cpp)
file(GLOB_RECURSE PROJECT_HEADERS src/*.h src/*.inc)

add_executable(${PROJECT_NAME} ${PROJECT_HEADERS} ${PROJECT_SOURCES})
