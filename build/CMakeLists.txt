cmake_minimum_required(VERSION 3.10)
project(OrderSimulator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_library(ZMQ_LIB zmq)
find_path(ZMQ_INCLUDE_DIR zmq.hpp PATH_SUFFIXES include)

add_executable(OrderSimulator src/main.cpp src/order_simulator.cpp)
target_include_directories(OrderSimulator PRIVATE ${ZMQ_INCLUDE_DIR})
target_link_libraries(OrderSimulator PRIVATE ${ZMQ_LIB} pthread)