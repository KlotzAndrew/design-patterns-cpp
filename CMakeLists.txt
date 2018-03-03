cmake_minimum_required (VERSION 3.5)
project (DesignPatterns)

set(CMAKE_CXX_STANDARD 14)

enable_testing()

add_executable(SingletonTest test/creational/singleton_test.cpp)
add_test(NAME SingletonTest COMMAND SingletonTest)

add_executable(PrototypeTest test/creational/prototype_test.cpp)
add_test(NAME PrototypeTest COMMAND PrototypeTest)

add_executable(FactoryTest test/creational/factory_test.cpp)
add_test(NAME FactoryTest COMMAND FactoryTest)

add_executable(AdapterTest test/structural/adapter_test.cpp)
add_test(NAME AdapterTest COMMAND AdapterTest)

add_executable(ChainOfResponsibilityTest test/behavioral/chain_of_responsibility_test.cpp)
add_test(NAME ChainOfResponsibilityTest COMMAND ChainOfResponsibilityTest)
