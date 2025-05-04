cmake_minimum_required(VERSION 3.15)
project(boost_stacktrace_example)

find_package(Boost REQUIRED COMPONENTS stacktrace_basic)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE Boost::stacktrace_basic)
