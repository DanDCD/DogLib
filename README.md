# ObserverSubjectLib
A basic implementation of the observer pattern in C++.

## Usage
1. Clone this repository
2. cd into the repo
3. run `mkdir build && cd build && cmake .. && sudo make install`

The Library will now be available to any other C++ Project using CMake.

To Include the Library in your Project, update your `CMakeLists.txt` to look like:

```
cmake_minimum_required(VERSION  3.22.1)
project (YourProject)
set(CMAKE_CXX_STANDARD 17) # or whatever standard you use

find_library(OBSERVERSUBJECT_LIB libObserverSubject.so)

add_executable(YourProject src/main.cpp) # or whatever source files you use
target_link_libraries(YourProject PRIVATE ObserverSubject)
```

You should now be able to build and run using this library!

## Testing
Should you want to test this library:
1. cd into build dir
2. run `ctest`