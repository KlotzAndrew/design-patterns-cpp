cmake_minimum_required (VERSION 3.5)
project (DesignPatterns)

set(CMAKE_CXX_STANDARD 14)

enable_testing()

add_executable(SingletonTest test/creational/singleton_test.cpp)
add_test(NAME SingletonTest COMMAND SingletonTest)

add_executable(AdapterTest test/structural/adapter_test.cpp)
add_test(NAME AdapterTest COMMAND AdapterTest)
