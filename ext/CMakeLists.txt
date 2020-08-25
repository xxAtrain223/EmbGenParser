cmake_minimum_required(VERSION 3.0.2 FATAL_ERROR)
project(ext)

if (NOT TARGET gtest)
    set(gtest_force_shared_crt TRUE CACHE BOOL "")
    add_subdirectory(googletest)
endif()