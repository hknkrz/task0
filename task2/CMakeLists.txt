cmake_minimum_required(VERSION 3.0)
project(TT2)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
include_directories(${CMAKE_SOURCE_DIR})
add_subdirectory(${CMAKE_SOURCE_DIR}/B)
execute_process(
        COMMAND python3 ${CMAKE_SOURCE_DIR}/A/preparing.py
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/A
)
add_executable(C ${CMAKE_SOURCE_DIR}/C/main.cpp)
target_link_libraries(C Library)
