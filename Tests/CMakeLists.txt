cmake_minimum_required(VERSION 3.22.1)

project(ObserverSubjectTests LANGUAGES CXX)

add_executable(ObserverSubjectTests src/ObserverSubjectTests.cpp)

target_link_libraries(ObserverSubjectTests PRIVATE ObserverSubject)

add_test(NAME ObserverSubjectTests COMMAND ObserverSubjectTests)