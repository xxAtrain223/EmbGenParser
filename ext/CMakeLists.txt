cmake_minimum_required(VERSION 3.0.2 FATAL_ERROR)
project(ext)

add_library(tinyxml2 tinyxml2/tinyxml2.cpp)
target_include_directories(tinyxml2 PUBLIC tinyxml2)

if (NOT TARGET gtest)
    set(gtest_force_shared_crt TRUE CACHE BOOL "")
    add_subdirectory(googletest)
endif()