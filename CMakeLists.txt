cmake_minimum_required(VERSION 3.5.0)
project(machine_learning_cpp VERSION 0.1.0 LANGUAGES C CXX)

add_executable(machine_learning_cpp main.cpp)

include_directories( ${OpenCV_INCLUDE_DIRS})

target_link_libraries(machine_learning_cpp ${OpenCV_LIBS})
include(CTest)
enable_testing()

