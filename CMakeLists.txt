cmake_minimum_required(VERSION 3.1)

project(leetcode)

include(CheckIncludeFiles)
include(CheckFunctionExists)
include(CheckSymbolExists)
include(CheckCXXCompilerFlag)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

set(3RDPARTY_LIBRARY_DIR ${CMAKE_SOURCE_DIR}/3rdparty)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake" "${CMAKE_MODULE_PATH}")

set(CMAKE_DEBUG_POSTFIX "_debug")

find_package(GTEST REQUIRED)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(
    /usr/include/c++/../../include
    /usr/include/c++/7
    /usr/local/include
    )

add_definitions(-std=c++11)

add_subdirectory(leetcode)
add_subdirectory(cppunit)

