cmake_minimum_required(VERSION 3.25.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(
  aqt_bug_repro
  VERSION 0.0.1
  LANGUAGES CXX)


include(CTest)
find_package(Qt6 REQUIRED COMPONENTS Test Core Network)
find_package(Catch2 REQUIRED COMPONENTS Catch2)
include(Catch)
set(TESTS_TARGET "test_qtgql")
file(GLOB_RECURSE TEST_SRCS ${PROJECT_SOURCE_DIR}/test_*.cpp)

add_executable(
  ${TESTS_TARGET}
  main.cpp ${TEST_SRCS})

set_target_properties(${TESTS_TARGET} PROPERTIES AUTOMOC TRUE)
target_link_libraries(${TESTS_TARGET} PRIVATE Catch2::Catch2)
target_link_libraries(${TESTS_TARGET} PRIVATE Qt6::Core Qt6::Test)
catch_discover_tests(${TESTS_TARGET})
