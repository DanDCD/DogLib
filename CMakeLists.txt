cmake_minimum_required(VERSION 3.22.1)
project (DogLib VERSION 1.0 DESCRIPTION "basic observer pattern implementation")
set(CMAKE_CXX_STANDARD 17)

add_library(DogLib SHARED
    include/dog.h
    src/dog.cpp)

target_include_directories(DogLib PUBLIC include)


include(CTest)
# if top level project, enable testing
if (${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
    add_executable(DogLibTest tests/dogTest.cpp)
    target_link_libraries(DogLibTest PRIVATE DogLib)
    add_test(Test DogLibTest COMMAND DogLibTest)
endif ()

