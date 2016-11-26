cmake_minimum_required(VERSION 2.6) 
project(function)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories(${CMAKE_CURRENT_SOURCE_DIR} /tests/)


add_library(Test STATIC ${CMAKE_CURRENT_SOURCE_DIR}/source/function.cpp tests/main.cpp)

add_executable(tests ${TESTS_SOURCE} tests/init.cpp tests/main.cpp)

