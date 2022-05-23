cmake_minimum_required(VERSION 3.21)
project(RK2)

set(CMAKE_CXX_STANDARD 14)

add_executable(RK2 main.cpp cmake-build-debug/tasks_rk2.cpp cmake-build-debug/tasks_rk2.h tasks_rk2.cpp tasks_rk2.h)
