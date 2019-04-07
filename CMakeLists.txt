cmake_minimum_required(VERSION 3.11)
project(Find_mistakes)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CXX_GNU_COMPILE_FLAGS "-Wall -pedantic -Wextra -Werror")
set(CXX_CLANG_COMPILE_FLAGS "-Wall -pedantic -Wextra -Werror")

add_executable(find_mistakes src/main.cpp include/List.h)
