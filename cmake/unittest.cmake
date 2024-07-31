
cmake_policy(SET CMP0135 NEW)

enable_testing()

find_package(GTest)
if (NOT GTest_FOUND)
  include (FetchContent)

  set (GTestURL "https://github.com/google/googletest/releases/download/v1.15.0/googletest-1.15.0.tar.gz")
  message (STATUS "Fetch GTest from URL : ${GTestURL}")

  FetchContent_Declare(googletest URL ${GTestURL})

  FetchContent_MakeAvailable(googletest)
endif()

add_library(unittest_interface INTERFACE)
target_link_libraries(unittest_interface INTERFACE GTest::GTest GTest::Main)

