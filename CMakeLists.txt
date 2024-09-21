cmake_minimum_required(VERSION 3.10)
project(DroneSurveillance)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(DroneSurveillance
    main.cpp
    Drone.cpp
    CityMap.cpp
    Object.cpp
)

target_include_directories(DroneSurveillance PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})