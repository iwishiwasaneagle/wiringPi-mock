cmake_minimum_required(VERSION 3.9)
project(wiringPi-examples)

find_package(wiringPi REQUIRED)

file(GLOB EXAMPLE_SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

foreach(example_source_file ${EXAMPLE_SOURCE_FILES})

    get_filename_component( example_out_file ${example_source_file} NAME_WE )
    set(example_out_file "${example_out_file}.out")
    
    message(STATUS "Configuring ${example_source_file} to compile to ${example_out_file}" )

    add_executable(${example_out_file} ${example_source_file})

    target_link_libraries(${example_out_file} PRIVATE ${WIRINGPI_LIBRARIES})

endforeach( example_source_file ${EXAMPLE_SOURCE_FILES} )


