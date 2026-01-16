cmake_minimum_required(VERSION 4.1)
project(gloop-lang C)

set(CMAKE_C_STANDARD 23)

file(GLOB_RECURSE sources CONFIGURE_DEPENDS "src/*.c")
file(GLOB_RECURSE headers CONFIGURE_DEPENDS "include/*.h")

add_executable(${PROJECT_NAME} ${sources} ${headers})

target_include_directories(${PROJECT_NAME} PRIVATE include)
