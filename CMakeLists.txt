cmake_minimum_required(VERSION 3.22.1)

project (ObserverSubject VERSION 1.0 DESCRIPTION "basic observer pattern implementation")
set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(ObserverSubject SHARED 
    src/observer.cpp
    src/subject.cpp)


install(TARGETS ObserverSubject DESTINATION /usr/lib)
install(FILES include/observer.h include/subject.h DESTINATION include)