cmake_minimum_required(VERSION 3.2)

project(wiringPi VERSION 1.0 DESCRIPTION "wiringPi simulation")

include(${PROJECT_SOURCE_DIR}/cmake/SetEnv.cmake)

add_subdirectory(${LIBRARY_FOLDER})
