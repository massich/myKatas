project(largest-series-product)
cmake_minimum_required( VERSION 3.1 )

set(CMAKE_CXX_STANDARD          14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main largest_series_product.cpp)

enable_testing()
add_test(NAME main COMMAND main)
set_tests_properties( main
  PROPERTIES PASS_REGULAR_EXPRESSION "Hello, World!")
