project(largest-series-product)
cmake_minimum_required( VERSION 3.1 )

set(CMAKE_CXX_STANDARD          14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(main largest_series_product.cpp)

add_executable(runUnitTest largest_series_product_test.cpp)
target_link_libraries(runUnitTest gtest ${GTEST_LIBRARIES})

enable_testing()
add_test(NAME main COMMAND main)
set_tests_properties( main
  PROPERTIES PASS_REGULAR_EXPRESSION "Hello, World!\n0")

add_test(NAME unit COMMAND runUnitTest)
