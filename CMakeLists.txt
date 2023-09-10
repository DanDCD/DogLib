cmake_minimum_required(VERSION 3.22.1)
project (ObserverSubject VERSION 1.0 DESCRIPTION "basic observer pattern implementation")
set(CMAKE_CXX_STANDARD 17)

# add main library
add_subdirectory(Lib)

# potentially add tests
include(CTest)
# if top level project, enable testing
if (${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
    add_subdirectory(Tests)
endif ()

enable_testing()