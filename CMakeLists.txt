cmake_minimum_required(VERSION 3.22.1)
project(ObserverSubjectLib VERSION 0.1.0 LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)

# adds the library to whatever project is using it
add_library(${PROJECT_NAME} STATIC)



# setup source files
file (GLOB sourcefiles "src/*.cpp")
target_sources(${PROJECT_NAME} 
    PRIVATE
        ${sourcefiles}
)



# setup include directories
target_include_directories(${PROJECT_NAME}
    PRIVATE
        src
    PUBLIC
        include
)


include(CTest)
enable_testing()



