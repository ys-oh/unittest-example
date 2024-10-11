cmake_minimum_required(VERSION 3.24.0)

project(unittest-example)

if (BUILD_TESTS)
  add_subdirectory(tests)
endif()
