include (../cmake/unittest.cmake)

FILE(GLOB ALL_TESTS *test*.c *test*.cpp)

add_executable(unittest ${ALL_TESTS})
target_link_libraries(unittest PRIVATE unittest_interface)

add_test(unittest ${CMAKE_CURRENT_BINARY_DIR}/unittest)
add_custom_target(test COMMAND ctest WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

