cmake_minimum_required(VERSION 3.3)
project(Geometria)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Elements/Point.cpp Elements/Point.h Elements/Vector.cpp Elements/Vector.h Elements/Segment.cpp Elements/Segment.h ElementsTests.cpp ElementsTests.h)
add_executable(Geometria ${SOURCE_FILES})